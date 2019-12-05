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
static const char *ng0 = "\n test_value=%h, debounce = %h, price_view=%h, entered_amount=%h, state=%h";
static const char *ng1 = "C:/Users/Psichico/Desktop/Vending_Machine_FPGA/Xilinx/vending_machine/vending_machine.v";
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {10U, 0U};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {14U, 0U};
static unsigned int ng14[] = {8U, 0U};
static unsigned int ng15[] = {9U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {144U, 0U};

void Monitor_289_3(char *);
void Monitor_289_3(char *);


static void Monitor_289_3_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 2480U);
    t2 = *((char **)t1);
    t1 = (t0 + 4080U);
    t3 = *((char **)t1);
    t1 = (t0 + 5120);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 5600);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 6080);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    xsi_vlogfile_write(1, 0, 3, ng0, 6, t0, (char)118, t2, 5, (char)118, t3, 4, (char)118, t5, 8, (char)118, t8, 8, (char)118, t11, 3);

LAB1:    return;
}

static void Always_49_0(char *t0)
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

LAB2:    xsi_set_current_line(49, ng1);
    t2 = (t0 + 9024);
    *((int *)t2) = 1;
    t3 = (t0 + 7992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng1);

LAB5:    xsi_set_current_line(51, ng1);
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

LAB11:    xsi_set_current_line(55, ng1);
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

LAB10:    xsi_set_current_line(52, ng1);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 6080);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    goto LAB12;

}

static void Always_79_1(char *t0)
{
    char t11[8];
    char t24[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t106[8];
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t107;

LAB0:    t1 = (t0 + 8208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(79, ng1);
    t2 = (t0 + 9040);
    *((int *)t2) = 1;
    t3 = (t0 + 8240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng1);

LAB5:    xsi_set_current_line(83, ng1);
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

LAB10:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(283, ng1);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 6080);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(86, ng1);

LAB24:    xsi_set_current_line(88, ng1);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 5920);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    xsi_set_current_line(89, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(90, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(91, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(92, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(93, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(95, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(96, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(98, ng1);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB26;

LAB25:    if (t21 != 0)
        goto LAB27;

LAB28:    memset(t24, 0, 8);
    t9 = (t11 + 4);
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t9) != 0)
        goto LAB31;

LAB32:    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB33;

LAB34:    memcpy(t60, t24, 8);

LAB35:    t91 = (t60 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t60);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(105, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB49:    goto LAB23;

LAB9:    xsi_set_current_line(110, ng1);

LAB51:    xsi_set_current_line(112, ng1);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(113, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(115, ng1);
    t2 = (t0 + 4080U);
    t3 = *((char **)t2);

LAB52:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t8 == 1)
        goto LAB61;

LAB62:
LAB63:    xsi_set_current_line(149, ng1);
    t2 = (t0 + 5120);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5760);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(150, ng1);
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
        goto LAB72;

LAB69:    if (t21 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t11) = 1;

LAB72:    t34 = (t11 + 4);
    t25 = *((unsigned int *)t34);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(156, ng1);
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
        goto LAB80;

LAB77:    if (t21 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t11) = 1;

LAB80:    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(160, ng1);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB83:
LAB75:    goto LAB23;

LAB11:    xsi_set_current_line(165, ng1);

LAB84:    xsi_set_current_line(166, ng1);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(168, ng1);
    t2 = (t0 + 4080U);
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
        goto LAB88;

LAB85:    if (t21 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t11) = 1;

LAB88:    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(171, ng1);
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
        goto LAB95;

LAB92:    if (t21 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t11) = 1;

LAB95:    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(175, ng1);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB98:
LAB91:    goto LAB23;

LAB13:    xsi_set_current_line(179, ng1);

LAB99:    xsi_set_current_line(181, ng1);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(182, ng1);
    t2 = (t0 + 4400U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    xsi_vlogtype_concat(t11, 8, 8, 2U, t2, 4, t4, 4);
    t5 = (t0 + 5280);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 8);
    xsi_set_current_line(183, ng1);
    t2 = (t0 + 5280);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5760);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(185, ng1);
    t2 = (t0 + 4080U);
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
        goto LAB103;

LAB100:    if (t21 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t11) = 1;

LAB103:    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(188, ng1);
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
        goto LAB110;

LAB107:    if (t21 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t11) = 1;

LAB110:    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(191, ng1);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB113:
LAB106:    goto LAB23;

LAB15:    xsi_set_current_line(196, ng1);

LAB114:    xsi_set_current_line(197, ng1);
    t4 = ((char*)((ng12)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(199, ng1);
    t2 = (t0 + 5280);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
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
        goto LAB118;

LAB115:    if (t21 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t11) = 1;

LAB118:    t34 = (t11 + 4);
    t25 = *((unsigned int *)t34);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB119;

LAB120:    xsi_set_current_line(201, ng1);
    t2 = (t0 + 5280);
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
        goto LAB125;

LAB122:    if (t21 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t11) = 1;

LAB125:    t34 = (t11 + 4);
    t25 = *((unsigned int *)t34);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB126;

LAB127:    xsi_set_current_line(203, ng1);
    t2 = (t0 + 5280);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
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
        goto LAB132;

LAB129:    if (t21 != 0)
        goto LAB131;

LAB130:    *((unsigned int *)t11) = 1;

LAB132:    t34 = (t11 + 4);
    t25 = *((unsigned int *)t34);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(205, ng1);
    t2 = (t0 + 5280);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng10)));
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
        goto LAB139;

LAB136:    if (t21 != 0)
        goto LAB138;

LAB137:    *((unsigned int *)t11) = 1;

LAB139:    t34 = (t11 + 4);
    t25 = *((unsigned int *)t34);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB140;

LAB141:    xsi_set_current_line(209, ng1);

LAB143:    xsi_set_current_line(210, ng1);
    t2 = (t0 + 5440);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5440);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);

LAB142:
LAB135:
LAB128:
LAB121:    xsi_set_current_line(214, ng1);
    t2 = (t0 + 5120);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5760);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(216, ng1);
    t2 = (t0 + 4080U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng13)));
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
        goto LAB147;

