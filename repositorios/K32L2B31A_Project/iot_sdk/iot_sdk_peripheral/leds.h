/*! @file : Leduiu.h
 * @author  Leisman Alberto Saumeth Valdeblanquez
 * @version 1.0.0
 * @date    2/09/2021
 * @brief   Driver para controlar leds de tarjeta frmd-k32l2b3
 * @details
 *
 */
#ifndef IOT_SDK_PERIPHERALS_LEDS_H_
#define IOT_SDK_PERIPHERALS_LEDS_H_
/*******************************************************************************
 * Includes
 ******************************************************************************/

 

 


/*!
 * @addtogroup peripherals
 * @{
 */
/*!
 * @addtogroup leds
 * @{
 */
/*******************************************************************************
 * Public Definitions
 ******************************************************************************/

 

 

/*******************************************************************************
 * External vars
 ******************************************************************************/

 

 

/*******************************************************************************
 * Public vars
 ******************************************************************************/

 

 

/*******************************************************************************
 * Public Prototypes
 ******************************************************************************/
/*!
 * @brief enciende leds verde de tarjeta frdm-k32l2b3
 *
 */
void encender_led_verde();
void encender_led_rojo();
/*----------------------------------------------------------------------------------*/
/*!
 * @brief apagar leds verde de tarjeta frdm-k32l2b3
 *
 */
void apagar_led_verde();
void apagar_led_rojo();

 

 

/** @} */ // end of X leds
/** @} */ // end of X peripherals

 

 

#endif /* IOT_SDK_PERIPHERALS_LEDS_H_ */
