#!/bin/bash

./clean.sh

if [ ! -d  libstarioport/x64 ]; then
	wget "http://www.starmicronics.com/support/ZipFile.aspx?sat2=140" -O StarIO_Cpp_SDK_Linux_V104.zip
	unzip StarIO_Cpp_SDK_Linux_V104.zip -d StarIO_Cpp_SDK_Linux_V104
	cp -r StarIO_Cpp_SDK_Linux_V104/Software/Dependencies/x64 libstarioport/
fi

cp -r libstarioport libstarioport-1.3.1
tar zcf libstarioport_1.3.1.tar.gz libstarioport-1.3.1
cd libstarioport-1.3.1

dpkg-buildpackage -nc -b -uc -us
