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
static const char *ng0 = "C:/CZ3001/control.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {8U, 0U};
static unsigned int ng11[] = {9U, 0U};
static int ng12[] = {0, 0};
static unsigned int ng13[] = {10U, 0U};



static void Always_16_0(char *t0)
{
    char t9[8];
    char t16[8];
    char t17[8];
    char t42[8];
    char t43[8];
    char t55[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
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
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    memset(t17, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t18 = (t12 | t15);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB44;

LAB41:    if (t21 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t17) = 1;

LAB44:    memset(t16, 0, 8);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t24) != 0)
        goto LAB47;

LAB48:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t16);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB49;

LAB50:    t36 = *((unsigned int *)t16);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t31) > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t16) > 0)
        goto LAB55;

LAB56:    memcpy(t9, t40, 8);

LAB57:    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t9, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t17, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t18 = (t12 | t15);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB61;

LAB58:    if (t21 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t17) = 1;

LAB61:    memset(t16, 0, 8);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t24) != 0)
        goto LAB64;

LAB65:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t16);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB66;

LAB67:    t36 = *((unsigned int *)t16);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t31) > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t16) > 0)
        goto LAB72;

LAB73:    memcpy(t9, t40, 8);

LAB74:    t41 = (t0 + 1928);
    xsi_vlogvar_assign_value(t41, t9, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t17, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t18 = (t12 | t15);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB78;

LAB75:    if (t21 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t17) = 1;

LAB78:    memset(t16, 0, 8);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t24) != 0)
        goto LAB81;

LAB82:    t31 = (t16 + 4);
    t32 = *((unsigned int *)t16);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB83;

LAB84:    t36 = *((unsigned int *)t16);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t31) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t16) > 0)
        goto LAB89;

LAB90:    memcpy(t9, t40, 8);

LAB91:    t41 = (t0 + 2088);
    xsi_vlogvar_assign_value(t41, t9, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t17, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t18 = (t12 | t15);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB95;

LAB92:    if (t21 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t17) = 1;

LAB95:    memset(t42, 0, 8);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t24) != 0)
        goto LAB98;

LAB99:    t31 = (t42 + 4);
    t32 = *((unsigned int *)t42);
    t33 = (!(t32));
    t34 = *((unsigned int *)t31);
    t36 = (t33 || t34);
    if (t36 > 0)
        goto LAB100;

LAB101:    memcpy(t63, t42, 8);

LAB102:    memset(t16, 0, 8);
    t90 = (t63 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t63);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t90) != 0)
        goto LAB116;

LAB117:    t97 = (t16 + 4);
    t98 = *((unsigned int *)t16);
    t99 = *((unsigned int *)t97);
    t100 = (t98 || t99);
    if (t100 > 0)
        goto LAB118;

LAB119:    t102 = *((unsigned int *)t16);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t97) > 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t16) > 0)
        goto LAB124;

LAB125:    memcpy(t9, t106, 8);

LAB126:    t107 = (t0 + 2248);
    xsi_vlogvar_assign_value(t107, t9, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t17, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t18 = (t12 | t15);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB130;

LAB127:    if (t21 != 0)
        goto LAB129;

LAB128:    *((unsigned int *)t17) = 1;

LAB130:    memset(t42, 0, 8);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB131;

LAB132:    if (*((unsigned int *)t24) != 0)
        goto LAB133;

LAB134:    t31 = (t42 + 4);
    t32 = *((unsigned int *)t42);
    t33 = (!(t32));
    t34 = *((unsigned int *)t31);
    t36 = (t33 || t34);
    if (t36 > 0)
        goto LAB135;

LAB136:    memcpy(t63, t42, 8);

LAB137:    memset(t16, 0, 8);
    t90 = (t63 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t63);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB149;

LAB150:    if (*((unsigned int *)t90) != 0)
        goto LAB151;

LAB152:    t97 = (t16 + 4);
    t98 = *((unsigned int *)t16);
    t99 = *((unsigned int *)t97);
    t100 = (t98 || t99);
    if (t100 > 0)
        goto LAB153;

LAB154:    t102 = *((unsigned int *)t16);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t97) > 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t16) > 0)
        goto LAB159;

LAB160:    memcpy(t9, t106, 8);

LAB161:    t107 = (t0 + 2408);
    xsi_vlogvar_assign_value(t107, t9, 0, 0, 1);
    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);

LAB30:    xsi_set_current_line(21, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1448);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 3);
    goto LAB29;

LAB9:    xsi_set_current_line(24, ng0);

LAB31:    xsi_set_current_line(25, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 3);
    goto LAB29;

LAB11:    xsi_set_current_line(28, ng0);

LAB32:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 3);
    goto LAB29;

LAB13:    xsi_set_current_line(32, ng0);

LAB33:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 3);
    goto LAB29;

LAB15:    xsi_set_current_line(36, ng0);

LAB34:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 3);
    goto LAB29;

LAB17:    xsi_set_current_line(40, ng0);

LAB35:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 3);
    goto LAB29;

LAB19:    xsi_set_current_line(44, ng0);

LAB36:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 3);
    goto LAB29;

LAB21:    xsi_set_current_line(48, ng0);

LAB37:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 7U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 7U);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 3);
    goto LAB29;

LAB23:    xsi_set_current_line(52, ng0);

LAB38:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB29;

LAB25:    xsi_set_current_line(56, ng0);

LAB39:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB29;

LAB27:    xsi_set_current_line(60, ng0);

