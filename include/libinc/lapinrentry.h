#ifndef _LAPINRENTRY_H
#define _LAPINRENTRY_H



#define API_ENTRY_PARE1(swinr,rets,pval1) \
__asm__ __volatile__(\
         "mov r0,%[snr] \n\t"\
         "mov r1,%[prv1] \n\t"\
         "swi 0 \n\t"\
         "mov %[retval],r0 \n\t"\
         :[retval] "=r" (rets)\
         :[snr] "r" (swinr),[prv1]"r" (pval1)\
         :"r0","r1","lr","cc","memory"\
    )

#define API_ENTRY_PARE2(swinr,rets,pval1,pval2) \
__asm__ __volatile__(\
         "mov r0,%[snr] \n\t"\
         "mov r1,%[prv1] \n\t"\
         "mov r2,%[prv2] \n\t"\
         "swi 0 \n\t"\
         "mov %[retval],r0 \n\t"\
         :[retval] "=r" (rets)\
         :[snr] "r" (swinr),[prv1]"r" (pval1),\
         [prv2] "r" (pval2)\
         :"r0","r1","r2","lr","cc","memory"\
    )
    
    
#define API_ENTRY_PARE3(swinr,rets,pval1,pval2,pval3) \
__asm__ __volatile__(\
         "mov r0,%[snr] \n\t"\
         "mov r1,%[prv1] \n\t"\
         "mov r2,%[prv2] \n\t"\
         "mov r3,%[prv3] \n\t"\
         "swi 0 \n\t"\
         "mov %[retval],r0 \n\t"\
         :[retval] "=r" (rets)\
         :[snr] "r" (swinr),[prv1]"r" (pval1),\
         [prv2] "r" (pval2),[prv3]"r" (pval3)\
         :"r0","r1","r2","r3","lr","cc","memory"\
    )

#define API_ENTRY_PARE4(swinr,rets,pval1,pval2,pval3,pval4) \
__asm__ __volatile__(\
         "mov r0,%[snr] \n\t"\
         "mov r1,%[prv1] \n\t"\
         "mov r2,%[prv2] \n\t"\
         "mov r3,%[prv3] \n\t"\
         "mov r4,%[prv4] \n\t"\
         "swi 0 \n\t"\
         "mov %[retval],r0 \n\t"\
         :[retval] "=r" (rets)\
         :[snr] "r" (swinr),[prv1]"r" (pval1),\
         [prv2] "r" (pval2),[prv3]"r" (pval3),\
         [prv4] "r" (pval4)\
         :"r0","r1","r2","r3","r4","lr","cc","memory"\
    )
#define API_ENTRY_PARE5(swinr,rets,pval1,pval2,pval3,pval4,pval5) \
__asm__ __volatile__(\
         "mov r0,%[snr] \n\t"\
         "mov r1,%[prv1] \n\t"\
         "mov r2,%[prv2] \n\t"\
         "mov r3,%[prv3] \n\t"\
         "mov r4,%[prv4] \n\t"\
         "mov r5,%[prv5] \n\t"\
         "swi 0 \n\t"\
         "mov %[retval],r0 \n\t"\
         :[retval] "=r" (rets)\
         :[snr] "r" (swinr),[prv1]"r" (pval1),\
         [prv2] "r" (pval2),[prv3]"r" (pval3),\
         [prv4] "r" (pval4),[prv5]"r" (pval4)\
         :"r0","r1","r2","r3","r4","r5","lr","cc","memory"\
    )

#endif // LAPINRENTRY_H
