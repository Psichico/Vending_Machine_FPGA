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
    work_m_00000000003970046453_1832158028_init();
    work_m_00000000004077496500_1859355202_init();
    work_m_00000000002673937556_1512903668_init();
    work_m_00000000002964667348_2582214024_init();
    work_m_00000000001199288033_2097552022_init();
    work_m_00000000001052818611_1290841583_init();
    work_m_00000000003691194030_2144025757_init();
    work_m_00000000002853386218_1659039854_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002853386218_1659039854");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