LAB40:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB29;

LAB43:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t16) = 1;
    goto LAB48;

LAB47:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB48;

LAB49:    t35 = ((char*)((ng3)));
    goto LAB50;

LAB51:    t40 = ((char*)((ng1)));
    goto LAB52;

LAB53:    xsi_vlog_unsigned_bit_combine(t9, 1, t35, 1, t40, 1);
    goto LAB57;

LAB55:    memcpy(t9, t35, 8);
    goto LAB57;

LAB60:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t16) = 1;
    goto LAB65;

LAB64:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB65;

LAB66:    t35 = ((char*)((ng3)));
    goto LAB67;

LAB68:    t40 = ((char*)((ng1)));
    goto LAB69;

LAB70:    xsi_vlog_unsigned_bit_combine(t9, 1, t35, 1, t40, 1);
    goto LAB74;

LAB72:    memcpy(t9, t35, 8);
    goto LAB74;

LAB77:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB78;

LAB79:    *((unsigned int *)t16) = 1;
    goto LAB82;

LAB81:    t30 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB82;

LAB83:    t35 = ((char*)((ng3)));
    goto LAB84;

LAB85:    t40 = ((char*)((ng1)));
    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t9, 1, t35, 1, t40, 1);
    goto LAB91;

LAB89:    memcpy(t9, t35, 8);
    goto LAB91;

LAB94:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t42) = 1;
    goto LAB99;

LAB98:    t30 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB99;

LAB100:    t35 = (t0 + 1048U);
    t40 = *((char **)t35);
    t35 = ((char*)((ng7)));
    memset(t43, 0, 8);
    t41 = (t40 + 4);
    t44 = (t35 + 4);
    t37 = *((unsigned int *)t40);
    t38 = *((unsigned int *)t35);
    t39 = (t37 ^ t38);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t44);
    t47 = (t45 ^ t46);
    t48 = (t39 | t47);
    t49 = *((unsigned int *)t41);
    t50 = *((unsigned int *)t44);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB106;

LAB103:    if (t51 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t43) = 1;

LAB106:    memset(t55, 0, 8);
    t56 = (t43 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t43);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t56) != 0)
        goto LAB109;

LAB110:    t64 = *((unsigned int *)t42);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t42 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB111;

LAB112:
LAB113:    goto LAB102;

LAB105:    t54 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB106;

LAB107:    *((unsigned int *)t55) = 1;
    goto LAB110;

LAB109:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB110;

LAB111:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t42 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t42);
    t6 = (t81 & t80);
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t55);
    t85 = (t84 & t83);
    t86 = (~(t6));
    t87 = (~(t85));
    t88 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t88 & t86);
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    goto LAB113;

LAB114:    *((unsigned int *)t16) = 1;
    goto LAB117;

LAB116:    t96 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB117;

LAB118:    t101 = ((char*)((ng3)));
    goto LAB119;

LAB120:    t106 = ((char*)((ng1)));
    goto LAB121;

LAB122:    xsi_vlog_unsigned_bit_combine(t9, 1, t101, 1, t106, 1);
    goto LAB126;

LAB124:    memcpy(t9, t101, 8);
    goto LAB126;

LAB129:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB130;

LAB131:    *((unsigned int *)t42) = 1;
    goto LAB134;

LAB133:    t30 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB134;

LAB135:    t35 = (t0 + 1048U);
    t40 = *((char **)t35);
    t35 = ((char*)((ng13)));
    memset(t43, 0, 8);
    t41 = (t40 + 4);
    t44 = (t35 + 4);
    t37 = *((unsigned int *)t40);
    t38 = *((unsigned int *)t35);
    t39 = (t37 ^ t38);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t44);
    t47 = (t45 ^ t46);
    t48 = (t39 | t47);
    t49 = *((unsigned int *)t41);
    t50 = *((unsigned int *)t44);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB141;

LAB138:    if (t51 != 0)
        goto LAB140;

LAB139:    *((unsigned int *)t43) = 1;

LAB141:    memset(t55, 0, 8);
    t56 = (t43 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t43);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t56) != 0)
        goto LAB144;

LAB145:    t64 = *((unsigned int *)t42);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t42 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB146;

LAB147:
LAB148:    goto LAB137;

LAB140:    t54 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB141;

LAB142:    *((unsigned int *)t55) = 1;
    goto LAB145;

LAB144:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB145;

LAB146:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t42 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t42);
    t6 = (t81 & t80);
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t55);
    t85 = (t84 & t83);
    t86 = (~(t6));
    t87 = (~(t85));
    t88 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t88 & t86);
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    goto LAB148;

LAB149:    *((unsigned int *)t16) = 1;
    goto LAB152;

LAB151:    t96 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB152;

LAB153:    t101 = ((char*)((ng3)));
    goto LAB154;

LAB155:    t106 = ((char*)((ng1)));
    goto LAB156;

LAB157:    xsi_vlog_unsigned_bit_combine(t9, 1, t101, 1, t106, 1);
    goto LAB161;

LAB159:    memcpy(t9, t101, 8);
    goto LAB161;

}


extern void work_m_00000000004080625861_3037777339_init()
{
	static char *pe[] = {(void *)Always_16_0};
	xsi_register_didat("work_m_00000000004080625861_3037777339", "isim/part1_without_pipeline_isim_beh.exe.sim/work/m_00000000004080625861_3037777339.didat");
	xsi_register_executes(pe);
}
