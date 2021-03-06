/*
 * Copyright (c) 2012, Code Aurora Forum. All rights reserved.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_ARCH_MSM_IOMAP_MSM9625_H
#define __ASM_ARCH_MSM_IOMAP_MSM9625_H


#define MSM9625_SHARED_RAM_PHYS	0x18D00000

#define MSM9625_APCS_GCC_PHYS	0xF9011000
#define MSM9625_APCS_GCC_SIZE	SZ_4K

#define MSM9625_TMR_PHYS	0xF9021000
#define MSM9625_TMR_SIZE	SZ_4K

#define MSM9625_TLMM_PHYS	0xFD510000
#define MSM9625_TLMM_SIZE	SZ_16K

#ifdef CONFIG_DEBUG_MSM9625_UART
#define MSM_DEBUG_UART_BASE	IOMEM(0xFA71E000)
#define MSM_DEBUG_UART_PHYS	0xF991E000
#endif

#endif
