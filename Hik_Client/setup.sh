#!/bin/bash

DIRNAME=`dirname $0`
#PWD = `pwd`

cd $DIRNAME

#sed -i "s/export LD_LIBRARY_PATH/#export LD_LIBRARY_PATH/g" ~/.bashrc
source ~/.bashrc
if [ ! -d "/opt/MVS" ]; then
	echo "Install MVS,Please wait..."
	tar -C /opt -xzf ./MVS.tar.gz
else
	echo "Uninstall MVS,Please wait..."
	rm -rf /opt/MVS
	echo "Install MVS,Please wait..."
	tar -C /opt -xzf ./MVS.tar.gz
fi
#
if [ ! -d "/usr/local/Qt-5.6.3/lib/fonts" ]; then
	mkdir -p /usr/local/Qt-5.6.3/lib/fonts
	cp -r /opt/MVS/bin/fonts/* /usr/local/Qt-5.6.3/lib/fonts
else
	echo "path exist..."
fi
#

#if  cat ~/.bashrc | grep -c "export LD_LIBRARY_PATH=/opt/MVS/bin" > /dev/null
#then
#	echo "Include path exist"
#else
#  	echo   "export LD_LIBRARY_PATH=/opt/MVS/bin" >> ~/.bashrc
#fi

#source ~/.bashrc

echo "Set up the SDK environment..."

sh $DIRNAME/set_usb_priority.sh
source $DIRNAME/set_env_path.sh
sh $DIRNAME/set_sdk_version.sh

if [ -f /opt/MVS/driver/unload.sh ]; then
	sh /opt/MVS/driver/unload.sh
fi

sh /opt/MVS/logserver/RemoveServer.sh


sh /opt/MVS/logserver/InstallServer.sh


echo "Install MVS complete!"
echo "Tips: You should be launch a new terminal or execute source command for the bash environment!"
cd $PWD



