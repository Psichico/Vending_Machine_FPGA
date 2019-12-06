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
static const char *ng0 = "\n Button=%h , State=%h, Price=%h, Quantity=%h, Amount-To-Be-Paid=%h, Entered_Amount=%h";
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

void Monitor_313_3(char *);
void Monitor_313_3(char *);


static void Monitor_313_3_Func(char *t0)
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 3920U);
    t2 = *((char **)t1);
    t1 = (t0 + 6080);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4960);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 5120);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 5280);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 5600);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlogfile_write(1, 0, 3, ng0, 7, t0, (char)118, t2, 4, (char)118, t4, 3, (char)118, t7, 8, (char)118, t10, 8, (char)118, t13, 8, (char)118, t16, 8);

LAB1:    return;
}

static void Always_46_0(char *t0)
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

LAB0:    t1 = (t0 + 7160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng1);
    t2 = (t0 + 8224);
    *((int *)t2) = 1;
    t3 = (t0 + 7192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng1);

LAB5:    xsi_set_current_line(48, ng1);
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

LAB11:    xsi_set_current_line(52, ng1);
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

LAB10:    xsi_set_current_line(49, ng1);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 6080);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    goto LAB12;

}

static void Always_76_1(char *t0)
{
    char t11[8];
    char t27[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char t108[8];
    char t112[8];
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
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    char *t111;
    char *t113;

LAB0:    t1 = (t0 + 7408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng1);
    t2 = (t0 + 8240);
    *((int *)t2) = 1;
    t3 = (t0 + 7440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng1);

LAB5:    xsi_set_current_line(80, ng1);
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
LAB21:    xsi_set_current_line(307, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(83, ng1);

LAB24:    xsi_set_current_line(85, ng1);
    t9 = (t0 + 2160U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng2)));
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
        goto LAB26;

LAB25:    if (t23 != 0)
        goto LAB27;

LAB28:    memset(t27, 0, 8);
    t28 = (t11 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t28) != 0)
        goto LAB31;

LAB32:    t35 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB33;

LAB34:    memcpy(t65, t27, 8);

