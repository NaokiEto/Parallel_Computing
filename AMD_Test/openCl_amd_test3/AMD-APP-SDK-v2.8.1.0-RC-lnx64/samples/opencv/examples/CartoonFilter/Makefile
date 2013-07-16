DEPTH = ../../../..

include $(DEPTH)/make/openclsdkdefs.mk 

####
#
#  Targets
#
####

OPENCV			= 1
SAMPLE_EXE		= 1
EXE_TARGET 		= CartoonFilter
EXE_TARGET_INSTALL   	= CartoonFilter
ifneq ($(OS), lnx)
  C_DEBUG_FLAG     += /MDd
endif

####
#
#  C/CPP files
#
####

FILES 	= CartoonFilter
CLFILES	= CartoonFilter_Kernels.cl
IMAGES = CartoonFilter_Input.jpg

include $(DEPTH)/make/openclsdkrules.mk 

