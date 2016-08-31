/****************************************************************
        LMOSEM HAL全局数据结构头文件halglobal.h
*****************************************************************
                彭东 ＠ 2013.07.01.10.00
****************************************************************/
#ifndef _HALGLOBAL_H
#define _HALGLOBAL_H
#ifdef	HALGOBAL_HEAD
#undef	EXTERN
#define EXTERN
#endif

HAL_DEFGLOB_VARIABLE(mach_t,osmach);
HAL_DEFGLOB_VARIABLE(phymem_t,osphymem);

HAL_DEFGLOB_VARIABLE(phyadrspce_t,machadrspce)[PLFM_ADRSPCE_NR];
HAL_DEFGLOB_VARIABLE(intfltdsc_t,machintflt)[IRQ_MAX];

#endif // HALGLOBAL_H