LAB35:    t97 = (t65 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(92, ng1);

LAB51:    xsi_set_current_line(93, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(94, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(95, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(96, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(97, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(98, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(99, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB49:    goto LAB23;

LAB9:    xsi_set_current_line(105, ng1);

LAB52:    xsi_set_current_line(106, ng1);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
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
        goto LAB54;

LAB53:    if (t23 != 0)
        goto LAB55;

LAB56:    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(154, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB59:    goto LAB23;

LAB11:    xsi_set_current_line(160, ng1);

LAB109:    xsi_set_current_line(162, ng1);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
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
        goto LAB111;

LAB110:    if (t23 != 0)
        goto LAB112;

LAB113:    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(175, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB116:    goto LAB23;

LAB13:    xsi_set_current_line(180, ng1);

LAB125:    xsi_set_current_line(182, ng1);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
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
        goto LAB127;

LAB126:    if (t23 != 0)
        goto LAB128;

LAB129:    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB130;

LAB131:    xsi_set_current_line(200, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB132:    goto LAB23;

LAB15:    xsi_set_current_line(205, ng1);

LAB142:    xsi_set_current_line(207, ng1);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
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
        goto LAB144;

LAB143:    if (t23 != 0)
        goto LAB145;

LAB146:    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB147;

LAB148:
LAB149:    xsi_set_current_line(230, ng1);
    t2 = (t0 + 3920U);
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
        goto LAB232;

LAB229:    if (t23 != 0)
        goto LAB231;

LAB230:    *((unsigned int *)t11) = 1;

LAB232:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB233;

LAB234:    xsi_set_current_line(234, ng1);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB235:    xsi_set_current_line(236, ng1);
    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
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
        goto LAB239;

LAB236:    if (t23 != 0)
        goto LAB238;

LAB237:    *((unsigned int *)t11) = 1;

LAB239:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB240;

LAB241:
LAB242:    goto LAB23;

LAB17:    xsi_set_current_line(242, ng1);

LAB243:    xsi_set_current_line(243, ng1);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
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
        goto LAB245;

LAB244:    if (t23 != 0)
        goto LAB246;

LAB247:    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB248;

LAB249:    xsi_set_current_line(282, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB250:    goto LAB23;

LAB19:    xsi_set_current_line(287, ng1);

LAB304:    xsi_set_current_line(288, ng1);
    t3 = (t0 + 2160U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
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
        goto LAB306;

LAB305:    if (t23 != 0)
        goto LAB307;

LAB308:    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB309;

LAB310:    xsi_set_current_line(303, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB311:    goto LAB23;

LAB26:    *((unsigned int *)t11) = 1;
    goto LAB28;

LAB27:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t27) = 1;
    goto LAB32;

LAB31:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB32;

LAB33:    t39 = (t0 + 3920U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng4)));
    memset(t41, 0, 8);
    t42 = (t40 + 4);
    t43 = (t39 + 4);
    t44 = *((unsigned int *)t40);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB39;

LAB36:    if (t53 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t41) = 1;

LAB39:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t58) != 0)
        goto LAB42;

LAB43:    t66 = *((unsigned int *)t27);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t27 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB35;

LAB38:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t57) = 1;
    goto LAB43;

LAB42:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB43;

LAB44:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t27 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB46;

LAB47:    xsi_set_current_line(86, ng1);

LAB50:    xsi_set_current_line(87, ng1);
    t103 = ((char*)((ng3)));
    t104 = (t0 + 5760);
    xsi_vlogvar_assign_value(t104, t103, 0, 0, 8);
    xsi_set_current_line(88, ng1);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB49;

LAB54:    *((unsigned int *)t11) = 1;
    goto LAB56;

LAB55:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(107, ng1);

LAB60:    xsi_set_current_line(109, ng1);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 5920);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    xsi_set_current_line(110, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(112, ng1);
    t2 = (t0 + 3920U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
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
        goto LAB64;

LAB61:    if (t23 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t11) = 1;

LAB64:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(118, ng1);
    t2 = (t0 + 3920U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
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
        goto LAB72;

LAB69:    if (t23 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t11) = 1;

LAB72:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(124, ng1);
    t2 = (t0 + 3920U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
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
        goto LAB80;

LAB77:    if (t23 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t11) = 1;

LAB80:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(130, ng1);
    t2 = (t0 + 3920U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
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
        goto LAB88;

LAB85:    if (t23 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t11) = 1;

LAB88:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(136, ng1);
    t2 = (t0 + 3920U);
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
        goto LAB96;

LAB93:    if (t23 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t11) = 1;

LAB96:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB97;

LAB98:
LAB99:
LAB91:
LAB83:
LAB75:
LAB67:    xsi_set_current_line(142, ng1);
    t2 = (t0 + 5440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
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
        goto LAB104;

LAB101:    if (t23 != 0)
        goto LAB103;

LAB102:    *((unsigned int *)t11) = 1;

LAB104:    t12 = (t11 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB105;

LAB106:    xsi_set_current_line(149, ng1);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB107:    goto LAB59;

LAB63:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(113, ng1);

LAB68:    xsi_set_current_line(114, ng1);
    t10 = ((char*)((ng6)));
    t12 = (t0 + 5440);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 8);
    xsi_set_current_line(115, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 4960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB67;

LAB71:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(119, ng1);

LAB76:    xsi_set_current_line(120, ng1);
    t10 = ((char*)((ng6)));
    t12 = (t0 + 5440);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 8);
    xsi_set_current_line(121, ng1);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 4960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB75;

LAB79:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB80;

LAB81:    xsi_set_current_line(125, ng1);

LAB84:    xsi_set_current_line(126, ng1);
    t10 = ((char*)((ng6)));
    t12 = (t0 + 5440);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 8);
    xsi_set_current_line(127, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 4960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB83;

LAB87:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(131, ng1);

LAB92:    xsi_set_current_line(132, ng1);
    t10 = ((char*)((ng6)));
    t12 = (t0 + 5440);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 8);
    xsi_set_current_line(133, ng1);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 4960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB91;

LAB95:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(137, ng1);

LAB100:    xsi_set_current_line(138, ng1);
    t10 = ((char*)((ng6)));
    t12 = (t0 + 5440);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 8);
    xsi_set_current_line(139, ng1);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB99;

LAB103:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB104;

LAB105:    xsi_set_current_line(143, ng1);

LAB108:    xsi_set_current_line(144, ng1);
    t13 = (t0 + 4960);
    t26 = (t13 + 56U);
    t28 = *((char **)t26);
    t34 = (t0 + 5760);
    xsi_vlogvar_assign_value(t34, t28, 0, 0, 8);
    xsi_set_current_line(145, ng1);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB107;

LAB111:    *((unsigned int *)t11) = 1;
    goto LAB113;

LAB112:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(163, ng1);

LAB117:    xsi_set_current_line(165, ng1);
    t12 = ((char*)((ng8)));
    t13 = (t0 + 5920);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    xsi_set_current_line(167, ng1);
    t2 = (t0 + 3920U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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
        goto LAB121;

LAB118:    if (t23 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t11) = 1;

LAB121:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(171, ng1);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB124:    goto LAB116;

LAB120:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(168, ng1);
    t10 = ((char*)((ng10)));
    t12 = (t0 + 6240);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 3);
    goto LAB124;

LAB127:    *((unsigned int *)t11) = 1;
    goto LAB129;

LAB128:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB129;

LAB130:    xsi_set_current_line(183, ng1);

LAB133:    xsi_set_current_line(184, ng1);
    t12 = ((char*)((ng10)));
    t13 = (t0 + 5920);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    xsi_set_current_line(186, ng1);
    t2 = (t0 + 4240U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    xsi_vlogtype_concat(t11, 8, 8, 2U, t2, 4, t3, 4);
    t4 = (t0 + 5120);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 8);
    xsi_set_current_line(188, ng1);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5760);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(190, ng1);
    t2 = (t0 + 3920U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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
        goto LAB137;

LAB134:    if (t23 != 0)
        goto LAB136;

LAB135:    *((unsigned int *)t11) = 1;

LAB137:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB138;

LAB139:    xsi_set_current_line(196, ng1);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB140:    goto LAB132;

LAB136:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB137;

LAB138:    xsi_set_current_line(191, ng1);

LAB141:    xsi_set_current_line(192, ng1);
    t10 = ((char*)((ng12)));
    t12 = (t0 + 6240);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 3);
    goto LAB140;

LAB144:    *((unsigned int *)t11) = 1;
    goto LAB146;

LAB145:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB146;

LAB147:    xsi_set_current_line(208, ng1);

LAB150:    xsi_set_current_line(209, ng1);
    t12 = ((char*)((ng12)));
    t13 = (t0 + 5920);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    xsi_set_current_line(212, ng1);
    t2 = (t0 + 5120);
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
        goto LAB154;

LAB151:    if (t23 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t11) = 1;

LAB154:    memset(t27, 0, 8);
    t12 = (t11 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t12) != 0)
        goto LAB157;

LAB158:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB159;

LAB160:    memcpy(t65, t27, 8);

LAB161:    t80 = (t65 + 4);
    t98 = *((unsigned int *)t80);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB173;

LAB174:    xsi_set_current_line(216, ng1);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
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
        goto LAB180;

LAB177:    if (t23 != 0)
        goto LAB179;

LAB178:    *((unsigned int *)t11) = 1;

LAB180:    memset(t27, 0, 8);
    t12 = (t11 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t12) != 0)
        goto LAB183;

LAB184:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB185;

LAB186:    memcpy(t65, t27, 8);

LAB187:    t80 = (t65 + 4);
    t98 = *((unsigned int *)t80);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB199;

LAB200:    xsi_set_current_line(220, ng1);
    t2 = (t0 + 5120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
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
        goto LAB206;

LAB203:    if (t23 != 0)
        goto LAB205;

LAB204:    *((unsigned int *)t11) = 1;

LAB206:    memset(t27, 0, 8);
    t12 = (t11 + 4);
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB207;

LAB208:    if (*((unsigned int *)t12) != 0)
        goto LAB209;

LAB210:    t26 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t26);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB211;

LAB212:    memcpy(t65, t27, 8);

LAB213:    t80 = (t65 + 4);
    t98 = *((unsigned int *)t80);
    t99 = (~(t98));
    t100 = *((unsigned int *)t65);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB225;

LAB226:
LAB227:
LAB201:
LAB175:    xsi_set_current_line(225, ng1);
    t2 = (t0 + 5280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5760);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(226, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5600);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB149;

LAB153:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB154;

LAB155:    *((unsigned int *)t27) = 1;
    goto LAB158;

LAB157:    t13 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB158;

LAB159:    t28 = (t0 + 5120);
    t34 = (t28 + 56U);
    t35 = *((char **)t34);
    t39 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t40 = (t35 + 4);
    t42 = (t39 + 4);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t42);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB163;

LAB162:    if (t53 != 0)
        goto LAB164;

LAB165:    memset(t57, 0, 8);
    t56 = (t41 + 4);
    t59 = *((unsigned int *)t56);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB166;

LAB167:    if (*((unsigned int *)t56) != 0)
        goto LAB168;

LAB169:    t66 = *((unsigned int *)t27);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t64 = (t27 + 4);
    t69 = (t57 + 4);
    t70 = (t65 + 4);
    t72 = *((unsigned int *)t64);
    t73 = *((unsigned int *)t69);
    t74 = (t72 | t73);
    *((unsigned int *)t70) = t74;
    t75 = *((unsigned int *)t70);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB170;

LAB171:
LAB172:    goto LAB161;

LAB163:    *((unsigned int *)t41) = 1;
    goto LAB165;

LAB164:    t43 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB165;

LAB166:    *((unsigned int *)t57) = 1;
    goto LAB169;

LAB168:    t58 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB169;

LAB170:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t65) = (t77 | t78);
    t71 = (t27 + 4);
    t79 = (t57 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t71);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t79);
    t88 = (~(t87));
    t8 = (t82 & t84);
    t89 = (t86 & t88);
    t91 = (~(t8));
    t92 = (~(t89));
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB172;

LAB173:    xsi_set_current_line(213, ng1);

LAB176:    xsi_set_current_line(214, ng1);
    t97 = (t0 + 4960);
    t103 = (t97 + 56U);
    t104 = *((char **)t103);
    t105 = (t0 + 5280);
    xsi_vlogvar_assign_value(t105, t104, 0, 0, 8);
    goto LAB175;

LAB179:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB180;

LAB181:    *((unsigned int *)t27) = 1;
    goto LAB184;

LAB183:    t13 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB184;

LAB185:    t28 = (t0 + 5120);
    t34 = (t28 + 56U);
    t35 = *((char **)t34);
    t39 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t40 = (t35 + 4);
    t42 = (t39 + 4);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t42);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB189;

LAB188:    if (t53 != 0)
        goto LAB190;

LAB191:    memset(t57, 0, 8);
    t56 = (t41 + 4);
    t59 = *((unsigned int *)t56);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB192;

LAB193:    if (*((unsigned int *)t56) != 0)
        goto LAB194;

LAB195:    t66 = *((unsigned int *)t27);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t64 = (t27 + 4);
    t69 = (t57 + 4);
    t70 = (t65 + 4);
    t72 = *((unsigned int *)t64);
    t73 = *((unsigned int *)t69);
    t74 = (t72 | t73);
    *((unsigned int *)t70) = t74;
    t75 = *((unsigned int *)t70);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB196;

LAB197:
LAB198:    goto LAB187;

LAB189:    *((unsigned int *)t41) = 1;
    goto LAB191;

LAB190:    t43 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB191;

LAB192:    *((unsigned int *)t57) = 1;
    goto LAB195;

LAB194:    t58 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB195;

LAB196:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t65) = (t77 | t78);
    t71 = (t27 + 4);
    t79 = (t57 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t71);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t79);
    t88 = (~(t87));
    t8 = (t82 & t84);
    t89 = (t86 & t88);
    t91 = (~(t8));
    t92 = (~(t89));
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB198;

LAB199:    xsi_set_current_line(217, ng1);

LAB202:    xsi_set_current_line(218, ng1);
    t97 = (t0 + 4960);
    t103 = (t97 + 56U);
    t104 = *((char **)t103);
    t105 = (t0 + 4960);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t108, 0, 8);
    xsi_vlog_unsigned_add(t108, 8, t104, 8, t107, 8);
    t109 = (t0 + 5280);
    xsi_vlogvar_assign_value(t109, t108, 0, 0, 8);
    goto LAB201;

LAB205:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB206;

LAB207:    *((unsigned int *)t27) = 1;
    goto LAB210;

LAB209:    t13 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB210;

LAB211:    t28 = (t0 + 5120);
    t34 = (t28 + 56U);
    t35 = *((char **)t34);
    t39 = ((char*)((ng3)));
    memset(t41, 0, 8);
    t40 = (t35 + 4);
    t42 = (t39 + 4);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t40);
    t52 = *((unsigned int *)t42);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB215;

