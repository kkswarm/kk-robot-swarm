#!/bin/sh
# ***************************************************************************************
#
#
# ***************************************************************************************

DISTRIBUTION="unknown"

if [ -f /etc/lsb-release ]; then
    if [ -f /lib/lsb/init-functions ]; then
        DISTRIBUTION=`grep DISTRIB_ID /etc/lsb-release | sed -e 's/DISTRIB_ID=//'`
    fi
elif [ -f /etc/os-release ]; then
    if [ -f /lib/lsb/init-functions ]; then
        DISTRIBUTION=`grep -w NAME /etc/os-release | sed 's/[^"]*"\([^"]*\)"/\1/'`
        if [ "$DISTRIBUTION" == "Debian GNU/Linux" ] ; then
            # Debian is close enough for the purposes of this script
            DISTRIBUTION="Ubuntu"
        fi
    fi
fi

if [ "$DISTRIBUTION" != "Ubuntu" ]; then
    echo ""
    echo "Unsupported distribution."
    echo ""
fi


if [ $(id -u) -ne 0 ] ; then
    echo "User has insufficient privileges. Please try sudo command."
    exit 1
fi

echo "Setting usbfs memory size to 500"
sh -c 'echo 500 > /sys/module/usbcore/parameters/usbfs_memory_mb'

