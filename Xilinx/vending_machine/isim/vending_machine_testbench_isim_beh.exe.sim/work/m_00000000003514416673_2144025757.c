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
static const char *ng0 = "C:/Users/Psichico/Desktop/Vending_Machine_FPGA/Xilinx/vending_machine/vending_machine.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {9U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {12U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {10U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {14U, 0U};
static int ng15[] = {2, 0};
static int ng16[] = {5, 0};
static unsigned int ng17[] = {6U, 0U};
static int ng18[] = {10, 0};
static unsigned int ng19[] = {7U, 0U};



static void Always_57_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 7480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 8048);
    *((int *)t2) = 1;
    t3 = (t0 + 7512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5600);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(60, ng0);

LAB13:    xsi_set_current_line(61, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 5600);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    goto LAB12;

}

static void Always_94_1(char *t0)
{
    char t11[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 7728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 8064);
    *((int *)t2) = 1;
    t3 = (t0 + 7760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 5600);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(99, ng0);

LAB24:    xsi_set_current_line(101, ng0);
    t9 = (t0 + 3120U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB28;

LAB25:    if (t23 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t11) = 1;

LAB28:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB35;

LAB32:    if (t23 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t11) = 1;

LAB35:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB31:    goto LAB23;

LAB9:    xsi_set_current_line(116, ng0);

LAB40:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 3120U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB44;

LAB41:    if (t23 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t11) = 1;

LAB44:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB52;

LAB49:    if (t23 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t11) = 1;

LAB52:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB60;

LAB57:    if (t23 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t11) = 1;

LAB60:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB68;

LAB65:    if (t23 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t11) = 1;

LAB68:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB76;

LAB73:    if (t23 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t11) = 1;

LAB76:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB79:
LAB71:
LAB63:
LAB55:
LAB47:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 5920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t9);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB84;

LAB81:    if (t23 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t11) = 1;

LAB84:    t12 = (t11 + 4);
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB92;

LAB90:    if (*((unsigned int *)t2) == 0)
        goto LAB89;

LAB91:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB92:    t5 = (t11 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB93;

LAB94:
LAB95:
LAB87:    goto LAB23;

LAB11:    xsi_set_current_line(163, ng0);

LAB96:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 4800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB98;

LAB97:    if (t23 != 0)
        goto LAB99;

LAB100:    t13 = (t11 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB107;

LAB105:    if (*((unsigned int *)t2) == 0)
        goto LAB104;

LAB106:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB107:    t5 = (t11 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB108;

LAB109:
LAB110:
LAB103:    goto LAB23;

LAB13:    xsi_set_current_line(171, ng0);

LAB111:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 3120U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng14)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB113;

LAB112:    if (t23 != 0)
        goto LAB114;

LAB115:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB116;

LAB117:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB123;

LAB120:    if (t23 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t11) = 1;

LAB123:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB124;

LAB125:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB130;

LAB128:    if (*((unsigned int *)t2) == 0)
        goto LAB127;

LAB129:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB130:    t5 = (t11 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB131;

LAB132:
LAB133:
LAB126:
LAB118:    goto LAB23;

LAB15:    xsi_set_current_line(188, ng0);

LAB134:    xsi_set_current_line(190, ng0);
    t3 = (t0 + 4960);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 4800);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 8, t5, 8, t10, 8);
    t12 = (t0 + 5120);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5440);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB138;

LAB135:    if (t23 != 0)
        goto LAB137;

LAB136:    *((unsigned int *)t11) = 1;

LAB138:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB145;

LAB143:    if (*((unsigned int *)t2) == 0)
        goto LAB142;

LAB144:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB145:    t5 = (t11 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB146;

LAB147:
LAB148:
LAB141:    goto LAB23;

LAB17:    xsi_set_current_line(201, ng0);

LAB149:    xsi_set_current_line(203, ng0);
    t3 = (t0 + 3120U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng11)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB153;

LAB150:    if (t23 != 0)
        goto LAB152;

LAB151:    *((unsigned int *)t11) = 1;

LAB153:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB154;

LAB155:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB160;

LAB157:    if (t23 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t11) = 1;

LAB160:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB161;

LAB162:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 3120U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB167;

LAB164:    if (t23 != 0)
        goto LAB166;

LAB165:    *((unsigned int *)t11) = 1;

LAB167:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB168;

LAB169:
LAB170:
LAB163:
LAB156:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 6240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6400);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 8, t4, 8, t9, 8);
    t10 = (t0 + 6560);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 8, t11, 8, t13, 8);
    t26 = (t0 + 5280);
    xsi_vlogvar_assign_value(t26, t35, 0, 0, 8);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5440);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5120);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memset(t11, 0, 8);
    t10 = (t4 + 4);
    t12 = (t9 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB174;

LAB171:    if (t23 != 0)
        goto LAB173;

LAB172:    *((unsigned int *)t11) = 1;

LAB174:    t26 = (t11 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB175;

LAB176:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t14 = *((unsigned int *)t2);
    t15 = (~(t14));
    t16 = *((unsigned int *)t3);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB181;

LAB179:    if (*((unsigned int *)t2) == 0)
        goto LAB178;

LAB180:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB181:    t5 = (t11 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB182;

LAB183:
LAB184:
LAB177:    goto LAB23;

LAB19:    xsi_set_current_line(220, ng0);

LAB185:    xsi_set_current_line(221, ng0);
    t3 = (t0 + 3120U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng19)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB189;

LAB186:    if (t23 != 0)
        goto LAB188;

LAB187:    *((unsigned int *)t11) = 1;

LAB189:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB190;

LAB191:
LAB192:    goto LAB23;

LAB27:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(102, ng0);
    t33 = ((char*)((ng4)));
    t34 = (t0 + 5760);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 3);
    goto LAB31;

LAB34:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(104, ng0);

LAB39:    xsi_set_current_line(105, ng0);
    t10 = ((char*)((ng2)));
    t12 = (t0 + 5760);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 3);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB38;

LAB43:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(119, ng0);

LAB48:    xsi_set_current_line(120, ng0);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 5920);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB47;

