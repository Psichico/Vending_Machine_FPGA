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
static unsigned int ng1[] = {2U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {12U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {10U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {14U, 0U};
static unsigned int ng13[] = {8U, 0U};
static unsigned int ng14[] = {9U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {144U, 0U};



static void NetDecl_17_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9120);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 3U);

LAB1:    return;
}

static void NetDecl_18_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9184);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 15U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 3U);

LAB1:    return;
}

static void Always_59_2(char *t0)
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

LAB0:    t1 = (t0 + 8456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 9024);
    *((int *)t2) = 1;
    t3 = (t0 + 8488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2160U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
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

LAB11:    xsi_set_current_line(65, ng0);
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

LAB10:    xsi_set_current_line(62, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 6080);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    goto LAB12;

}

static void Always_92_3(char *t0)
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
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;

LAB0:    t1 = (t0 + 8704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 9040);
    *((int *)t2) = 1;
    t3 = (t0 + 8736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);

LAB5:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 6080);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng1)));
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
LAB21:    xsi_set_current_line(280, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6080);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(97, ng0);

LAB24:    xsi_set_current_line(99, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 5920);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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

LAB30:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB31:    goto LAB23;

LAB9:    xsi_set_current_line(121, ng0);

LAB33:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3600U);
    t3 = *((char **)t2);

LAB34:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 6400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
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
        goto LAB54;

LAB51:    if (t21 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t11) = 1;

LAB54:    t30 = (t11 + 4);
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB62;

LAB59:    if (t21 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t11) = 1;

LAB62:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB65:
LAB57:    goto LAB23;

LAB11:    xsi_set_current_line(176, ng0);

LAB66:    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 3600U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng4)));
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
        goto LAB70;

LAB67:    if (t21 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t11) = 1;

LAB70:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB79:    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB80:
LAB73:    goto LAB23;

LAB13:    xsi_set_current_line(190, ng0);

LAB81:    xsi_set_current_line(191, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 5280);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5760);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 3600U);
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
        goto LAB85;

LAB82:    if (t21 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t11) = 1;

LAB85:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 3920U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng4)));
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

LAB94:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB101:    xsi_set_current_line(205, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB102:
LAB95:
LAB88:    goto LAB23;

LAB15:    xsi_set_current_line(210, ng0);

LAB103:    xsi_set_current_line(211, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 5440);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 5440);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5760);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 3600U);
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

LAB109:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 2160U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB117:    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB118:
LAB110:    goto LAB23;

LAB17:    xsi_set_current_line(236, ng0);

LAB119:    xsi_set_current_line(237, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(239, ng0);
    t2 = (t0 + 3600U);
    t4 = *((char **)t2);

LAB120:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB125;

LAB126:
LAB128:
LAB127:    xsi_set_current_line(244, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 5600);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);

LAB129:    xsi_set_current_line(250, ng0);
    t2 = (t0 + 5440);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t9 = (t0 + 5760);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 8);
    xsi_set_current_line(251, ng0);
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

LAB135:    xsi_set_current_line(257, ng0);
    t2 = (t0 + 2160U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
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

LAB143:    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng11)));
    t5 = (t0 + 6240);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);

LAB144:
LAB136:    goto LAB23;

LAB19:    xsi_set_current_line(265, ng0);

LAB145:    xsi_set_current_line(267, ng0);
    t5 = ((char*)((ng15)));
    t7 = (t0 + 5920);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(269, ng0);
    t2 = (t0 + 3920U);
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

LAB151:    xsi_set_current_line(277, ng0);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 6240);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);

LAB152:    goto LAB23;

LAB27:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(110, ng0);

LAB32:    xsi_set_current_line(111, ng0);
    t10 = ((char*)((ng3)));
    t29 = (t0 + 5760);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 8);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB31;

LAB35:    xsi_set_current_line(129, ng0);

