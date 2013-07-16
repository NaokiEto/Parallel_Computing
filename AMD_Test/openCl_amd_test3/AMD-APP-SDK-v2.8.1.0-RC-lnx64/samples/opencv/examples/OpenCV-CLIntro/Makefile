DEPTH = ../../../..

include $(DEPTH)/make/openclsdkdefs.mk 

####
#
#  Targets
#
####

OPENCV			= 1
SAMPLE_EXE		= 1
EXE_TARGET 		= OpenCV-CLIntro
EXE_TARGET_INSTALL   	= OpenCV-CLIntro
ifneq ($(OS), lnx)
  C_DEBUG_FLAG     += /MDd
endif

####
#
#  C/CPP files
#
####

FILES 	= OpenCV-CLIntro
IMAGES = OpenCV-CLIntro_Input.jpg

include $(DEPTH)/make/openclsdkrules.mk 