LAB144:    if (t21 != 0)
        goto LAB146;

LAB145:    *((unsigned int *)t11) = 1;

LAB147:    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB148;

LAB149:    xsi_set_current_line(222, ng1);
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
        goto LAB155;

LAB152:    if (t21 != 0)
        goto LAB154;

LAB153:    *((unsigned int *)t11) = 1;

LAB155:    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB156;

LAB157:    xsi_set_current_line(226, ng1);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB158:
LAB150:    goto LAB23;

LAB17:    xsi_set_current_line(230, ng1);

LAB159:    xsi_set_current_line(231, ng1);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(232, ng1);
    t2 = (t0 + 5600);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5760);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 8);
    xsi_set_current_line(235, ng1);
    t2 = (t0 + 4080U);
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
        goto LAB163;

LAB160:    if (t21 != 0)
        goto LAB162;

LAB161:    *((unsigned int *)t11) = 1;

LAB163:    memset(t24, 0, 8);
    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t10) != 0)
        goto LAB166;

LAB167:    t34 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t34);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB168;

LAB169:    memcpy(t60, t24, 8);

LAB170:    t101 = (t60 + 4);
    t78 = *((unsigned int *)t101);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB183;

LAB184:    xsi_set_current_line(240, ng1);
    t2 = (t0 + 4080U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng15)));
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
        goto LAB190;

LAB187:    if (t21 != 0)
        goto LAB189;

LAB188:    *((unsigned int *)t11) = 1;

LAB190:    memset(t24, 0, 8);
    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB191;

LAB192:    if (*((unsigned int *)t10) != 0)
        goto LAB193;

LAB194:    t34 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t34);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB195;

LAB196:    memcpy(t60, t24, 8);

LAB197:    t101 = (t60 + 4);
    t78 = *((unsigned int *)t101);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB210;

LAB211:    xsi_set_current_line(245, ng1);
    t2 = (t0 + 4080U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng9)));
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
        goto LAB217;

LAB214:    if (t21 != 0)
        goto LAB216;

LAB215:    *((unsigned int *)t11) = 1;

