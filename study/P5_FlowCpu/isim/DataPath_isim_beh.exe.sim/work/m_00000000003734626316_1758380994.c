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
static const char *ng0 = "C:/Users/Unicorn/Desktop/P7/P7exp/FlowCpu/ID_EX_REG.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {16768U, 0U};



static void Initial_44_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(44, ng0);

LAB2:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 5);
    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4168);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_53_1(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char t55[8];
    char t70[8];
    char t77[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5656);
    *((int *)t2) = 1;
    t3 = (t0 + 5368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t6, 8);

LAB12:    memset(t55, 0, 8);
    t56 = (t27 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t27);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t56) != 0)
        goto LAB22;

LAB23:    t63 = (t55 + 4);
    t64 = *((unsigned int *)t55);
    t65 = (!(t64));
    t66 = *((unsigned int *)t63);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB24;

LAB25:    memcpy(t77, t55, 8);

LAB26:    t105 = (t77 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t77);
    t109 = (t108 & t107);
    t110 = (t109 != 0);
    if (t110 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB77;

LAB78:
LAB79:
LAB36:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 2648U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t18) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB19;

LAB20:    *((unsigned int *)t55) = 1;
    goto LAB23;

LAB22:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB23;

LAB24:    t68 = (t0 + 2808U);
    t69 = *((char **)t68);
    memset(t70, 0, 8);
    t68 = (t69 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t68) != 0)
        goto LAB29;

LAB30:    t78 = *((unsigned int *)t55);
    t79 = *((unsigned int *)t70);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = (t55 + 4);
    t82 = (t70 + 4);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t81);
    t85 = *((unsigned int *)t82);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = *((unsigned int *)t83);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB26;

LAB27:    *((unsigned int *)t70) = 1;
    goto LAB30;

LAB29:    t76 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB30;

LAB31:    t89 = *((unsigned int *)t77);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t77) = (t89 | t90);
    t91 = (t55 + 4);
    t92 = (t70 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t55);
    t96 = (t95 & t94);
    t97 = *((unsigned int *)t92);
    t98 = (~(t97));
    t99 = *((unsigned int *)t70);
    t100 = (t99 & t98);
    t101 = (~(t96));
    t102 = (~(t100));
    t103 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t103 & t101);
    t104 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t104 & t102);
    goto LAB33;

LAB34:    xsi_set_current_line(54, ng0);

LAB37:    xsi_set_current_line(55, ng0);
    t111 = ((char*)((ng1)));
    t112 = (t0 + 3208);
    xsi_vlogvar_assign_value(t112, t111, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    memset(t20, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t2) != 0)
        goto LAB40;

LAB41:    t5 = (t20 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB42;

LAB43:    t17 = *((unsigned int *)t20);
    t21 = (~(t17));
    t22 = *((unsigned int *)t5);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t5) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t20) > 0)
        goto LAB48;

LAB49:    memcpy(t6, t27, 8);

LAB50:    t33 = (t0 + 3848);
    xsi_vlogvar_assign_value(t33, t6, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    memset(t20, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t2) != 0)
        goto LAB66;

LAB67:    t5 = (t20 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB68;

LAB69:    t17 = *((unsigned int *)t20);
    t21 = (~(t17));
    t22 = *((unsigned int *)t5);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t5) > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t20) > 0)
        goto LAB74;

LAB75:    memcpy(t6, t12, 8);

LAB76:    t18 = (t0 + 4168);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 1);
    goto LAB36;

LAB38:    *((unsigned int *)t20) = 1;
    goto LAB41;

LAB40:    t4 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB41;

LAB42:    t12 = (t0 + 1688U);
    t13 = *((char **)t12);
    goto LAB43;

LAB44:    t12 = (t0 + 2808U);
    t18 = *((char **)t12);
    memset(t55, 0, 8);
    t12 = (t18 + 4);
    t24 = *((unsigned int *)t12);
    t25 = (~(t24));
    t28 = *((unsigned int *)t18);
    t29 = (t28 & t25);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t12) != 0)
        goto LAB53;

