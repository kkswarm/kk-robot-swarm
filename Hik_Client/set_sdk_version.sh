#/bin/sh


cd  /opt/MVS/lib

echo "create link to dynamic library"
if [ -d "/opt/MVS/lib/64" ]; then
ldconfig -n ./64
fi

if [ -d "/opt/MVS/lib/32" ]; then
ldconfig -n ./32
fi

if [ -d "/opt/MVS/lib/armhf" ]; then
ldconfig -n ./armhf
fi

if [ -d "/opt/MVS/lib/aarch64" ]; then
ldconfig -n ./aarch64
fi

if [ -d "/opt/MVS/lib/arm-none" ]; then
ldconfig -n ./arm-none
fi
