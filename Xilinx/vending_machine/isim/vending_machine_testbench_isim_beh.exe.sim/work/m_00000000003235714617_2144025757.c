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
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {12U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {10U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {14U, 0U};
static unsigned int ng13[] = {100U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {144U, 0U};



static void Always_58_0(char *t0)
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

LAB0:    t1 = (t0 + 7960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 8528);
    *((int *)t2) = 1;
    t3 = (t0 + 7992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
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

LAB11:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 6240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6080);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(61, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 6080);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    goto LAB12;

}

static void Always_88_1(char *t0)
{
    char t11[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 8208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 8544);
    *((int *)t2) = 1;
    t3 = (t0 + 8240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 6080);
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

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(271, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 6080);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(93, ng0);

LAB24:    xsi_set_current_line(95, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 5920);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3760U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB28;

LAB25:    if (t21 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t11) = 1;

LAB28:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB36;

LAB33:    if (t21 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t11) = 1;

LAB36:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB39:
LAB31:    goto LAB23;

LAB9:    xsi_set_current_line(120, ng0);

LAB40:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3760U);
    t3 = *((char **)t2);

LAB41:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 6400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t10);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t10);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB61;

LAB58:    if (t21 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t11) = 1;

LAB61:    t30 = (t11 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB69;

LAB66:    if (t21 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t11) = 1;

LAB69:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB72:
LAB64:    goto LAB23;

LAB11:    xsi_set_current_line(175, ng0);

LAB73:    xsi_set_current_line(176, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 3760U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB77;

LAB74:    if (t21 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t11) = 1;

LAB77:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB84;

LAB81:    if (t21 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t11) = 1;

LAB84:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB87:
LAB80:    goto LAB23;

LAB13:    xsi_set_current_line(189, ng0);

LAB88:    xsi_set_current_line(190, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 5280);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 5280);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5760);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 3760U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB92;

LAB89:    if (t21 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t11) = 1;

LAB92:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB99;

LAB96:    if (t21 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t11) = 1;

LAB99:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB102:
LAB95:    goto LAB23;

LAB15:    xsi_set_current_line(205, ng0);

LAB103:    xsi_set_current_line(206, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng13)));
    t4 = (t0 + 5440);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 5440);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5760);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 3760U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB107;

LAB104:    if (t21 != 0)
        goto LAB106;

LAB105:    *((unsigned int *)t11) = 1;

LAB107:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB115;

LAB112:    if (t21 != 0)
        goto LAB114;

LAB113:    *((unsigned int *)t11) = 1;

LAB115:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB116;

LAB117:    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB118:
LAB110:    goto LAB23;

LAB17:    xsi_set_current_line(227, ng0);

LAB119:    xsi_set_current_line(228, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 3760U);
    t4 = *((char **)t2);

LAB120:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB125;

LAB126:
LAB128:
LAB127:    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 5600);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);

LAB129:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 5600);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t9 = (t0 + 5760);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 5600);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng9)));
    memset(t11, 0, 8);
    t10 = (t7 + 4);
    t29 = (t9 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t9);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t29);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t29);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB133;

LAB130:    if (t21 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t11) = 1;

LAB133:    t31 = (t11 + 4);
    t24 = *((unsigned int *)t31);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB134;

LAB135:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 2160U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t9 = (t2 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB141;

LAB138:    if (t21 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t11) = 1;

LAB141:    t29 = (t11 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB142;

LAB143:    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng11)));
    t5 = (t0 + 6240);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);

LAB144:
LAB136:    goto LAB23;

LAB19:    xsi_set_current_line(256, ng0);

LAB145:    xsi_set_current_line(258, ng0);
    t5 = ((char*)((ng15)));
    t7 = (t0 + 5920);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(260, ng0);
    t2 = (t0 + 3760U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng16)));
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t9 = (t2 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB149;

LAB146:    if (t21 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t11) = 1;

LAB149:    t29 = (t11 + 4);
    t24 = *((unsigned int *)t29);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB150;

LAB151:    xsi_set_current_line(268, ng0);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 6240);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);

LAB152:    goto LAB23;

LAB27:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(106, ng0);

LAB32:    xsi_set_current_line(107, ng0);
    t10 = ((char*)((ng2)));
    t29 = (t0 + 5760);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 8);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB31;

LAB35:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(112, ng0);
    t10 = ((char*)((ng2)));
    t29 = (t0 + 6240);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 3);
    goto LAB39;

LAB42:    xsi_set_current_line(128, ng0);

LAB53:    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB52;

LAB44:    xsi_set_current_line(134, ng0);

LAB54:    xsi_set_current_line(135, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB52;

LAB46:    xsi_set_current_line(140, ng0);

LAB55:    xsi_set_current_line(141, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB52;

LAB48:    xsi_set_current_line(146, ng0);

LAB56:    xsi_set_current_line(147, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB52;

LAB50:    xsi_set_current_line(152, ng0);

LAB57:    xsi_set_current_line(153, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB52;

LAB60:    t29 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(161, ng0);

LAB65:    xsi_set_current_line(162, ng0);
    t31 = (t0 + 5120);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 5760);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 8);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB64;

LAB68:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(167, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB72;

LAB76:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(179, ng0);
    t29 = ((char*)((ng8)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB80;

LAB83:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(182, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB87;

LAB91:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(195, ng0);
    t29 = ((char*)((ng10)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB95;

LAB98:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB99;

LAB100:    xsi_set_current_line(198, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB102;

LAB106:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB107;

LAB108:    xsi_set_current_line(211, ng0);

LAB111:    xsi_set_current_line(212, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 5600);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 6720);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 6880);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 7040);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB110;

LAB114:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB115;

LAB116:    xsi_set_current_line(220, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB118;

LAB121:    xsi_set_current_line(232, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 5600);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    goto LAB129;

LAB123:    xsi_set_current_line(233, ng0);
    t5 = ((char*)((ng11)));
    t7 = (t0 + 5600);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    goto LAB129;

LAB125:    xsi_set_current_line(234, ng0);
    t5 = ((char*)((ng9)));
    t7 = (t0 + 5600);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    goto LAB129;

LAB132:    t30 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB133;

LAB134:    xsi_set_current_line(243, ng0);

LAB137:    xsi_set_current_line(244, ng0);
    t32 = (t0 + 5600);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t0 + 5760);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 8);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 6240);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    goto LAB136;

LAB140:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(249, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 6240);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 3);
    goto LAB144;

LAB148:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB149;

LAB150:    xsi_set_current_line(261, ng0);

LAB153:    xsi_set_current_line(262, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t0 + 6560);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(263, ng0);
    t2 = ((char*)((ng17)));
    t5 = (t0 + 5760);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);
    xsi_set_current_line(264, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 6240);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    goto LAB152;

}


extern void work_m_00000000003235714617_2144025757_init()
{
	static char *pe[] = {(void *)Always_58_0,(void *)Always_88_1};
	xsi_register_didat("work_m_00000000003235714617_2144025757", "isim/vending_machine_testbench_isim_beh.exe.sim/work/m_00000000003235714617_2144025757.didat");
	xsi_register_executes(pe);
}
