/******************************************************************************************
***********************************- RCC_config.h                    **********************
***********************************-Created: Aug 12, 2023            **********************
***********************************-Author :Abderrahmane Lahouasna   **********************
***********************************-Version: 1                       **********************

******************************************************************************************/

/******************************************************************************************
*******************************guard of file will call on time in .c***********************
******************************************************************************************/

#ifndef RCC_CONFIG_H_
#define RCC_CONFIG_H_
/*
 CLKSRC option:
      - HSI
      - HSE
      - PLL
 */
#define CLKSRC   HSE

/*
 HSE_SRC option:
      - HSE_CRYSTAL
      - HSE_RC
 */
#define HSE_SRC   HSE_CRYSTAL

/*
 PLL option:
      - HSE_PLL
      - HSI_PLL
 */

#define PLL   HSE_PLL

#endif /* RCC_CONFIG_H_ */