LAB214:    if (t53 != 0)
        goto LAB216;

LAB217:    memset(t57, 0, 8);
    t56 = (t41 + 4);
    t59 = *((unsigned int *)t56);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB218;

LAB219:    if (*((unsigned int *)t56) != 0)
        goto LAB220;

LAB221:    t66 = *((unsigned int *)t27);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t64 = (t27 + 4);
    t69 = (t57 + 4);
    t70 = (t65 + 4);
    t72 = *((unsigned int *)t64);
    t73 = *((unsigned int *)t69);
    t74 = (t72 | t73);
    *((unsigned int *)t70) = t74;
    t75 = *((unsigned int *)t70);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB222;

LAB223:
LAB224:    goto LAB213;

LAB215:    *((unsigned int *)t41) = 1;
    goto LAB217;

LAB216:    t43 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB217;

LAB218:    *((unsigned int *)t57) = 1;
    goto LAB221;

LAB220:    t58 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB221;

LAB222:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t65) = (t77 | t78);
    t71 = (t27 + 4);
    t79 = (t57 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t71);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t79);
    t88 = (~(t87));
    t8 = (t82 & t84);
    t89 = (t86 & t88);
    t91 = (~(t8));
    t92 = (~(t89));
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB224;

LAB225:    xsi_set_current_line(221, ng1);

