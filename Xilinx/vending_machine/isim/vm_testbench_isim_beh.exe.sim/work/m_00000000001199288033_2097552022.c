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
static const char *ng0 = "C:/Users/Psichico/Desktop/Vending_Machine_FPGA/Xilinx/vending_machine/binary2bcd.v";
static int ng1[] = {0, 0};
static int ng2[] = {19, 0};
static int ng3[] = {8, 0};
static int ng4[] = {7, 0};
static int ng5[] = {5, 0};
static unsigned int ng6[] = {3U, 0U};
static int ng7[] = {11, 0};
static int ng8[] = {15, 0};
static int ng9[] = {12, 0};
static int ng10[] = {16, 0};
static int ng11[] = {1, 0};



static void Always_13_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char t47[8];
    char t60[8];
    char t62[8];
    char t63[8];
    char t64[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t16;
    char *t17;
    unsigned int t18;
    int t19;
    int t20;
    char *t21;
    unsigned int t22;
    int t23;
    int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
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
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t61;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    t9 = (t0 + 1928);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    t13 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t11)), 2, t12, 32, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (!(t15));
    t17 = (t7 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t21 = (t8 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t9 = *((char **)t5);
    t10 = ((char*)((ng4)));
    t11 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t6, t7, t8, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t6 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (!(t15));
    t13 = (t7 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (!(t18));
    t20 = (t16 && t19);
    t14 = (t8 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (!(t22));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(19, ng0);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB10:    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t9 = (t4 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB12;

LAB11:    t10 = (t5 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB13;

LAB14:    t12 = (t6 + 4);
    t15 = *((unsigned int *)t12);
    t18 = (~(t15));
    t22 = *((unsigned int *)t6);
    t25 = (t22 & t18);
    t27 = (t25 != 0);
    if (t27 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 16);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 16);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 15U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 15U);
    t10 = (t0 + 1448);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 4);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 12);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 12);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 15U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 15U);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 4);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 8);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 8);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 15U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 15U);
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 4);
    goto LAB2;

LAB6:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t5, t4, t26, *((unsigned int *)t7), t30);
    goto LAB7;

LAB8:    t25 = *((unsigned int *)t8);
    t26 = (t25 + 0);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t7);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t2, t3, t26, *((unsigned int *)t7), t30);
    goto LAB9;

LAB12:    t11 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t6) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(20, ng0);

LAB18:    xsi_set_current_line(21, ng0);
    t13 = (t0 + 1928);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    memset(t7, 0, 8);
    t21 = (t7 + 4);
    t31 = (t17 + 4);
    t28 = *((unsigned int *)t17);
    t32 = (t28 >> 8);
    *((unsigned int *)t7) = t32;
    t33 = *((unsigned int *)t31);
    t34 = (t33 >> 8);
    *((unsigned int *)t21) = t34;
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & 15U);
    t36 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t36 & 15U);
    t37 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t38 = (t7 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB20;

LAB19:    t39 = (t37 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t7) < *((unsigned int *)t37))
        goto LAB22;

LAB21:    *((unsigned int *)t8) = 1;

LAB22:    t41 = (t8 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t8);
    t45 = (t44 & t43);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 12);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 12);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 15U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 15U);
    t10 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB30;

LAB29:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB30;

LAB33:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB32;

LAB31:    *((unsigned int *)t7) = 1;

LAB32:    t14 = (t7 + 4);
    t32 = *((unsigned int *)t14);
    t33 = (~(t32));
    t34 = *((unsigned int *)t7);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t9 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t18 = (t15 >> 16);
    *((unsigned int *)t6) = t18;
    t22 = *((unsigned int *)t9);
    t25 = (t22 >> 16);
    *((unsigned int *)t5) = t25;
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 & 15U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 15U);
    t10 = ((char*)((ng5)));
    memset(t7, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB40;

LAB39:    t12 = (t10 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t6) < *((unsigned int *)t10))
        goto LAB42;

LAB41:    *((unsigned int *)t7) = 1;

LAB42:    t14 = (t7 + 4);
    t32 = *((unsigned int *)t14);
    t33 = (~(t32));
    t34 = *((unsigned int *)t7);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 20, t4, 20, t5, 32);
    t9 = (t0 + 1928);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 20);

LAB46:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 4);
    goto LAB10;

