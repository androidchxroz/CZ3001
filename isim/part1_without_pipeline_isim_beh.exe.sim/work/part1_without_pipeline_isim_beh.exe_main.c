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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001234773414_3832581141_init();
    work_m_00000000002818788480_2381739659_init();
    work_m_00000000001047641859_0833183191_init();
    work_m_00000000002785404253_3415651129_init();
    work_m_00000000004080625861_3037777339_init();
    work_m_00000000002320704264_1621107508_init();
    work_m_00000000000037220084_2725559894_init();
    work_m_00000000001189493594_3258266500_init();
    work_m_00000000003679612009_1721733238_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003679612009_1721733238");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