LAB228:    xsi_set_current_line(222, ng1);
    t97 = (t0 + 4960);
    t103 = (t97 + 56U);
    t104 = *((char **)t103);
    t105 = (t0 + 4960);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t108, 0, 8);
    xsi_vlog_unsigned_add(t108, 8, t104, 8, t107, 8);
    t109 = (t0 + 4960);
    t110 = (t109 + 56U);
    t111 = *((char **)t110);
    memset(t112, 0, 8);
    xsi_vlog_unsigned_add(t112, 8, t108, 8, t111, 8);
    t113 = (t0 + 5280);
    xsi_vlogvar_assign_value(t113, t112, 0, 0, 8);
    goto LAB227;

LAB231:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB232;

LAB233:    xsi_set_current_line(231, ng1);
    t10 = ((char*)((ng11)));
    t12 = (t0 + 6240);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 3);
    goto LAB235;

LAB238:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB239;

LAB240:    xsi_set_current_line(237, ng1);
    t10 = ((char*)((ng3)));
    t12 = (t0 + 6240);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 3);
    goto LAB242;

LAB245:    *((unsigned int *)t11) = 1;
    goto LAB247;

LAB246:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB247;

LAB248:    xsi_set_current_line(244, ng1);

LAB251:    xsi_set_current_line(246, ng1);
    t12 = ((char*)((ng11)));
    t13 = (t0 + 5920);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    xsi_set_current_line(248, ng1);
    t2 = (t0 + 3920U);
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
        goto LAB255;