LAB46:    xsi_set_current_line(130, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB45;

LAB37:    xsi_set_current_line(135, ng0);

LAB47:    xsi_set_current_line(136, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB45;

LAB39:    xsi_set_current_line(141, ng0);

LAB48:    xsi_set_current_line(142, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB45;

LAB41:    xsi_set_current_line(147, ng0);

LAB49:    xsi_set_current_line(148, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB45;

LAB43:    xsi_set_current_line(153, ng0);

LAB50:    xsi_set_current_line(154, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB45;

LAB53:    t29 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(162, ng0);

LAB58:    xsi_set_current_line(163, ng0);
    t31 = (t0 + 5120);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 5760);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 8);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB57;

LAB61:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(168, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB65;

LAB69:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(180, ng0);
    t29 = ((char*)((ng8)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB73;

LAB76:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(183, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB80;

LAB84:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(197, ng0);
    t29 = (t0 + 5280);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng5)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 8, t31, 8, t32, 8);
    t33 = (t0 + 5280);
    xsi_vlogvar_assign_value(t33, t35, 0, 0, 8);
    goto LAB88;

LAB91:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(200, ng0);
    t29 = ((char*)((ng10)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB95;

LAB98:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB99;

LAB100:    xsi_set_current_line(203, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB102;

LAB106:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB107;

LAB108:    xsi_set_current_line(219, ng0);

LAB111:    xsi_set_current_line(220, ng0);
    t29 = (t0 + 4720U);
    t30 = *((char **)t29);
    memset(t35, 0, 8);
    t29 = (t35 + 4);
    t31 = (t30 + 4);
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 0);
    *((unsigned int *)t35) = t37;
    t38 = *((unsigned int *)t31);
    t39 = (t38 >> 0);
    *((unsigned int *)t29) = t39;
    t40 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t40 & 255U);
    t41 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t41 & 255U);
    t32 = (t0 + 5440);
    xsi_vlogvar_assign_value(t32, t35, 0, 0, 8);
    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 5600);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 6720);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 6880);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 7040);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB110;

LAB114:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB115;

LAB116:    xsi_set_current_line(229, ng0);
    t29 = ((char*)((ng3)));
    t30 = (t0 + 6240);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB118;

LAB121:    xsi_set_current_line(241, ng0);
    t5 = (t0 + 5600);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng1)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 8, t9, 8, t10, 8);
    t29 = (t0 + 5600);
    xsi_vlogvar_assign_value(t29, t11, 0, 0, 8);
    goto LAB129;

LAB123:    xsi_set_current_line(242, ng0);
    t5 = (t0 + 5600);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng11)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 8, t9, 8, t10, 8);
    t29 = (t0 + 5600);
    xsi_vlogvar_assign_value(t29, t11, 0, 0, 8);
    goto LAB129;

LAB125:    xsi_set_current_line(243, ng0);
    t5 = (t0 + 5600);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng9)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 8, t9, 8, t10, 8);
    t29 = (t0 + 5600);
    xsi_vlogvar_assign_value(t29, t11, 0, 0, 8);
    goto LAB129;

LAB132:    t30 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB133;

LAB134:    xsi_set_current_line(252, ng0);

LAB137:    xsi_set_current_line(254, ng0);
    t32 = ((char*)((ng15)));
    t33 = (t0 + 6240);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 3);
    goto LAB136;

LAB140:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(258, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 6240);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 3);
    goto LAB144;

LAB148:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB149;

LAB150:    xsi_set_current_line(270, ng0);

LAB153:    xsi_set_current_line(271, ng0);
    t30 = ((char*)((ng6)));
    t31 = (t0 + 6560);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng17)));
    t5 = (t0 + 5760);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 8);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 6240);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    goto LAB152;

}


extern void work_m_00000000002367240614_2144025757_init()
{
	static char *pe[] = {(void *)NetDecl_17_0,(void *)NetDecl_18_1,(void *)Always_59_2,(void *)Always_92_3};
	xsi_register_didat("work_m_00000000002367240614_2144025757", "isim/vending_machine_testbench_isim_beh.exe.sim/work/m_00000000002367240614_2144025757.didat");
	xsi_register_executes(pe);
}
