/* arch/arm/mach-s5pc100/include/mach/gpio.h
 *
 * Copyright 2009 Samsung Electronics Co.
 *	Byungho Min <bhmin@samsung.com>
 *
 * S5PC100 - GPIO lib support
 *
 * Base on mach-s3c6400/include/mach/gpio.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#define gpio_get_value	__gpio_get_value
#define gpio_set_value	__gpio_set_value
#define gpio_cansleep	__gpio_cansleep
#define gpio_to_irq	__gpio_to_irq

/* GPIO bank sizes */
#define S5PC1XX_GPIO_A0_NR	(8)
#define S5PC1XX_GPIO_A1_NR	(5)
#define S5PC1XX_GPIO_B_NR	(8)
#define S5PC1XX_GPIO_C_NR	(5)
#define S5PC1XX_GPIO_D_NR	(7)
#define S5PC1XX_GPIO_E0_NR	(8)
#define S5PC1XX_GPIO_E1_NR	(6)
#define S5PC1XX_GPIO_F0_NR	(8)
#define S5PC1XX_GPIO_F1_NR	(8)
#define S5PC1XX_GPIO_F2_NR	(8)
#define S5PC1XX_GPIO_F3_NR	(4)
#define S5PC1XX_GPIO_G0_NR	(8)
#define S5PC1XX_GPIO_G1_NR	(3)
#define S5PC1XX_GPIO_G2_NR	(7)
#define S5PC1XX_GPIO_G3_NR	(7)
#define S5PC1XX_GPIO_H0_NR	(8)
#define S5PC1XX_GPIO_H1_NR	(8)
#define S5PC1XX_GPIO_H2_NR	(8)
#define S5PC1XX_GPIO_H3_NR	(8)
#define S5PC1XX_GPIO_I_NR	(8)
#define S5PC1XX_GPIO_J0_NR	(8)
#define S5PC1XX_GPIO_J1_NR	(5)
#define S5PC1XX_GPIO_J2_NR	(8)
#define S5PC1XX_GPIO_J3_NR	(8)
#define S5PC1XX_GPIO_J4_NR	(4)
#define S5PC1XX_GPIO_K0_NR	(8)
#define S5PC1XX_GPIO_K1_NR	(6)
#define S5PC1XX_GPIO_K2_NR	(8)
#define S5PC1XX_GPIO_K3_NR	(8)
#define S5PC1XX_GPIO_MP00_NR	(8)
#define S5PC1XX_GPIO_MP01_NR	(8)
#define S5PC1XX_GPIO_MP02_NR	(8)
#define S5PC1XX_GPIO_MP03_NR	(8)
#define S5PC1XX_GPIO_MP04_NR	(5)

/* GPIO bank numbes */

/* CONFIG_S3C_GPIO_SPACE allows the user to select extra
 * space for debugging purposes so that any accidental
 * change from one gpio bank to another can be caught.
*/

#define S5PC1XX_GPIO_NEXT(__gpio) \
	((__gpio##_START) + (__gpio##_NR) + CONFIG_S3C_GPIO_SPACE + 1)

enum s3c_gpio_number {
	S5PC1XX_GPIO_A0_START 	= 0,
	S5PC1XX_GPIO_A1_START 	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_A0),
	S5PC1XX_GPIO_B_START 	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_A1),
	S5PC1XX_GPIO_C_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_B),
	S5PC1XX_GPIO_D_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_C),
	S5PC1XX_GPIO_E0_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_D),
	S5PC1XX_GPIO_E1_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_E0),
	S5PC1XX_GPIO_F0_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_E1),
	S5PC1XX_GPIO_F1_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_F0),
	S5PC1XX_GPIO_F2_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_F1),
	S5PC1XX_GPIO_F3_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_F2),
	S5PC1XX_GPIO_G0_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_F3),
	S5PC1XX_GPIO_G1_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_G0),
	S5PC1XX_GPIO_G2_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_G1),
	S5PC1XX_GPIO_G3_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_G2),
	S5PC1XX_GPIO_H0_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_G3),
	S5PC1XX_GPIO_H1_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_H0),
	S5PC1XX_GPIO_H2_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_H1),
	S5PC1XX_GPIO_H3_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_H2),
	S5PC1XX_GPIO_I_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_H3),
	S5PC1XX_GPIO_J0_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_I),
	S5PC1XX_GPIO_J1_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_J0),
	S5PC1XX_GPIO_J2_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_J1),
	S5PC1XX_GPIO_J3_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_J2),
	S5PC1XX_GPIO_J4_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_J3),
	S5PC1XX_GPIO_K0_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_J4),
	S5PC1XX_GPIO_K1_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_K0),
	S5PC1XX_GPIO_K2_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_K1),
	S5PC1XX_GPIO_K3_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_K2),
	S5PC1XX_GPIO_MP00_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_K3),
	S5PC1XX_GPIO_MP01_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_MP00),
	S5PC1XX_GPIO_MP02_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_MP01),
	S5PC1XX_GPIO_MP03_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_MP02),
	S5PC1XX_GPIO_MP04_START	= S5PC1XX_GPIO_NEXT(S5PC1XX_GPIO_MP03),
};