LAB54:    t26 = (t55 + 4);
    t34 = *((unsigned int *)t55);
    t35 = *((unsigned int *)t26);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB55;

LAB56:    t37 = *((unsigned int *)t55);
    t38 = (~(t37));
    t39 = *((unsigned int *)t26);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t26) > 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t55) > 0)
        goto LAB61;

LAB62:    memcpy(t27, t32, 8);

LAB63:    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t6, 32, t13, 32, t27, 32);
    goto LAB50;

LAB48:    memcpy(t6, t13, 8);
    goto LAB50;

LAB51:    *((unsigned int *)t55) = 1;
    goto LAB54;

LAB53:    t19 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB54;

LAB55:    t31 = ((char*)((ng2)));
    goto LAB56;

LAB57:    t32 = ((char*)((ng1)));
    goto LAB58;

LAB59:    xsi_vlog_unsigned_bit_combine(t27, 32, t31, 32, t32, 32);
    goto LAB63;

LAB61:    memcpy(t27, t31, 8);
    goto LAB63;

LAB64:    *((unsigned int *)t20) = 1;
    goto LAB67;

LAB66:    t4 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB67;

LAB68:    t12 = (t0 + 2008U);
    t13 = *((char **)t12);
    memcpy(t27, t13, 8);
    goto LAB69;

LAB70:    t12 = ((char*)((ng1)));
    goto LAB71;

LAB72:    xsi_vlog_unsigned_bit_combine(t6, 32, t27, 32, t12, 32);
    goto LAB76;

LAB74:    memcpy(t6, t27, 8);
    goto LAB76;

LAB77:    xsi_set_current_line(64, ng0);

LAB80:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t27, 0, 8);
    t12 = (t5 + 4);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t4);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t21 = *((unsigned int *)t13);
    t22 = (t17 ^ t21);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    t28 = (t24 | t25);
    t29 = (~(t28));
    t30 = (t23 & t29);
    if (t30 != 0)
        goto LAB82;

LAB81:    if (t28 != 0)
        goto LAB83;

LAB84:    memset(t20, 0, 8);
    t19 = (t27 + 4);
    t34 = *((unsigned int *)t19);
    t35 = (~(t34));
    t36 = *((unsigned int *)t27);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t19) != 0)
        goto LAB87;

LAB88:    t31 = (t20 + 4);
    t39 = *((unsigned int *)t20);
    t40 = *((unsigned int *)t31);
    t43 = (t39 || t40);
    if (t43 > 0)
        goto LAB89;

LAB90:    t44 = *((unsigned int *)t20);
    t45 = (~(t44));
    t47 = *((unsigned int *)t31);
    t48 = (t45 || t47);
    if (t48 > 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t31) > 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t20) > 0)
        goto LAB95;

LAB96:    memcpy(t6, t41, 8);

LAB97:    t33 = (t0 + 3208);
    xsi_vlogvar_assign_value(t33, t6, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB79;

LAB82:    *((unsigned int *)t27) = 1;
    goto LAB84;

LAB83:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t20) = 1;
    goto LAB88;

LAB87:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB88;

LAB89:    t32 = ((char*)((ng1)));
    goto LAB90;

LAB91:    t33 = (t0 + 1048U);
    t41 = *((char **)t33);
    goto LAB92;

LAB93:    xsi_vlog_unsigned_bit_combine(t6, 32, t32, 32, t41, 32);
    goto LAB97;

LAB95:    memcpy(t6, t32, 8);
    goto LAB97;

}


extern void work_m_00000000003734626316_1758380994_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Always_53_1};
	xsi_register_didat("work_m_00000000003734626316_1758380994", "isim/DataPath_isim_beh.exe.sim/work/m_00000000003734626316_1758380994.didat");
	xsi_register_executes(pe);
}
