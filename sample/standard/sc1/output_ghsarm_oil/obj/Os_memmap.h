/******************************************************************************
*
*       NXP(TM) and the NXP logo are trademarks of NXP.
*       All other product or service names are the property of their respective owners.
*       (C) Freescale Semiconductor, Inc. 2013-2016
*       Copyright 2021 NXP
*
*       THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
*       BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF NXP.
*
*       Description: Memory map file
*
*       Note: The implementation that was used is: AUTOSAR_S32K
*       System Generator for AUTOSAR OS/S32K - Version: 4.0 Build 4.0.98
*
********************************************************************************/
/*  --- CONST DATA ---  */

#if defined(SND_APP_START_SEC_CONST_8)

#undef SND_APP_START_SEC_CONST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_c8"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_c8"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_CONST_8)

#undef SND_APP_STOP_SEC_CONST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_CONST_16)

#undef SND_APP_START_SEC_CONST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_c16"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_c16"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_CONST_16)

#undef SND_APP_STOP_SEC_CONST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_CONST_32)

#undef SND_APP_START_SEC_CONST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_c32"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_c32"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_CONST_32)

#undef SND_APP_STOP_SEC_CONST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_CONST_UNSPECIFIED)

#undef SND_APP_START_SEC_CONST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_cU"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_cU"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_CONST_UNSPECIFIED)

#undef SND_APP_STOP_SEC_CONST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- var DATA (in RAM or paged RAM) ---  */

#elif defined(SND_APP_START_SEC_VAR_8)

#undef SND_APP_START_SEC_VAR_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app0_v8_data"
#pragma ghs section bss=".app0_v8_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app0_v8", zidata=".app0_v8"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_VAR_8)

#undef SND_APP_STOP_SEC_VAR_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_VAR_16)

#undef SND_APP_START_SEC_VAR_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app0_v16_data"
#pragma ghs section bss=".app0_v16_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app0_v16", zidata=".app0_v16"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_VAR_16)

#undef SND_APP_STOP_SEC_VAR_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_VAR_32)

#undef SND_APP_START_SEC_VAR_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app0_v32_data"
#pragma ghs section bss=".app0_v32_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app0_v32", zidata=".app0_v32"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_VAR_32)

#undef SND_APP_STOP_SEC_VAR_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_VAR_UNSPECIFIED)

#undef SND_APP_START_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app0_vU_data"
#pragma ghs section bss=".app0_vU_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app0_vU", zidata=".app0_vU"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_VAR_UNSPECIFIED)

#undef SND_APP_STOP_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- FAST DATA (in direct page)  ---  */

#elif defined(SND_APP_START_SEC_VAR_FAST_8)

#undef SND_APP_START_SEC_VAR_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_v8_data"
#pragma ghs section bss=".sapp_v8_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_v8_data", zidata=".sapp_v8_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_VAR_FAST_8)

#undef SND_APP_STOP_SEC_VAR_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_VAR_FAST_16)

#undef SND_APP_START_SEC_VAR_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_v16_data"
#pragma ghs section bss=".sapp_v16_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_v16_data", zidata=".sapp_v16_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_VAR_FAST_16)

#undef SND_APP_STOP_SEC_VAR_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_VAR_FAST_32)

#undef SND_APP_START_SEC_VAR_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_v32_data"
#pragma ghs section bss=".sapp_v32_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_v32_data", zidata=".sapp_v32_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_VAR_FAST_32)

#undef SND_APP_STOP_SEC_VAR_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_VAR_FAST_UNSPECIFIED)

#undef SND_APP_START_SEC_VAR_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_vU_data"
#pragma ghs section bss=".sapp_vU_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_vU_data", zidata=".sapp_vU_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_VAR_FAST_UNSPECIFIED)

#undef SND_APP_STOP_SEC_VAR_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- FAST CONST DATA (in RAM or paged RAM) ---  */

#elif defined(SND_APP_START_SEC_CONST_FAST_8)

#undef SND_APP_START_SEC_CONST_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fc8"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fc8"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_CONST_FAST_8)

#undef SND_APP_STOP_SEC_CONST_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_CONST_FAST_16)