LAB51:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(126, ng0);

LAB56:    xsi_set_current_line(127, ng0);
    t10 = ((char*)((ng5)));
    t12 = (t0 + 5920);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB55;

LAB59:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(132, ng0);

LAB64:    xsi_set_current_line(133, ng0);
    t10 = ((char*)((ng5)));
    t12 = (t0 + 5920);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB63;

LAB67:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(138, ng0);

LAB72:    xsi_set_current_line(139, ng0);
    t10 = ((char*)((ng5)));
    t12 = (t0 + 5920);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB71;

LAB75:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(144, ng0);

LAB80:    xsi_set_current_line(145, ng0);
    t10 = ((char*)((ng5)));
    t12 = (t0 + 5920);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB79;

LAB83:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(153, ng0);

LAB88:    xsi_set_current_line(154, ng0);
    t13 = (t0 + 4800);
    t26 = (t13 + 56U);
    t27 = *((char **)t26);
    t33 = (t0 + 5440);
    xsi_vlogvar_assign_value(t33, t27, 0, 0, 8);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB87;

LAB89:    *((unsigned int *)t11) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(158, ng0);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 5760);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 3);
    goto LAB95;

LAB98:    *((unsigned int *)t11) = 1;
    goto LAB100;

LAB99:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(165, ng0);
    t26 = ((char*)((ng9)));
    t27 = (t0 + 5760);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 3);
    goto LAB103;

LAB104:    *((unsigned int *)t11) = 1;
    goto LAB107;

LAB108:    xsi_set_current_line(167, ng0);
    t7 = ((char*)((ng4)));
    t9 = (t0 + 5760);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 3);
    goto LAB110;

LAB113:    *((unsigned int *)t11) = 1;
    goto LAB115;

LAB114:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB115;

LAB116:    xsi_set_current_line(174, ng0);

LAB119:    xsi_set_current_line(177, ng0);
    t12 = (t0 + 3440U);
    t13 = *((char **)t12);
    t12 = (t0 + 5440);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 8);
    goto LAB118;

LAB122:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB123;

LAB124:    xsi_set_current_line(181, ng0);
    t10 = ((char*)((ng11)));
    t12 = (t0 + 5760);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 3);
    goto LAB126;

LAB127:    *((unsigned int *)t11) = 1;
    goto LAB130;

LAB131:    xsi_set_current_line(184, ng0);
    t7 = ((char*)((ng4)));
    t9 = (t0 + 5760);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 3);
    goto LAB133;

LAB137:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB138;

LAB139:    xsi_set_current_line(194, ng0);
    t10 = ((char*)((ng13)));
    t12 = (t0 + 5760);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 3);
    goto LAB141;

LAB142:    *((unsigned int *)t11) = 1;
    goto LAB145;

LAB146:    xsi_set_current_line(197, ng0);
    t7 = ((char*)((ng4)));
    t9 = (t0 + 5760);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 3);
    goto LAB148;

LAB152:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB153;

LAB154:    xsi_set_current_line(204, ng0);
    t12 = (t0 + 3440U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng15)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_multiply(t35, 32, t13, 8, t12, 32);
    t26 = (t0 + 6240);
    xsi_vlogvar_assign_value(t26, t35, 0, 0, 8);
    goto LAB156;

LAB159:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB160;

LAB161:    xsi_set_current_line(206, ng0);
    t10 = (t0 + 3440U);
    t12 = *((char **)t10);
    t10 = ((char*)((ng16)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_multiply(t35, 32, t12, 8, t10, 32);
    t13 = (t0 + 6400);
    xsi_vlogvar_assign_value(t13, t35, 0, 0, 8);
    goto LAB163;

LAB166:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB167;

LAB168:    xsi_set_current_line(208, ng0);
    t10 = (t0 + 3440U);
    t12 = *((char **)t10);
    t10 = ((char*)((ng18)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_multiply(t35, 32, t12, 8, t10, 32);
    t13 = (t0 + 6560);
    xsi_vlogvar_assign_value(t13, t35, 0, 0, 8);
    goto LAB170;

LAB173:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB174;

LAB175:    xsi_set_current_line(214, ng0);
    t27 = ((char*)((ng17)));
    t33 = (t0 + 5760);
    xsi_vlogvar_assign_value(t33, t27, 0, 0, 3);
    goto LAB177;

LAB178:    *((unsigned int *)t11) = 1;
    goto LAB181;

LAB182:    xsi_set_current_line(216, ng0);
    t7 = ((char*)((ng4)));
    t9 = (t0 + 5760);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 3);
    goto LAB184;

LAB188:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB189;

LAB190:    xsi_set_current_line(222, ng0);

LAB193:    xsi_set_current_line(223, ng0);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 6080);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB192;

}


extern void work_m_00000000003514416673_2144025757_init()
{
	static char *pe[] = {(void *)Always_57_0,(void *)Always_94_1};
	xsi_register_didat("work_m_00000000003514416673_2144025757", "isim/vending_machine_testbench_isim_beh.exe.sim/work/m_00000000003514416673_2144025757.didat");
	xsi_register_executes(pe);
}
