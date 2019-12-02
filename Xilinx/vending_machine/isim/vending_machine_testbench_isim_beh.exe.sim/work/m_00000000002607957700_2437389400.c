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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Psichico/Desktop/Vending_Machine_FPGA/Xilinx/vending_machine/verilog.v";
static unsigned int ng1[] = {15U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {238U, 0U};
static unsigned int ng5[] = {237U, 0U};
static unsigned int ng6[] = {235U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {231U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {222U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {221U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {219U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {215U, 0U};
static unsigned int ng17[] = {7U, 0U};
static unsigned int ng18[] = {190U, 0U};
static unsigned int ng19[] = {8U, 0U};
static unsigned int ng20[] = {189U, 0U};
static unsigned int ng21[] = {9U, 0U};
static unsigned int ng22[] = {187U, 0U};
static unsigned int ng23[] = {10U, 0U};
static unsigned int ng24[] = {183U, 0U};
static unsigned int ng25[] = {11U, 0U};
static unsigned int ng26[] = {126U, 0U};
static unsigned int ng27[] = {12U, 0U};
static unsigned int ng28[] = {125U, 0U};
static unsigned int ng29[] = {13U, 0U};
static unsigned int ng30[] = {123U, 0U};
static unsigned int ng31[] = {14U, 0U};
static unsigned int ng32[] = {119U, 0U};



static void Always_20_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 4304);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB9:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 1768);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memset(t41, 0, 8);
    t30 = (t41 + 4);
    t31 = (t17 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (t18 >> 0);
    *((unsigned int *)t41) = t19;
    t20 = *((unsigned int *)t31);
    t21 = (t20 >> 0);
    *((unsigned int *)t30) = t21;
    t22 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t22 & 7U);
    t23 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t23 & 7U);
    xsi_vlogtype_concat(t4, 4, 4, 2U, t41, 3, t15, 1);
    t37 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t37, t4, 0, 0, 4, 0LL);

LAB12:    goto LAB2;

LAB7:    *((unsigned int *)t15) = 1;
    goto LAB9;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(24, ng0);
    t37 = (t0 + 1768);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 4, 0LL);
    goto LAB12;

}

static void Always_36_1(char *t0)
{
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4320);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 15U);
    t6 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t12 = (t4 + 4);
    t13 = (t6 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t6);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t18 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t13);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB14;

LAB13:    if (t27 != 0)
        goto LAB15;

LAB16:    t20 = (t21 + 4);
    t30 = *((unsigned int *)t20);
    t31 = (~(t30));
    t32 = *((unsigned int *)t21);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB19:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(40, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB15:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(43, ng0);

LAB20:    xsi_set_current_line(44, ng0);
    t35 = (t0 + 1368U);
    t36 = *((char **)t35);
    t35 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t35, t36, 0, 0, 4, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB19;

}

static void Always_53_2(char *t0)
{
    char t8[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4336);
    *((int *)t2) = 1;
    t3 = (t0 + 4016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(57, ng0);

LAB13:    xsi_set_current_line(58, ng0);
    t31 = (t0 + 2568);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 2408);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlogtype_concat(t30, 8, 8, 2U, t36, 4, t33, 4);

LAB14:    t37 = ((char*)((ng4)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t37, 8);
    if (t38 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng16)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng18)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng20)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng22)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng24)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng26)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng28)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng30)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng32)));
    t38 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t38 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB49:    goto LAB12;

LAB15:    xsi_set_current_line(59, ng0);
    t39 = ((char*)((ng2)));
    t40 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t40, t39, 0, 0, 4, 0LL);
    goto LAB49;

LAB17:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB19:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB21:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB23:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB25:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB27:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB29:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB31:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB33:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB35:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB37:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB39:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB41:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB43:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng31)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

LAB45:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 4, 0LL);
    goto LAB49;

}


extern void work_m_00000000002607957700_2437389400_init()
{
	static char *pe[] = {(void *)Always_20_0,(void *)Always_36_1,(void *)Always_53_2};
	xsi_register_didat("work_m_00000000002607957700_2437389400", "isim/vending_machine_testbench_isim_beh.exe.sim/work/m_00000000002607957700_2437389400.didat");
	xsi_register_executes(pe);
}