#undef SND_APP_START_SEC_CONST_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fc16"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fc16"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_CONST_FAST_16)

#undef SND_APP_STOP_SEC_CONST_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_CONST_FAST_32)

#undef SND_APP_START_SEC_CONST_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fc32"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fc32"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_CONST_FAST_32)

#undef SND_APP_STOP_SEC_CONST_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_START_SEC_CONST_FAST_UNSPECIFIED)

#undef SND_APP_START_SEC_CONST_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fcU"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fcU"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(SND_APP_STOP_SEC_CONST_FAST_UNSPECIFIED)

#undef SND_APP_STOP_SEC_CONST_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- CONST DATA ---  */

#elif defined(RCV_APP_START_SEC_CONST_8)

#undef RCV_APP_START_SEC_CONST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_c8"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_c8"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_CONST_8)

#undef RCV_APP_STOP_SEC_CONST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_CONST_16)

#undef RCV_APP_START_SEC_CONST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_c16"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_c16"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_CONST_16)

#undef RCV_APP_STOP_SEC_CONST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_CONST_32)

#undef RCV_APP_START_SEC_CONST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_c32"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_c32"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_CONST_32)

#undef RCV_APP_STOP_SEC_CONST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_CONST_UNSPECIFIED)

#undef RCV_APP_START_SEC_CONST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_cU"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_cU"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_CONST_UNSPECIFIED)

#undef RCV_APP_STOP_SEC_CONST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- var DATA (in RAM or paged RAM) ---  */

#elif defined(RCV_APP_START_SEC_VAR_8)

#undef RCV_APP_START_SEC_VAR_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app1_v8_data"
#pragma ghs section bss=".app1_v8_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app1_v8", zidata=".app1_v8"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_VAR_8)

#undef RCV_APP_STOP_SEC_VAR_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_VAR_16)

#undef RCV_APP_START_SEC_VAR_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app1_v16_data"
#pragma ghs section bss=".app1_v16_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app1_v16", zidata=".app1_v16"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_VAR_16)

#undef RCV_APP_STOP_SEC_VAR_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_VAR_32)

#undef RCV_APP_START_SEC_VAR_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app1_v32_data"
#pragma ghs section bss=".app1_v32_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app1_v32", zidata=".app1_v32"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_VAR_32)

#undef RCV_APP_STOP_SEC_VAR_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_VAR_UNSPECIFIED)

#undef RCV_APP_START_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app1_vU_data"
#pragma ghs section bss=".app1_vU_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app1_vU", zidata=".app1_vU"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_VAR_UNSPECIFIED)

#undef RCV_APP_STOP_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- FAST DATA (in direct page)  ---  */

#elif defined(RCV_APP_START_SEC_VAR_FAST_8)

#undef RCV_APP_START_SEC_VAR_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_v8_data"
#pragma ghs section bss=".sapp_v8_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_v8_data", zidata=".sapp_v8_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_VAR_FAST_8)

#undef RCV_APP_STOP_SEC_VAR_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_VAR_FAST_16)

#undef RCV_APP_START_SEC_VAR_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_v16_data"
#pragma ghs section bss=".sapp_v16_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_v16_data", zidata=".sapp_v16_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_VAR_FAST_16)

#undef RCV_APP_STOP_SEC_VAR_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_VAR_FAST_32)

#undef RCV_APP_START_SEC_VAR_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_v32_data"
#pragma ghs section bss=".sapp_v32_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_v32_data", zidata=".sapp_v32_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_VAR_FAST_32)

#undef RCV_APP_STOP_SEC_VAR_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_VAR_FAST_UNSPECIFIED)

#undef RCV_APP_START_SEC_VAR_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_vU_data"
#pragma ghs section bss=".sapp_vU_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_vU_data", zidata=".sapp_vU_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_VAR_FAST_UNSPECIFIED)

#undef RCV_APP_STOP_SEC_VAR_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- FAST CONST DATA (in RAM or paged RAM) ---  */

#elif defined(RCV_APP_START_SEC_CONST_FAST_8)

#undef RCV_APP_START_SEC_CONST_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fc8"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fc8"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_CONST_FAST_8)

