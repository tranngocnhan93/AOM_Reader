ifeq ($(USE_SMART_BUILD),yes)
ifneq ($(findstring HAL_USE_MAC TRUE,$(HALCONF)),)
PLATFORMSRC += board/MACv1/hal_mac_lld.c
endif
else
PLATFORMSRC += board/MACv1/hal_mac_lld.c
endif

PLATFORMINC += board/MACv1