LAB217:    memset(t24, 0, 8);
    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB218;

LAB219:    if (*((unsigned int *)t10) != 0)
        goto LAB220;

LAB221:    t34 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t34);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB222;

LAB223:    memcpy(t60, t24, 8);

LAB224:    t101 = (t60 + 4);
    t78 = *((unsigned int *)t101);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB237;

LAB238:
LAB239:
LAB212:
LAB185:    xsi_set_current_line(252, ng1);
    t2 = (t0 + 5600);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 5440);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t30 = (t5 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB242;

LAB241:    t34 = (t10 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB242;

LAB245:    if (*((unsigned int *)t5) < *((unsigned int *)t10))
        goto LAB244;

LAB243:    *((unsigned int *)t11) = 1;

LAB244:    memset(t24, 0, 8);
    t37 = (t11 + 4);
    t12 = *((unsigned int *)t37);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB246;

LAB247:    if (*((unsigned int *)t37) != 0)
        goto LAB248;

LAB249:    t51 = (t24 + 4);
    t17 = *((unsigned int *)t24);
    t18 = *((unsigned int *)t51);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB250;

LAB251:    memcpy(t60, t24, 8);

LAB252:    t101 = (t60 + 4);
    t78 = *((unsigned int *)t101);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB264;

LAB265:
LAB266:    xsi_set_current_line(258, ng1);
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
        goto LAB271;

LAB268:    if (t21 != 0)
        goto LAB270;

LAB269:    *((unsigned int *)t11) = 1;

LAB271:    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB272;

LAB273:    xsi_set_current_line(263, ng1);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB274:    goto LAB23;

LAB19:    xsi_set_current_line(268, ng1);

LAB275:    xsi_set_current_line(270, ng1);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 5920);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(272, ng1);
    t2 = (t0 + 4080U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng16)));
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
        goto LAB279;

LAB276:    if (t21 != 0)
        goto LAB278;

LAB277:    *((unsigned int *)t11) = 1;

LAB279:    t10 = (t11 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB280;

LAB281:    xsi_set_current_line(280, ng1);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB282:    goto LAB23;

LAB26:    *((unsigned int *)t11) = 1;
    goto LAB28;

LAB27:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t24) = 1;
    goto LAB32;

LAB31:    t10 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB32;

LAB33:    t34 = (t0 + 4080U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB39;

LAB36:    if (t48 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t36) = 1;

LAB39:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t53) != 0)
        goto LAB42;

LAB43:    t61 = *((unsigned int *)t24);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t24 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB35;

LAB38:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t52) = 1;
    goto LAB43;

LAB42:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB43;

LAB44:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t24 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t24);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t8 = (t77 & t79);
    t84 = (t81 & t83);
    t85 = (~(t8));
    t86 = (~(t84));
    t87 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t87 & t85);
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t89 & t85);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    goto LAB46;

LAB47:    xsi_set_current_line(99, ng1);

LAB50:    xsi_set_current_line(100, ng1);
    t97 = ((char*)((ng3)));
    t98 = (t0 + 5760);
    xsi_vlogvar_assign_value(t98, t97, 0, 0, 8);
    xsi_set_current_line(101, ng1);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB49;

LAB53:    xsi_set_current_line(118, ng1);

LAB64:    xsi_set_current_line(119, ng1);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(120, ng1);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB63;

LAB55:    xsi_set_current_line(124, ng1);

LAB65:    xsi_set_current_line(125, ng1);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(126, ng1);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB63;

LAB57:    xsi_set_current_line(130, ng1);

LAB66:    xsi_set_current_line(131, ng1);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(132, ng1);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB63;

LAB59:    xsi_set_current_line(136, ng1);

LAB67:    xsi_set_current_line(137, ng1);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(138, ng1);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB63;

LAB61:    xsi_set_current_line(142, ng1);

LAB68:    xsi_set_current_line(143, ng1);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 6400);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(144, ng1);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB63;

LAB71:    t30 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(151, ng1);

LAB76:    xsi_set_current_line(153, ng1);
    t35 = ((char*)((ng8)));
    t37 = (t0 + 6240);
    xsi_vlogvar_assign_value(t37, t35, 0, 0, 3);
    goto LAB75;