#undef RCV_APP_STOP_SEC_CONST_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_CONST_FAST_16)

#undef RCV_APP_START_SEC_CONST_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fc16"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fc16"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_CONST_FAST_16)

#undef RCV_APP_STOP_SEC_CONST_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_CONST_FAST_32)

#undef RCV_APP_START_SEC_CONST_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fc32"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fc32"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_CONST_FAST_32)

#undef RCV_APP_STOP_SEC_CONST_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_START_SEC_CONST_FAST_UNSPECIFIED)

#undef RCV_APP_START_SEC_CONST_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fcU"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fcU"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(RCV_APP_STOP_SEC_CONST_FAST_UNSPECIFIED)

#undef RCV_APP_STOP_SEC_CONST_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- CONST DATA ---  */

#elif defined(TRUSTED_APP_START_SEC_CONST_8)

#undef TRUSTED_APP_START_SEC_CONST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_c8"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_c8"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_CONST_8)

#undef TRUSTED_APP_STOP_SEC_CONST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_CONST_16)

#undef TRUSTED_APP_START_SEC_CONST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_c16"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_c16"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_CONST_16)

#undef TRUSTED_APP_STOP_SEC_CONST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_CONST_32)

#undef TRUSTED_APP_START_SEC_CONST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_c32"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_c32"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_CONST_32)

#undef TRUSTED_APP_STOP_SEC_CONST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_CONST_UNSPECIFIED)

#undef TRUSTED_APP_START_SEC_CONST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=".sapp_cU"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_cU"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_CONST_UNSPECIFIED)

#undef TRUSTED_APP_STOP_SEC_CONST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section const=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- var DATA (in RAM or paged RAM) ---  */

#elif defined(TRUSTED_APP_START_SEC_VAR_8)

#undef TRUSTED_APP_START_SEC_VAR_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app2_v8_data"
#pragma ghs section bss=".app2_v8_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app2_v8", zidata=".app2_v8"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_VAR_8)

#undef TRUSTED_APP_STOP_SEC_VAR_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_VAR_16)

#undef TRUSTED_APP_START_SEC_VAR_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app2_v16_data"
#pragma ghs section bss=".app2_v16_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app2_v16", zidata=".app2_v16"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_VAR_16)

#undef TRUSTED_APP_STOP_SEC_VAR_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_VAR_32)

#undef TRUSTED_APP_START_SEC_VAR_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app2_v32_data"
#pragma ghs section bss=".app2_v32_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app2_v32", zidata=".app2_v32"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_VAR_32)

#undef TRUSTED_APP_STOP_SEC_VAR_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_VAR_UNSPECIFIED)

#undef TRUSTED_APP_START_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".app2_vU_data"
#pragma ghs section bss=".app2_vU_bss"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".app2_vU", zidata=".app2_vU"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_VAR_UNSPECIFIED)

#undef TRUSTED_APP_STOP_SEC_VAR_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- FAST DATA (in direct page)  ---  */

#elif defined(TRUSTED_APP_START_SEC_VAR_FAST_8)

#undef TRUSTED_APP_START_SEC_VAR_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_v8_data"
#pragma ghs section bss=".sapp_v8_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_v8_data", zidata=".sapp_v8_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_VAR_FAST_8)

#undef TRUSTED_APP_STOP_SEC_VAR_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_VAR_FAST_16)

#undef TRUSTED_APP_START_SEC_VAR_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_v16_data"
#pragma ghs section bss=".sapp_v16_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_v16_data", zidata=".sapp_v16_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_VAR_FAST_16)

#undef TRUSTED_APP_STOP_SEC_VAR_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_VAR_FAST_32)

#undef TRUSTED_APP_START_SEC_VAR_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_v32_data"
#pragma ghs section bss=".sapp_v32_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_v32_data", zidata=".sapp_v32_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_VAR_FAST_32)

#undef TRUSTED_APP_STOP_SEC_VAR_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_VAR_FAST_UNSPECIFIED)

