/**********************************************************
        CPU相关的宏定义文件cpu_t.h
***********************************************************
                彭东 ＠ 2013.06.23.10.50
**********************************************************/
#ifndef _CPU_T_H
#define _CPU_T_H



#define JMP_ADDR(addr) \
 __asm__ __volatile__("mov pc,%[PCADR] \n\t"::[PCADR] "r" (addr):"cc","memory")

typedef struct s_ARMREGS
{
    reg_t r0;
    reg_t r1;
    reg_t r2;
    reg_t r3;
    reg_t r4;
    reg_t r5;
    reg_t r6;
    reg_t r7;
    reg_t r8;
    reg_t r9;
    reg_t r10;
    reg_t r11;
    reg_t r12;
    reg_t r13;
    reg_t r14;
}armregs_t;

typedef struct s_INTSTKREGS
{
    reg_t s_spsr;
	reg_t c_lr;
    reg_t r0;
    reg_t r1;
    reg_t r2;
    reg_t r3;
    reg_t r4;
    reg_t r5;
    reg_t r6;
    reg_t r7;
    reg_t r8;
    reg_t r9;
    reg_t r10;
    reg_t r11;
    reg_t r12;
    reg_t r13;
    reg_t r14;
    reg_t s_lr;
}intstkregs_t;

#endif // CPU_T_H