LAB79:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(157, ng1);
    t30 = ((char*)((ng3)));
    t34 = (t0 + 6240);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 3);
    goto LAB83;

LAB87:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(169, ng1);
    t30 = ((char*)((ng10)));
    t34 = (t0 + 6240);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 3);
    goto LAB91;

LAB94:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB95;

LAB96:    xsi_set_current_line(172, ng1);
    t30 = ((char*)((ng3)));
    t34 = (t0 + 6240);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 3);
    goto LAB98;

LAB102:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB103;

LAB104:    xsi_set_current_line(186, ng1);
    t30 = ((char*)((ng12)));
    t34 = (t0 + 6240);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 3);
    goto LAB106;

LAB109:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(189, ng1);
    t30 = ((char*)((ng3)));
    t34 = (t0 + 6240);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 3);
    goto LAB113;

LAB117:    t30 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB118;

LAB119:    xsi_set_current_line(200, ng1);
    t35 = (t0 + 5120);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t51 = (t0 + 5440);
    xsi_vlogvar_assign_value(t51, t38, 0, 0, 8);
    goto LAB121;

LAB124:    t30 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB125;

LAB126:    xsi_set_current_line(202, ng1);
    t35 = (t0 + 5120);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t51 = (t0 + 5440);
    xsi_vlogvar_assign_value(t51, t38, 0, 0, 8);
    goto LAB128;

LAB131:    t30 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB132;

LAB133:    xsi_set_current_line(204, ng1);
    t35 = (t0 + 5120);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t51 = (t0 + 5120);
    t53 = (t51 + 56U);
    t59 = *((char **)t53);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 8, t38, 8, t59, 8);
    t64 = (t0 + 5440);
    xsi_vlogvar_assign_value(t64, t24, 0, 0, 8);
    goto LAB135;

LAB138:    t30 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB139;

LAB140:    xsi_set_current_line(206, ng1);
    t35 = (t0 + 5120);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t51 = (t0 + 5120);
    t53 = (t51 + 56U);
    t59 = *((char **)t53);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 8, t38, 8, t59, 8);
    t64 = (t0 + 5120);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 8, t24, 8, t66, 8);
    t74 = (t0 + 5440);
    xsi_vlogvar_assign_value(t74, t36, 0, 0, 8);
    goto LAB142;

LAB146:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB147;

LAB148:    xsi_set_current_line(217, ng1);

LAB151:    xsi_set_current_line(218, ng1);
    t30 = ((char*)((ng3)));
    t34 = (t0 + 5600);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 8);
    xsi_set_current_line(219, ng1);
    t2 = ((char*)((ng11)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB150;

LAB154:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB155;

LAB156:    xsi_set_current_line(223, ng1);
    t30 = ((char*)((ng3)));
    t34 = (t0 + 6240);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 3);
    goto LAB158;

LAB162:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB163;

LAB164:    *((unsigned int *)t24) = 1;
    goto LAB167;

LAB166:    t30 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB167;

LAB168:    t35 = (t0 + 5600);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t51 = (t0 + 5440);
    t53 = (t51 + 56U);
    t59 = *((char **)t53);
    memset(t36, 0, 8);
    t64 = (t38 + 4);
    if (*((unsigned int *)t64) != 0)
        goto LAB172;

LAB171:    t65 = (t59 + 4);
    if (*((unsigned int *)t65) != 0)
        goto LAB172;

LAB175:    if (*((unsigned int *)t38) > *((unsigned int *)t59))
        goto LAB174;

LAB173:    *((unsigned int *)t36) = 1;

LAB174:    memset(t52, 0, 8);
    t74 = (t36 + 4);
    t39 = *((unsigned int *)t74);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB176;

LAB177:    if (*((unsigned int *)t74) != 0)
        goto LAB178;

LAB179:    t44 = *((unsigned int *)t24);
    t45 = *((unsigned int *)t52);
    t46 = (t44 & t45);
    *((unsigned int *)t60) = t46;
    t91 = (t24 + 4);
    t97 = (t52 + 4);
    t98 = (t60 + 4);
    t47 = *((unsigned int *)t91);
    t48 = *((unsigned int *)t97);
    t49 = (t47 | t48);
    *((unsigned int *)t98) = t49;
    t50 = *((unsigned int *)t98);
    t54 = (t50 != 0);
    if (t54 == 1)
        goto LAB180;

LAB181:
LAB182:    goto LAB170;

LAB172:    t66 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB174;

LAB176:    *((unsigned int *)t52) = 1;
    goto LAB179;

LAB178:    t75 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB179;

LAB180:    t55 = *((unsigned int *)t60);
    t56 = *((unsigned int *)t98);
    *((unsigned int *)t60) = (t55 | t56);
    t99 = (t24 + 4);
    t100 = (t52 + 4);
    t57 = *((unsigned int *)t24);
    t58 = (~(t57));
    t61 = *((unsigned int *)t99);
    t62 = (~(t61));
    t63 = *((unsigned int *)t52);
    t67 = (~(t63));
    t68 = *((unsigned int *)t100);
    t69 = (~(t68));
    t8 = (t58 & t62);
    t84 = (t67 & t69);
    t70 = (~(t8));
    t71 = (~(t84));
    t72 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t72 & t70);
    t73 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t73 & t71);
    t76 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t76 & t70);
    t77 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t77 & t71);
    goto LAB182;