/* S5PC1XX GPIO number definitions. */
#define S5PC1XX_GPA0(_nr)	(S5PC1XX_GPIO_A0_START + (_nr))
#define S5PC1XX_GPA1(_nr)	(S5PC1XX_GPIO_A1_START + (_nr))
#define S5PC1XX_GPB(_nr)	(S5PC1XX_GPIO_B_START + (_nr))
#define S5PC1XX_GPC(_nr)	(S5PC1XX_GPIO_C_START + (_nr))
#define S5PC1XX_GPD(_nr)	(S5PC1XX_GPIO_D_START + (_nr))
#define S5PC1XX_GPE0(_nr)	(S5PC1XX_GPIO_E0_START + (_nr))
#define S5PC1XX_GPE1(_nr)	(S5PC1XX_GPIO_E1_START + (_nr))
#define S5PC1XX_GPF0(_nr)	(S5PC1XX_GPIO_F0_START + (_nr))
#define S5PC1XX_GPF1(_nr)	(S5PC1XX_GPIO_F1_START + (_nr))
#define S5PC1XX_GPF2(_nr)	(S5PC1XX_GPIO_F2_START + (_nr))
#define S5PC1XX_GPF3(_nr)	(S5PC1XX_GPIO_F3_START + (_nr))
#define S5PC1XX_GPG0(_nr)	(S5PC1XX_GPIO_G0_START + (_nr))
#define S5PC1XX_GPG1(_nr)	(S5PC1XX_GPIO_G1_START + (_nr))
#define S5PC1XX_GPG2(_nr)	(S5PC1XX_GPIO_G2_START + (_nr))
#define S5PC1XX_GPG3(_nr)	(S5PC1XX_GPIO_G3_START + (_nr))
#define S5PC1XX_GPH0(_nr)	(S5PC1XX_GPIO_H0_START + (_nr))
#define S5PC1XX_GPH1(_nr)	(S5PC1XX_GPIO_H1_START + (_nr))
#define S5PC1XX_GPH2(_nr)	(S5PC1XX_GPIO_H2_START + (_nr))
#define S5PC1XX_GPH3(_nr)	(S5PC1XX_GPIO_H3_START + (_nr))
#define S5PC1XX_GPI(_nr)	(S5PC1XX_GPIO_I_START + (_nr))
#define S5PC1XX_GPJ0(_nr)	(S5PC1XX_GPIO_J0_START + (_nr))
#define S5PC1XX_GPJ1(_nr)	(S5PC1XX_GPIO_J1_START + (_nr))
#define S5PC1XX_GPJ2(_nr)	(S5PC1XX_GPIO_J2_START + (_nr))
#define S5PC1XX_GPJ3(_nr)	(S5PC1XX_GPIO_J3_START + (_nr))
#define S5PC1XX_GPJ4(_nr)	(S5PC1XX_GPIO_J4_START + (_nr))
#define S5PC1XX_GPK0(_nr)	(S5PC1XX_GPIO_K0_START + (_nr))
#define S5PC1XX_GPK1(_nr)	(S5PC1XX_GPIO_K1_START + (_nr))
#define S5PC1XX_GPK2(_nr)	(S5PC1XX_GPIO_K2_START + (_nr))
#define S5PC1XX_GPK3(_nr)	(S5PC1XX_GPIO_K3_START + (_nr))
#define S5PC1XX_MP00(_nr)	(S5PC1XX_GPIO_MP00_START + (_nr))
#define S5PC1XX_MP01(_nr)	(S5PC1XX_GPIO_MP01_START + (_nr))
#define S5PC1XX_MP02(_nr)	(S5PC1XX_GPIO_MP02_START + (_nr))
#define S5PC1XX_MP03(_nr)	(S5PC1XX_GPIO_MP03_START + (_nr))
#define S5PC1XX_MP04(_nr)	(S5PC1XX_GPIO_MP04_START + (_nr))

/* the end of the S5PC1XX specific gpios */
#define S5PC1XX_GPIO_END	(S5PC1XX_MP04(S5PC1XX_GPIO_MP04_NR) + 1)
#define S3C_GPIO_END		S5PC1XX_GPIO_END

/* define the number of gpios we need to the one after the MP04() range */
#define ARCH_NR_GPIOS	(S5PC1XX_MP04(S5PC1XX_GPIO_MP04_NR) + 1)

#include <asm-generic/gpio.h>