LAB20:    t40 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(22, ng0);
    t48 = (t0 + 1928);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memset(t47, 0, 8);
    t51 = (t47 + 4);
    t52 = (t50 + 4);
    t53 = *((unsigned int *)t50);
    t54 = (t53 >> 8);
    *((unsigned int *)t47) = t54;
    t55 = *((unsigned int *)t52);
    t56 = (t55 >> 8);
    *((unsigned int *)t51) = t56;
    t57 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t57 & 15U);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t58 & 15U);
    t59 = ((char*)((ng6)));
    memset(t60, 0, 8);
    xsi_vlog_unsigned_add(t60, 4, t47, 4, t59, 4);
    t61 = (t0 + 1928);
    t65 = (t0 + 1928);
    t66 = (t65 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng7)));
    t69 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t62, t63, t64, ((int*)(t67)), 2, t68, 32, 1, t69, 32, 1);
    t70 = (t62 + 4);
    t71 = *((unsigned int *)t70);
    t16 = (!(t71));
    t72 = (t63 + 4);
    t73 = *((unsigned int *)t72);
    t19 = (!(t73));
    t20 = (t16 && t19);
    t74 = (t64 + 4);
    t75 = *((unsigned int *)t74);
    t23 = (!(t75));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB27;

LAB28:    goto LAB26;

LAB27:    t76 = *((unsigned int *)t64);
    t26 = (t76 + 0);
    t77 = *((unsigned int *)t62);
    t78 = *((unsigned int *)t63);
    t29 = (t77 - t78);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t61, t60, t26, *((unsigned int *)t63), t30);
    goto LAB28;

LAB30:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB32;

LAB34:    xsi_set_current_line(25, ng0);
    t17 = (t0 + 1928);
    t21 = (t17 + 56U);
    t31 = *((char **)t21);
    memset(t8, 0, 8);
    t37 = (t8 + 4);
    t38 = (t31 + 4);
    t42 = *((unsigned int *)t31);
    t43 = (t42 >> 12);
    *((unsigned int *)t8) = t43;
    t44 = *((unsigned int *)t38);
    t45 = (t44 >> 12);
    *((unsigned int *)t37) = t45;
    t46 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t46 & 15U);
    t53 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t53 & 15U);
    t39 = ((char*)((ng6)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 4, t8, 4, t39, 4);
    t40 = (t0 + 1928);
    t41 = (t0 + 1928);
    t48 = (t41 + 72U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng8)));
    t51 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t60, t62, t63, ((int*)(t49)), 2, t50, 32, 1, t51, 32, 1);
    t52 = (t60 + 4);
    t54 = *((unsigned int *)t52);
    t16 = (!(t54));
    t59 = (t62 + 4);
    t55 = *((unsigned int *)t59);
    t19 = (!(t55));
    t20 = (t16 && t19);
    t61 = (t63 + 4);
    t56 = *((unsigned int *)t61);
    t23 = (!(t56));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB37;

LAB38:    goto LAB36;

LAB37:    t57 = *((unsigned int *)t63);
    t26 = (t57 + 0);
    t58 = *((unsigned int *)t60);
    t71 = *((unsigned int *)t62);
    t29 = (t58 - t71);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t40, t47, t26, *((unsigned int *)t62), t30);
    goto LAB38;

LAB40:    t13 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB42;

LAB44:    xsi_set_current_line(28, ng0);
    t17 = (t0 + 1928);
    t21 = (t17 + 56U);
    t31 = *((char **)t21);
    memset(t8, 0, 8);
    t37 = (t8 + 4);
    t38 = (t31 + 4);
    t42 = *((unsigned int *)t31);
    t43 = (t42 >> 16);
    *((unsigned int *)t8) = t43;
    t44 = *((unsigned int *)t38);
    t45 = (t44 >> 16);
    *((unsigned int *)t37) = t45;
    t46 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t46 & 15U);
    t53 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t53 & 15U);
    t39 = ((char*)((ng6)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 4, t8, 4, t39, 4);
    t40 = (t0 + 1928);
    t41 = (t0 + 1928);
    t48 = (t41 + 72U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng2)));
    t51 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t60, t62, t63, ((int*)(t49)), 2, t50, 32, 1, t51, 32, 1);
    t52 = (t60 + 4);
    t54 = *((unsigned int *)t52);
    t16 = (!(t54));
    t59 = (t62 + 4);
    t55 = *((unsigned int *)t59);
    t19 = (!(t55));
    t20 = (t16 && t19);
    t61 = (t63 + 4);
    t56 = *((unsigned int *)t61);
    t23 = (!(t56));
    t24 = (t20 && t23);
    if (t24 == 1)
        goto LAB47;

LAB48:    goto LAB46;

LAB47:    t57 = *((unsigned int *)t63);
    t26 = (t57 + 0);
    t58 = *((unsigned int *)t60);
    t71 = *((unsigned int *)t62);
    t29 = (t58 - t71);
    t30 = (t29 + 1);
    xsi_vlogvar_assign_value(t40, t47, t26, *((unsigned int *)t62), t30);
    goto LAB48;

}


extern void work_m_00000000001199288033_2097552022_init()
{
	static char *pe[] = {(void *)Always_13_0};
	xsi_register_didat("work_m_00000000001199288033_2097552022", "isim/vm_testbench_isim_beh.exe.sim/work/m_00000000001199288033_2097552022.didat");
	xsi_register_executes(pe);
}
