/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/work/fpga/processor1/up1.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {1U, 1U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static int ng8[] = {1, 0};



static void Always_48_0(char *t0)
{
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t17;
    int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 3124U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    t4 = (t0 + 148);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 3024);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(50, ng0);
    t6 = (t0 + 1728U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2048);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB11:    t5 = (t0 + 420);
    t6 = *((char **)t5);
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t6, 32);
    if (t15 == 1)
        goto LAB12;

LAB13:    t2 = (t0 + 500);
    t3 = *((char **)t2);
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t15 == 1)
        goto LAB14;

LAB15:    t2 = (t0 + 980);
    t3 = *((char **)t2);
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 580);
    t3 = *((char **)t2);
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t15 == 1)
        goto LAB18;

LAB19:    t2 = (t0 + 660);
    t3 = *((char **)t2);
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t15 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 1060);
    t3 = *((char **)t2);
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t15 == 1)
        goto LAB22;

LAB23:    t2 = (t0 + 740);
    t3 = *((char **)t2);
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t15 == 1)
        goto LAB24;

LAB25:    t2 = (t0 + 1140);
    t3 = *((char **)t2);
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t15 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 820);
    t3 = *((char **)t2);
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t15 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 1220);
    t3 = *((char **)t2);
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t15 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 900);
    t3 = *((char **)t2);
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t15 == 1)
        goto LAB32;

LAB33:
LAB34:
LAB10:    t2 = (t0 + 148);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 3024);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(51, ng0);
    t13 = (t0 + 420);
    t14 = *((char **)t13);
    t13 = (t0 + 2048);
    xsi_vlogvar_assign_value(t13, t14, 0, 0, 4);
    goto LAB10;

LAB12:    xsi_set_current_line(54, ng0);

LAB35:    xsi_set_current_line(55, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 2324);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2324);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 2600);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 500);
    t3 = *((char **)t2);
    t2 = (t0 + 2048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB34;

LAB14:    xsi_set_current_line(60, ng0);

LAB36:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2324);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 2600);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2140);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB34;

LAB16:    xsi_set_current_line(64, ng0);

LAB37:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2508);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t13 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 8);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 8);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 255U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t14 = (t0 + 2416);
    xsi_vlogvar_wait_assign_value(t14, t16, 0, 0, 8, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2508);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t6 = (t16 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 255U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 255U);
    t13 = (t0 + 2600);
    xsi_vlogvar_wait_assign_value(t13, t16, 0, 0, 8, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2324);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 8, t5, 8, t6, 8);
    t7 = (t0 + 2324);
    xsi_vlogvar_wait_assign_value(t7, t16, 0, 0, 8, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 580);
    t3 = *((char **)t2);
    t2 = (t0 + 2048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2140);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB34;

LAB18:    xsi_set_current_line(71, ng0);

LAB38:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2416);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);

LAB39:    t7 = ((char*)((ng4)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 8, t7, 8);
    if (t18 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t15 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t15 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t6, 8, t2, 8);
    if (t15 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB34;

LAB20:    xsi_set_current_line(79, ng0);

LAB49:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 2140);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB34;

LAB22:    xsi_set_current_line(82, ng0);

LAB50:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2232);
    t5 = (t2 + 36U);
    t7 = *((char **)t5);
    t13 = (t0 + 2508);
    t14 = (t13 + 36U);
    t19 = *((char **)t14);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 16, t7, 16, t19, 16);
    t20 = (t0 + 2232);
    xsi_vlogvar_wait_assign_value(t20, t16, 0, 0, 16, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2324);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng8)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 8, t7, 32);
    t13 = (t0 + 2324);
    xsi_vlogvar_wait_assign_value(t13, t16, 0, 0, 8, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2140);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 500);
    t3 = *((char **)t2);
    t2 = (t0 + 2048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB34;

LAB24:    xsi_set_current_line(88, ng0);

LAB51:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2232);
    t5 = (t2 + 36U);
    t7 = *((char **)t5);
    t13 = (t0 + 2508);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 16);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2140);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1140);
    t3 = *((char **)t2);
    t2 = (t0 + 2048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB34;

LAB26:    xsi_set_current_line(93, ng0);

LAB52:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 500);
    t5 = *((char **)t2);
    t2 = (t0 + 2048);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 4);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2140);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB34;

LAB28:    xsi_set_current_line(97, ng0);

LAB53:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 2140);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1220);
    t3 = *((char **)t2);
    t2 = (t0 + 2048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB34;

LAB30:    xsi_set_current_line(101, ng0);

LAB54:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2232);
    t5 = (t2 + 36U);
    t7 = *((char **)t5);
    t13 = (t0 + 2508);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 16);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 500);
    t3 = *((char **)t2);
    t2 = (t0 + 2048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB34;

LAB32:    xsi_set_current_line(105, ng0);

LAB55:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2600);
    t5 = (t2 + 36U);
    t7 = *((char **)t5);
    t13 = (t0 + 2324);
    xsi_vlogvar_assign_value(t13, t7, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 500);
    t3 = *((char **)t2);
    t2 = (t0 + 2048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    goto LAB34;

LAB40:    xsi_set_current_line(73, ng0);
    t13 = (t0 + 660);
    t14 = *((char **)t13);
    t13 = (t0 + 2048);
    xsi_vlogvar_assign_value(t13, t14, 0, 0, 4);
    goto LAB48;

LAB42:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 740);
    t5 = *((char **)t3);
    t3 = (t0 + 2048);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 4);
    goto LAB48;

LAB44:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 820);
    t5 = *((char **)t3);
    t3 = (t0 + 2048);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 4);
    goto LAB48;

LAB46:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 900);
    t5 = *((char **)t3);
    t3 = (t0 + 2048);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 4);
    goto LAB48;

}


extern void work_m_00000000002879633509_0782069038_init()
{
	static char *pe[] = {(void *)Always_48_0};
	xsi_register_didat("work_m_00000000002879633509_0782069038", "isim/up1_isim_beh.exe.sim/work/m_00000000002879633509_0782069038.didat");
	xsi_register_executes(pe);
}
