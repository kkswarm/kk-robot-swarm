#!/bin/sh
# ***************************************************************************************
#     set_usb_priority.sh
# ***************************************************************************************

DisplayHelp()
{
    echo ""
    echo "NAME"
    echo "    set_usb_priority.sh - Manages udev rules independently of the udev version."
    echo ""
    echo "SYNOPSIS"
    echo "    set_udev_rules.sh [ --add=<vendor-id> ][ --remove=<vendor-id> ][ --removeall ][ --help ]"
    echo ""
    echo "DESCRIPTION"
    echo "    This script is used to create and remove udev rules from the system."
    echo "    To allow access to USB3 Vision devices, you must add a rule based on"
    echo "    the device's vendor ID."
    echo ""
}

IsValidVendorID()
{
    if echo "$1" | grep -qE ^[0-9A-Fa-f]{4}$; then
        return 1
    else
        return 0
    fi
}

MakeRuleName()
{
    local FILE

    FILE=`echo $1 | awk '{print tolower($0)}'`

    eval "$2='/etc/udev/rules.d/80-drivers-HikSDK-$FILE.rules'"
}

CreateRuleFile()
{
    # Depending on the version of udev, we need to generate different type of files for the rules @#$@#$@
    VERSION_UDEV=`udevadm --version`
    if [ $VERSION_UDEV -gt 147 ]; then

> $FILENAME
cat > $1 <<__END__
ACTION=="add", SUBSYSTEM=="usb", ENV{DEVTYPE}=="usb_device", ATTRS{idVendor}=="$2", MODE="0666", GROUP="plugdev"
__END__

    else

> $FILENAME
cat > $1 <<__END__
SUBSYSTEM=="usb", SYSFS{idVendor}=="$2", MODE="0666"
__END__

    fi
}

Add()
{
    local FILENAME

    if [ ! -d "/etc/udev/rules.d" ]; then
        echo "Unable to find the folder that contains the rules (/etc/udev/rules.d)."
        exit 3
    fi
    if ! which udevadm >/dev/null 2>&1; then
        echo "Unable to find the udevadm tool to retrieve the current version of udev that is"
        echo "installed on this distribution." 
        echo "You must add the rule manually."
        exit 3
    fi
 
    MakeRuleName "$1" FILENAME
    echo "Adding rules for vendor ID $1."

    # Delete any existing rules with this name first
    rm -f $FILENAME

    # Create the new rule file
    CreateRuleFile "$FILENAME" "$1"
    # Set the permission to the files
    chmod u=rw,g=r,o=r $FILENAME

    # Reload the rules for the usb subsystem
    udevadm trigger --action=add --subsystem-match=usb --attr-match idVendor="$1"
    echo "The $FILENAME rule has been created."
}

Remove()
{
    local FILENAME

    if [ -d "/etc/udev/rules.d" ]; then

        MakeRuleName "$1" FILENAME
        echo "Removing the rules for vendor ID $1."
        rm -f $FILENAME

        if which udevadm >/dev/null 2>&1; then
            udevadm trigger --action=change --subsystem-match=usb --attr-match idVendor="$1"
        fi

        echo "The rules for vendor ID $1 have been removed."
    fi
}

RemoveAll()
{
    local FILENAME

    if [ -d "/etc/udev/rules.d" ]; then

        echo "Removing all rules."
        MakeRuleName "????" FILENAME
        rm -f $FILENAME

        # Recreate the pleora rule because it should be permanent
        MakeRuleName "28b7" FILENAME
        CreateRuleFile "$FILENAME" "28b7"

        if which udevadm >/dev/null 2>&1; then
            udevadm trigger --action=change --subsystem-match=usb 
        fi

        echo "All rules have been removed."
    fi
}

VENDORID=""

# Parse the input arguments
for i in $*
do
    case $i in        
        --add_pleora)
            VENDORID=28b7 
            ACTION="add"
            ;; 
        --add=0x*)
            VENDORID=0x${i#*=} 
            ACTION="add"
            ;; 
        --add=0X*)
            VENDORID=0X${i#*=} 
            ACTION="add"
            ;; 
        --add=*)
            VENDORID=${i#*=} 
            ACTION="add"
            ;; 
        --add)
            VENDORID=""
            ACTION="add"
            ;; 
        --remove_pleora)
            VENDORID=28b7 
            ACTION="remove"
            ;; 
        --remove=0x*)
            VENDORID=0x${i#*=} 
            ACTION="remove"
            ;; 
        --remove=0X*)
            VENDORID=0X${i#*=} 
            ACTION="remove"
            ;; 
        --remove=*)
            VENDORID=${i#*=} 
            ACTION="remove"
            ;;  
        --remove)
            VENDORID=""
            ACTION="remove"
            ;;
        --removeall)
            VENDORID="" 
            ACTION="removeall"
            ;;	
        --help)
            DisplayHelp
            exit 0
        ;;
        *)
        # unknown option
        DisplayHelp
        exit 1
        ;;
    esac
done

# Default variables
USER_ID=`id -u`

# Check required priviledge
if [ "$USER_ID" != "0" ]; then
  echo "Can only run this script as superuser (root account)."
  exit 1
fi


ACTION="add"

VENDORID="2bdf"
IsValidVendorID "$VENDORID"

# Now finally, we can process the information...
echo ""
if [ "$ACTION" = "add" ]; then
    Add $VENDORID
elif [ "$ACTION" = "remove" ]; then
    Remove $VENDORID
elif [ "$ACTION" = "removeall" ]; then
    RemoveAll
fi
echo ""