LAB183:    xsi_set_current_line(236, ng1);

LAB186:    xsi_set_current_line(237, ng1);
    t102 = (t0 + 5600);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = ((char*)((ng5)));
    memset(t106, 0, 8);
    xsi_vlog_unsigned_add(t106, 8, t104, 8, t105, 8);
    t107 = (t0 + 5600);
    xsi_vlogvar_assign_value(t107, t106, 0, 0, 8);
    goto LAB185;

LAB189:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB190;

LAB191:    *((unsigned int *)t24) = 1;
    goto LAB194;

LAB193:    t30 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB194;

LAB195:    t35 = (t0 + 5600);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t51 = (t0 + 5440);
    t53 = (t51 + 56U);
    t59 = *((char **)t53);
    memset(t36, 0, 8);
    t64 = (t38 + 4);
    if (*((unsigned int *)t64) != 0)
        goto LAB199;

LAB198:    t65 = (t59 + 4);
    if (*((unsigned int *)t65) != 0)
        goto LAB199;

LAB202:    if (*((unsigned int *)t38) > *((unsigned int *)t59))
        goto LAB201;

LAB200:    *((unsigned int *)t36) = 1;

LAB201:    memset(t52, 0, 8);
    t74 = (t36 + 4);
    t39 = *((unsigned int *)t74);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB203;

LAB204:    if (*((unsigned int *)t74) != 0)
        goto LAB205;

LAB206:    t44 = *((unsigned int *)t24);
    t45 = *((unsigned int *)t52);
    t46 = (t44 & t45);
    *((unsigned int *)t60) = t46;
    t91 = (t24 + 4);
    t97 = (t52 + 4);
    t98 = (t60 + 4);
    t47 = *((unsigned int *)t91);
    t48 = *((unsigned int *)t97);
    t49 = (t47 | t48);
    *((unsigned int *)t98) = t49;
    t50 = *((unsigned int *)t98);
    t54 = (t50 != 0);
    if (t54 == 1)
        goto LAB207;

LAB208:
LAB209:    goto LAB197;

LAB199:    t66 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB201;

LAB203:    *((unsigned int *)t52) = 1;
    goto LAB206;

LAB205:    t75 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB206;

LAB207:    t55 = *((unsigned int *)t60);
    t56 = *((unsigned int *)t98);
    *((unsigned int *)t60) = (t55 | t56);
    t99 = (t24 + 4);
    t100 = (t52 + 4);
    t57 = *((unsigned int *)t24);
    t58 = (~(t57));
    t61 = *((unsigned int *)t99);
    t62 = (~(t61));
    t63 = *((unsigned int *)t52);
    t67 = (~(t63));
    t68 = *((unsigned int *)t100);
    t69 = (~(t68));
    t8 = (t58 & t62);
    t84 = (t67 & t69);
    t70 = (~(t8));
    t71 = (~(t84));
    t72 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t72 & t70);
    t73 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t73 & t71);
    t76 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t76 & t70);
    t77 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t77 & t71);
    goto LAB209;

