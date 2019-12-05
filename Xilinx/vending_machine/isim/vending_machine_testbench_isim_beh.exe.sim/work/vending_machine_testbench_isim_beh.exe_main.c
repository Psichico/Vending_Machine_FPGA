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
    work_m_00000000003539603010_2437389400_init();
    work_m_00000000003541634844_1832158028_init();
    work_m_00000000003887113532_1859355202_init();
    work_m_00000000000336826381_2144025757_init();
    work_m_00000000003223751065_1659039854_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003223751065_1659039854");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
