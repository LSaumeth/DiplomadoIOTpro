/*! @file : K32L2B31A_Project.c
 * @author  Leisman Alberto Saumeth Valdeblanquez
 * @version 0.0.000
 * @date    28/07/2021
 * @brief   Funcion principal main
 * @details
 *			v0.0.000	Proyecto base creado usando MCUXpresso
 *
 *
 */
/*******************************************************************************
 * Includes
 ******************************************************************************/

#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "K32L2B31A.h"
#include "fsl_debug_console.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Private Prototypes
 ******************************************************************************/

/*******************************************************************************
 * External vars
 ******************************************************************************/

/*******************************************************************************
 * Local vars
 ******************************************************************************/

unsigned int test_global_var=100;
float dato_float=3.1416;

/*******************************************************************************
 * Private Source Code
 ******************************************************************************/

int main(void) {

    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif

    printf("Hello World\r\n");
    printf("test_global_var:%d",test_global_var);
    printf("dato_float:%d",dato_float);


    volatile static int i = 0 ;/* Force the counter to be placed into memory. */
    /* Enter an infinite loop, just incrementing a counter. */

    while(1) {
        i++ ;
        printf ("i:%u\r\n",i);
    }
    return 0 ;
}