LAB210:    xsi_set_current_line(241, ng1);

LAB213:    xsi_set_current_line(242, ng1);
    t102 = (t0 + 5600);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = ((char*)((ng11)));
    memset(t106, 0, 8);
    xsi_vlog_unsigned_add(t106, 8, t104, 8, t105, 8);
    t107 = (t0 + 5600);
    xsi_vlogvar_assign_value(t107, t106, 0, 0, 8);
    goto LAB212;

LAB216:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB217;

LAB218:    *((unsigned int *)t24) = 1;
    goto LAB221;

LAB220:    t30 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB221;

LAB222:    t35 = (t0 + 5600);
    t37 = (t35 + 56U);
    t38 = *((char **)t37);
    t51 = (t0 + 5440);
    t53 = (t51 + 56U);
    t59 = *((char **)t53);
    memset(t36, 0, 8);
    t64 = (t38 + 4);
    if (*((unsigned int *)t64) != 0)
        goto LAB226;

LAB225:    t65 = (t59 + 4);
    if (*((unsigned int *)t65) != 0)
        goto LAB226;

LAB229:    if (*((unsigned int *)t38) > *((unsigned int *)t59))
        goto LAB228;

LAB227:    *((unsigned int *)t36) = 1;

LAB228:    memset(t52, 0, 8);
    t74 = (t36 + 4);
    t39 = *((unsigned int *)t74);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB230;

LAB231:    if (*((unsigned int *)t74) != 0)
        goto LAB232;

LAB233:    t44 = *((unsigned int *)t24);
    t45 = *((unsigned int *)t52);
    t46 = (t44 & t45);
    *((unsigned int *)t60) = t46;
    t91 = (t24 + 4);
    t97 = (t52 + 4);
    t98 = (t60 + 4);
    t47 = *((unsigned int *)t91);
    t48 = *((unsigned int *)t97);
    t49 = (t47 | t48);
    *((unsigned int *)t98) = t49;
    t50 = *((unsigned int *)t98);
    t54 = (t50 != 0);
    if (t54 == 1)
        goto LAB234;

LAB235:
LAB236:    goto LAB224;

LAB226:    t66 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB228;

LAB230:    *((unsigned int *)t52) = 1;
    goto LAB233;

LAB232:    t75 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB233;

LAB234:    t55 = *((unsigned int *)t60);
    t56 = *((unsigned int *)t98);
    *((unsigned int *)t60) = (t55 | t56);
    t99 = (t24 + 4);
    t100 = (t52 + 4);
    t57 = *((unsigned int *)t24);
    t58 = (~(t57));
    t61 = *((unsigned int *)t99);
    t62 = (~(t61));
    t63 = *((unsigned int *)t52);
    t67 = (~(t63));
    t68 = *((unsigned int *)t100);
    t69 = (~(t68));
    t8 = (t58 & t62);
    t84 = (t67 & t69);
    t70 = (~(t8));
    t71 = (~(t84));
    t72 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t72 & t70);
    t73 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t73 & t71);
    t76 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t76 & t70);
    t77 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t77 & t71);
    goto LAB236;

LAB237:    xsi_set_current_line(246, ng1);

LAB240:    xsi_set_current_line(247, ng1);
    t102 = (t0 + 5600);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = ((char*)((ng9)));
    memset(t106, 0, 8);
    xsi_vlog_unsigned_add(t106, 8, t104, 8, t105, 8);
    t107 = (t0 + 5600);
    xsi_vlogvar_assign_value(t107, t106, 0, 0, 8);
    goto LAB239;

LAB242:    t35 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB244;

LAB246:    *((unsigned int *)t24) = 1;
    goto LAB249;

LAB248:    t38 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB249;