LAB252:    if (t23 != 0)
        goto LAB254;

LAB253:    *((unsigned int *)t11) = 1;

LAB255:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB256;

LAB257:    xsi_set_current_line(253, ng1);
    t2 = (t0 + 3920U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
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
        goto LAB263;

LAB260:    if (t23 != 0)
        goto LAB262;

LAB261:    *((unsigned int *)t11) = 1;

LAB263:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB264;

LAB265:    xsi_set_current_line(258, ng1);
    t2 = (t0 + 3920U);
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
        goto LAB271;

LAB268:    if (t23 != 0)
        goto LAB270;

LAB269:    *((unsigned int *)t11) = 1;

LAB271:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB272;

LAB273:
LAB274:
LAB266:
LAB258:    xsi_set_current_line(265, ng1);
    t2 = (t0 + 5600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5760);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(267, ng1);
    t2 = (t0 + 5600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5280);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memset(t11, 0, 8);
    t10 = (t4 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB277;

LAB276:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB277;

LAB280:    if (*((unsigned int *)t4) < *((unsigned int *)t9))
        goto LAB279;

LAB278:    *((unsigned int *)t11) = 1;

LAB279:    memset(t27, 0, 8);
    t26 = (t11 + 4);
    t14 = *((unsigned int *)t26);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB281;

LAB282:    if (*((unsigned int *)t26) != 0)
        goto LAB283;

LAB284:    t34 = (t27 + 4);
    t19 = *((unsigned int *)t27);
    t20 = *((unsigned int *)t34);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB285;

LAB286:    memcpy(t65, t27, 8);

LAB287:    t80 = (t65 + 4);
    t83 = *((unsigned int *)t80);
    t84 = (~(t83));
    t85 = *((unsigned int *)t65);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB299;

LAB300:    xsi_set_current_line(274, ng1);

LAB303:    xsi_set_current_line(275, ng1);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB301:    goto LAB250;

LAB254:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB255;

LAB256:    xsi_set_current_line(249, ng1);

LAB259:    xsi_set_current_line(250, ng1);
    t10 = (t0 + 5600);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t26 = ((char*)((ng5)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 8, t13, 8, t26, 8);
    t28 = (t0 + 5600);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    goto LAB258;

LAB262:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB263;

LAB264:    xsi_set_current_line(254, ng1);

LAB267:    xsi_set_current_line(255, ng1);
    t10 = (t0 + 5600);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t26 = ((char*)((ng11)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 8, t13, 8, t26, 8);
    t28 = (t0 + 5600);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    goto LAB266;

LAB270:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB271;

LAB272:    xsi_set_current_line(259, ng1);

LAB275:    xsi_set_current_line(260, ng1);
    t10 = (t0 + 5600);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t26 = ((char*)((ng9)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 8, t13, 8, t26, 8);
    t28 = (t0 + 5600);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 8);
    goto LAB274;

LAB277:    t13 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB279;

LAB281:    *((unsigned int *)t27) = 1;
    goto LAB284;

LAB283:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB284;

LAB285:    t35 = (t0 + 3920U);
    t39 = *((char **)t35);
    t35 = ((char*)((ng4)));
    memset(t41, 0, 8);
    t40 = (t39 + 4);
    t42 = (t35 + 4);
    t22 = *((unsigned int *)t39);
    t23 = *((unsigned int *)t35);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t40);
    t29 = *((unsigned int *)t42);
    t30 = (t25 ^ t29);
    t31 = (t24 | t30);
    t32 = *((unsigned int *)t40);
    t33 = *((unsigned int *)t42);
    t36 = (t32 | t33);
    t37 = (~(t36));
    t38 = (t31 & t37);
    if (t38 != 0)
        goto LAB291;

LAB288:    if (t36 != 0)
        goto LAB290;

LAB289:    *((unsigned int *)t41) = 1;

LAB291:    memset(t57, 0, 8);
    t56 = (t41 + 4);
    t44 = *((unsigned int *)t56);
    t45 = (~(t44));
    t46 = *((unsigned int *)t41);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB292;

LAB293:    if (*((unsigned int *)t56) != 0)
        goto LAB294;

LAB295:    t49 = *((unsigned int *)t27);
    t50 = *((unsigned int *)t57);
    t51 = (t49 & t50);
    *((unsigned int *)t65) = t51;
    t64 = (t27 + 4);
    t69 = (t57 + 4);
    t70 = (t65 + 4);
    t52 = *((unsigned int *)t64);
    t53 = *((unsigned int *)t69);
    t54 = (t52 | t53);
    *((unsigned int *)t70) = t54;
    t55 = *((unsigned int *)t70);
    t59 = (t55 != 0);
    if (t59 == 1)
        goto LAB296;

LAB297:
LAB298:    goto LAB287;

LAB290:    t43 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB291;

LAB292:    *((unsigned int *)t57) = 1;
    goto LAB295;

LAB294:    t58 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB295;

LAB296:    t60 = *((unsigned int *)t65);
    t61 = *((unsigned int *)t70);
    *((unsigned int *)t65) = (t60 | t61);
    t71 = (t27 + 4);
    t79 = (t57 + 4);
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t66 = *((unsigned int *)t71);
    t67 = (~(t66));
    t68 = *((unsigned int *)t57);
    t72 = (~(t68));
    t73 = *((unsigned int *)t79);
    t74 = (~(t73));
    t8 = (t63 & t67);
    t89 = (t72 & t74);
    t75 = (~(t8));
    t76 = (~(t89));
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t77 & t75);
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & t76);
    t81 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t81 & t75);
    t82 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t82 & t76);
    goto LAB298;

