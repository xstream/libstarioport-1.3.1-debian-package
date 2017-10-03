#Directory
TARGET_DIR=$(DESTDIR)/usr/lib
SOURCE_DIR=x64/StarIOPort/redistributables/bin
INCLUDE_TARGET_DIR=$(DESTDIR)/usr/include
INCLUDE_SOURCE_DIR=x64/StarIOPort/redistributables/include

#File
IOPORT=libStarIOPort
LIBUSB=libstarusb
INC_DIR=starmicronics

#Version
MAJOR=1
MINOR=3
REVISION=1
VERSION=$(MAJOR).$(MINOR).$(REVISION)

all:
	# pass

install:
	#Install library
	mkdir -p $(TARGET_DIR)
	cp -pf $(SOURCE_DIR)/$(IOPORT).so.$(VERSION) $(TARGET_DIR)
	cp -pf $(SOURCE_DIR)/$(LIBUSB).so.$(VERSION) $(TARGET_DIR)

	#Install header file
	mkdir -p $(INCLUDE_TARGET_DIR)/$(INC_DIR)
	chmod 755 $(INCLUDE_SOURCE_DIR)/$(INC_DIR)
	chmod 644 $(INCLUDE_SOURCE_DIR)/$(INC_DIR)/StarIOPort.h
	chmod 644 $(INCLUDE_SOURCE_DIR)/$(INC_DIR)/Platform.h
	chmod 755 $(INCLUDE_SOURCE_DIR)/$(INC_DIR)/platform
	chmod 644 $(INCLUDE_SOURCE_DIR)/$(INC_DIR)/platform/Linux.h

	cp -pfr $(INCLUDE_SOURCE_DIR)/* $(INCLUDE_TARGET_DIR)
	# ldconfig -n $(TARGET_DIR)
	# ln -fs $(TARGET_DIR)/$(IOPORT).so.$(MAJOR) $(TARGET_DIR)/$(IOPORT).so
	# ln -fs $(TARGET_DIR)/$(LIBUSB).so.$(MAJOR) $(TARGET_DIR)/$(LIBUSB).so

	echo Complete!