LAB250:    t53 = (t0 + 4080U);
    t59 = *((char **)t53);
    t53 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t64 = (t59 + 4);
    t65 = (t53 + 4);
    t20 = *((unsigned int *)t59);
    t21 = *((unsigned int *)t53);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t64);
    t25 = *((unsigned int *)t65);
    t26 = (t23 ^ t25);
    t27 = (t22 | t26);
    t28 = *((unsigned int *)t64);
    t29 = *((unsigned int *)t65);
    t31 = (t28 | t29);
    t32 = (~(t31));
    t33 = (t27 & t32);
    if (t33 != 0)
        goto LAB256;

LAB253:    if (t31 != 0)
        goto LAB255;

LAB254:    *((unsigned int *)t36) = 1;

LAB256:    memset(t52, 0, 8);
    t74 = (t36 + 4);
    t39 = *((unsigned int *)t74);
    t40 = (~(t39));
    t41 = *((unsigned int *)t36);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB257;

LAB258:    if (*((unsigned int *)t74) != 0)
        goto LAB259;

LAB260:    t44 = *((unsigned int *)t24);
    t45 = *((unsigned int *)t52);
    t46 = (t44 & t45);
    *((unsigned int *)t60) = t46;
    t91 = (t24 + 4);
    t97 = (t52 + 4);
    t98 = (t60 + 4);
    t47 = *((unsigned int *)t91);
    t48 = *((unsigned int *)t97);
    t49 = (t47 | t48);
    *((unsigned int *)t98) = t49;
    t50 = *((unsigned int *)t98);
    t54 = (t50 != 0);
    if (t54 == 1)
        goto LAB261;

LAB262:
LAB263:    goto LAB252;

LAB255:    t66 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB256;

LAB257:    *((unsigned int *)t52) = 1;
    goto LAB260;

LAB259:    t75 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB260;

LAB261:    t55 = *((unsigned int *)t60);
    t56 = *((unsigned int *)t98);
    *((unsigned int *)t60) = (t55 | t56);
    t99 = (t24 + 4);
    t100 = (t52 + 4);
    t57 = *((unsigned int *)t24);
    t58 = (~(t57));
    t61 = *((unsigned int *)t99);
    t62 = (~(t61));
    t63 = *((unsigned int *)t52);
    t67 = (~(t63));
    t68 = *((unsigned int *)t100);
    t69 = (~(t68));
    t8 = (t58 & t62);
    t84 = (t67 & t69);
    t70 = (~(t8));
    t71 = (~(t84));
    t72 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t72 & t70);
    t73 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t73 & t71);
    t76 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t76 & t70);
    t77 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t77 & t71);
    goto LAB263;

LAB264:    xsi_set_current_line(253, ng1);

LAB267:    xsi_set_current_line(255, ng1);
    t102 = ((char*)((ng7)));
    t103 = (t0 + 6240);
    xsi_vlogvar_assign_value(t103, t102, 0, 0, 3);
    goto LAB266;

LAB270:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB271;

LAB272:    xsi_set_current_line(259, ng1);
    t30 = ((char*)((ng3)));
    t34 = (t0 + 6240);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 3);
    goto LAB274;

LAB278:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB279;

LAB280:    xsi_set_current_line(273, ng1);

LAB283:    xsi_set_current_line(274, ng1);
    t30 = ((char*)((ng6)));
    t34 = (t0 + 6560);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 1);
    xsi_set_current_line(275, ng1);
    t2 = ((char*)((ng17)));
    t4 = (t0 + 5760);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    xsi_set_current_line(276, ng1);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 6240);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB282;

}

static void Initial_288_2(char *t0)
{

LAB0:    xsi_set_current_line(288, ng1);

LAB2:    xsi_set_current_line(289, ng1);
    Monitor_289_3(t0);

LAB1:    return;
}

void Monitor_289_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 8512);
    t2 = (t0 + 9056);
    xsi_vlogfile_monitor((void *)Monitor_289_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003691194030_2144025757_init()
{
	static char *pe[] = {(void *)Always_49_0,(void *)Always_79_1,(void *)Initial_288_2,(void *)Monitor_289_3};
	xsi_register_didat("work_m_00000000003691194030_2144025757", "isim/vending_machine_testbench_isim_beh.exe.sim/work/m_00000000003691194030_2144025757.didat");
	xsi_register_executes(pe);
}