LAB299:    xsi_set_current_line(268, ng1);

LAB302:    xsi_set_current_line(269, ng1);
    t97 = ((char*)((ng3)));
    t103 = (t0 + 5760);
    xsi_vlogvar_assign_value(t103, t97, 0, 0, 8);
    xsi_set_current_line(270, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB301;

LAB306:    *((unsigned int *)t11) = 1;
    goto LAB308;

LAB307:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB308;

LAB309:    xsi_set_current_line(289, ng1);

LAB312:    xsi_set_current_line(291, ng1);
    t12 = ((char*)((ng7)));
    t13 = (t0 + 5920);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 8);
    xsi_set_current_line(293, ng1);
    t2 = (t0 + 3920U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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
        goto LAB316;

LAB313:    if (t23 != 0)
        goto LAB315;

LAB314:    *((unsigned int *)t11) = 1;

LAB316:    t9 = (t11 + 4);
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB317;

LAB318:    xsi_set_current_line(299, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB319:    goto LAB311;

LAB315:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB316;

LAB317:    xsi_set_current_line(294, ng1);

LAB320:    xsi_set_current_line(295, ng1);
    t10 = ((char*)((ng3)));
    t12 = (t0 + 6240);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 3);
    goto LAB319;

}

static void Initial_312_2(char *t0)
{

LAB0:    xsi_set_current_line(312, ng1);

LAB2:    xsi_set_current_line(313, ng1);
    Monitor_313_3(t0);

LAB1:    return;
}

void Monitor_313_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 7712);
    t2 = (t0 + 8256);
    xsi_vlogfile_monitor((void *)Monitor_313_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000002857525542_2144025757_init()
{
	static char *pe[] = {(void *)Always_46_0,(void *)Always_76_1,(void *)Initial_312_2,(void *)Monitor_313_3};
	xsi_register_didat("work_m_00000000002857525542_2144025757", "isim/vm_testbench_isim_beh.exe.sim/work/m_00000000002857525542_2144025757.didat");
	xsi_register_executes(pe);
}