#undef TRUSTED_APP_START_SEC_VAR_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data=".sapp_vU_data"
#pragma ghs section bss=".sapp_vU_bss"
#pragma ghs startdata

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata=".sapp_vU_data", zidata=".sapp_vU_bss"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_VAR_FAST_UNSPECIFIED)

#undef TRUSTED_APP_STOP_SEC_VAR_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs enddata
#pragma ghs section bss=default
#pragma ghs section data=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rwdata, zidata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- FAST CONST DATA (in RAM or paged RAM) ---  */

#elif defined(TRUSTED_APP_START_SEC_CONST_FAST_8)

#undef TRUSTED_APP_START_SEC_CONST_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fc8"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fc8"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_CONST_FAST_8)

#undef TRUSTED_APP_STOP_SEC_CONST_FAST_8
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_CONST_FAST_16)

#undef TRUSTED_APP_START_SEC_CONST_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fc16"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fc16"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_CONST_FAST_16)

#undef TRUSTED_APP_STOP_SEC_CONST_FAST_16
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_CONST_FAST_32)

#undef TRUSTED_APP_START_SEC_CONST_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fc32"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fc32"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_CONST_FAST_32)

#undef TRUSTED_APP_STOP_SEC_CONST_FAST_32
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_START_SEC_CONST_FAST_UNSPECIFIED)

#undef TRUSTED_APP_START_SEC_CONST_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section data2=".sapp_fcU"
#pragma ghs startsda

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata=".sapp_fcU"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(TRUSTED_APP_STOP_SEC_CONST_FAST_UNSPECIFIED)

#undef TRUSTED_APP_STOP_SEC_CONST_FAST_UNSPECIFIED
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs endsda
#pragma ghs section data2=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section rodata

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- HOOKS CODE ---  */

#elif defined(OSHOOK_START_SEC_CODE)

#undef OSHOOK_START_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section text=".oshook"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section code=".oshook"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(OSHOOK_STOP_SEC_CODE)

#undef OSHOOK_STOP_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section text=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section code

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- APP CODE ---  */

#elif defined(APP_START_SEC_CODE)

#undef APP_START_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section text=".appcode"

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section code=".appcode"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(APP_STOP_SEC_CODE)

#undef APP_STOP_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

#pragma ghs section text=default

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section code

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- OSVECTORS CODE ---  */

#elif defined(OSVECTORS_START_SEC_CODE)

#undef OSVECTORS_START_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

OSASM("    .section  \".vects\", \"vax\"    ");
OSASM("    .vle ");

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section code=".vects"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(OSVECTORS_STOP_SEC_CODE)

#undef OSVECTORS_STOP_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

OSASM("    .section  \".vletext\", \"vax\"    ");
OSASM("    .vle ");

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section code=".vletext"

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- OSVECTORS CODE second core ---  */

#elif defined(OSVECTORS2_START_SEC_CODE)

#undef OSVECTORS2_START_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

OSASM("    .section  \".vects2\", \"vax\"    ");
OSASM("    .vle ");

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section code=".vects2"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(OSVECTORS2_STOP_SEC_CODE)

#undef OSVECTORS2_STOP_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

OSASM("    .section  \".vletext\", \"vax\"    ");
OSASM("    .vle ");

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section code=".vletext"

#else

#error Unknown compiler
#endif /* OSGHSARM */

/*  --- STARTUP CODE second core ---  */

#elif defined(OSSTARTUP2_START_SEC_CODE)

#undef OSSTARTUP2_START_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

OSASM("    .section  \".startup2\", \"vax\"    ");
OSASM("    .vle ");

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section code=".startup2"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#elif defined(OSSTARTUP2_STOP_SEC_CODE)

#undef OSSTARTUP2_STOP_SEC_CODE
#undef MEMMAP_ERROR

#if defined(OSGHSARM)

OSASM("    .section  \".vletext\", \"vax\"    ");
OSASM("    .vle ");

#elif defined(OSGCCARM)

/* TBD */

#elif defined(OSIARARM)

/* TBD */

#elif defined(OSDS5ARM)

#pragma arm section code=".vletext"

#else

#error Unknown compiler
#endif /* OSGHSARM */

#endif /* SND_APP_START_SEC_CONST_8 */

