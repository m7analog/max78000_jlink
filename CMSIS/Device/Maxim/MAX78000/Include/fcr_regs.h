/**
 * @file    fcr_regs.h
 * @brief   Registers, Bit Masks and Bit Positions for the FCR Peripheral Module.
 */

/* ****************************************************************************
 * Copyright (C) Maxim Integrated Products, Inc., All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of Maxim Integrated
 * Products, Inc. shall not be used except as stated in the Maxim Integrated
 * Products, Inc. Branding Policy.
 *
 * The mere transfer of this software does not imply any licenses
 * of trade secrets, proprietary technology, copyrights, patents,
 * trademarks, maskwork rights, or any other form of intellectual
 * property whatsoever. Maxim Integrated Products, Inc. retains all
 * ownership rights.
 *
 *
 *************************************************************************** */

#ifndef _FCR_REGS_H_
#define _FCR_REGS_H_

/* **** Includes **** */
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif
 
#if defined (__ICCARM__)
  #pragma system_include
#endif
 
#if defined (__CC_ARM)
  #pragma anon_unions
#endif
/// @cond
/*
    If types are not defined elsewhere (CMSIS) define them here
*/
#ifndef __IO
#define __IO volatile
#endif
#ifndef __I
#define __I  volatile const
#endif
#ifndef __O
#define __O  volatile
#endif
#ifndef __R
#define __R  volatile const
#endif
/// @endcond

/* **** Definitions **** */

/**
 * @ingroup     fcr
 * @defgroup    fcr_registers FCR_Registers
 * @brief       Registers, Bit Masks and Bit Positions for the FCR Peripheral Module.
 * @details Function Control Register.
 */

/**
 * @ingroup fcr_registers
 * Structure type to access the FCR Registers.
 */
typedef struct {
    __IO uint32_t reg0;                 /**< <tt>\b 0x00:</tt> FCR REG0 Register */
    __IO uint32_t reg1;                 /**< <tt>\b 0x04:</tt> FCR REG1 Register */
    __IO uint32_t reg2;                 /**< <tt>\b 0x08:</tt> FCR REG2 Register */
    __IO uint32_t reg3;                 /**< <tt>\b 0x0C:</tt> FCR REG3 Register */
    __IO uint32_t urvbootaddr;          /**< <tt>\b 0x10:</tt> FCR URVBOOTADDR Register */
    __IO uint32_t urvctrl;              /**< <tt>\b 0x14:</tt> FCR URVCTRL Register */
} mxc_fcr_regs_t;

/* Register offsets for module FCR */
/**
 * @ingroup    fcr_registers
 * @defgroup   FCR_Register_Offsets Register Offsets
 * @brief      FCR Peripheral Register Offsets from the FCR Base Peripheral Address. 
 * @{
 */
 #define MXC_R_FCR_REG0                     ((uint32_t)0x00000000UL) /**< Offset from FCR Base Address: <tt> 0x0000</tt> */ 
 #define MXC_R_FCR_REG1                     ((uint32_t)0x00000004UL) /**< Offset from FCR Base Address: <tt> 0x0004</tt> */ 
 #define MXC_R_FCR_REG2                     ((uint32_t)0x00000008UL) /**< Offset from FCR Base Address: <tt> 0x0008</tt> */ 
 #define MXC_R_FCR_REG3                     ((uint32_t)0x0000000CUL) /**< Offset from FCR Base Address: <tt> 0x000C</tt> */ 
 #define MXC_R_FCR_URVBOOTADDR              ((uint32_t)0x00000010UL) /**< Offset from FCR Base Address: <tt> 0x0010</tt> */ 
 #define MXC_R_FCR_URVCTRL                  ((uint32_t)0x00000014UL) /**< Offset from FCR Base Address: <tt> 0x0014</tt> */ 
/**@} end of group fcr_registers */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_REG0 FCR_REG0
 * @brief    Register 0.
 * @{
 */
 #define MXC_F_FCR_REG0_I2C0DGEN0_POS                   20 /**< REG0_I2C0DGEN0 Position */
 #define MXC_F_FCR_REG0_I2C0DGEN0                       ((uint32_t)(0x1UL << MXC_F_FCR_REG0_I2C0DGEN0_POS)) /**< REG0_I2C0DGEN0 Mask */

 #define MXC_F_FCR_REG0_I2C0DGEN1_POS                   21 /**< REG0_I2C0DGEN1 Position */
 #define MXC_F_FCR_REG0_I2C0DGEN1                       ((uint32_t)(0x1UL << MXC_F_FCR_REG0_I2C0DGEN1_POS)) /**< REG0_I2C0DGEN1 Mask */

 #define MXC_F_FCR_REG0_I2C1DGEN0_POS                   22 /**< REG0_I2C1DGEN0 Position */
 #define MXC_F_FCR_REG0_I2C1DGEN0                       ((uint32_t)(0x1UL << MXC_F_FCR_REG0_I2C1DGEN0_POS)) /**< REG0_I2C1DGEN0 Mask */

 #define MXC_F_FCR_REG0_I2C1DGEN1_POS                   23 /**< REG0_I2C1DGEN1 Position */
 #define MXC_F_FCR_REG0_I2C1DGEN1                       ((uint32_t)(0x1UL << MXC_F_FCR_REG0_I2C1DGEN1_POS)) /**< REG0_I2C1DGEN1 Mask */

 #define MXC_F_FCR_REG0_I2C2DGEN0_POS                   24 /**< REG0_I2C2DGEN0 Position */
 #define MXC_F_FCR_REG0_I2C2DGEN0                       ((uint32_t)(0x1UL << MXC_F_FCR_REG0_I2C2DGEN0_POS)) /**< REG0_I2C2DGEN0 Mask */

 #define MXC_F_FCR_REG0_I2C2DGEN1_POS                   25 /**< REG0_I2C2DGEN1 Position */
 #define MXC_F_FCR_REG0_I2C2DGEN1                       ((uint32_t)(0x1UL << MXC_F_FCR_REG0_I2C2DGEN1_POS)) /**< REG0_I2C2DGEN1 Mask */

/**@} end of group FCR_REG0_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_REG1 FCR_REG1
 * @brief    Register 1.
 * @{
 */
 #define MXC_F_FCR_REG1_ACEN_POS                        0 /**< REG1_ACEN Position */
 #define MXC_F_FCR_REG1_ACEN                            ((uint32_t)(0x1UL << MXC_F_FCR_REG1_ACEN_POS)) /**< REG1_ACEN Mask */

 #define MXC_F_FCR_REG1_ACRUN_POS                       1 /**< REG1_ACRUN Position */
 #define MXC_F_FCR_REG1_ACRUN                           ((uint32_t)(0x1UL << MXC_F_FCR_REG1_ACRUN_POS)) /**< REG1_ACRUN Mask */

 #define MXC_F_FCR_REG1_LDTRM_POS                       2 /**< REG1_LDTRM Position */
 #define MXC_F_FCR_REG1_LDTRM                           ((uint32_t)(0x1UL << MXC_F_FCR_REG1_LDTRM_POS)) /**< REG1_LDTRM Mask */

 #define MXC_F_FCR_REG1_GAININV_POS                     3 /**< REG1_GAININV Position */
 #define MXC_F_FCR_REG1_GAININV                         ((uint32_t)(0x1UL << MXC_F_FCR_REG1_GAININV_POS)) /**< REG1_GAININV Mask */

 #define MXC_F_FCR_REG1_ATOMIC_POS                      4 /**< REG1_ATOMIC Position */
 #define MXC_F_FCR_REG1_ATOMIC                          ((uint32_t)(0x1UL << MXC_F_FCR_REG1_ATOMIC_POS)) /**< REG1_ATOMIC Mask */

 #define MXC_F_FCR_REG1_MU_POS                          8 /**< REG1_MU Position */
 #define MXC_F_FCR_REG1_MU                              ((uint32_t)(0xFFFUL << MXC_F_FCR_REG1_MU_POS)) /**< REG1_MU Mask */

 #define MXC_F_FCR_REG1_HIRC96MACTMROUT_POS             23 /**< REG1_HIRC96MACTMROUT Position */
 #define MXC_F_FCR_REG1_HIRC96MACTMROUT                 ((uint32_t)(0x1FFUL << MXC_F_FCR_REG1_HIRC96MACTMROUT_POS)) /**< REG1_HIRC96MACTMROUT Mask */

/**@} end of group FCR_REG1_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_REG2 FCR_REG2
 * @brief    Register 2.
 * @{
 */
 #define MXC_F_FCR_REG2_INITTRM_POS                     0 /**< REG2_INITTRM Position */
 #define MXC_F_FCR_REG2_INITTRM                         ((uint32_t)(0x1FFUL << MXC_F_FCR_REG2_INITTRM_POS)) /**< REG2_INITTRM Mask */

/**@} end of group FCR_REG2_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_REG3 FCR_REG3
 * @brief    Register 3.
 * @{
 */
 #define MXC_F_FCR_REG3_DONECNT_POS                     0 /**< REG3_DONECNT Position */
 #define MXC_F_FCR_REG3_DONECNT                         ((uint32_t)(0xFFUL << MXC_F_FCR_REG3_DONECNT_POS)) /**< REG3_DONECNT Mask */

 #define MXC_F_FCR_REG3_ACDIV_POS                       8 /**< REG3_ACDIV Position */
 #define MXC_F_FCR_REG3_ACDIV                           ((uint32_t)(0x1FFFUL << MXC_F_FCR_REG3_ACDIV_POS)) /**< REG3_ACDIV Mask */

/**@} end of group FCR_REG3_Register */

/**
 * @ingroup  fcr_registers
 * @defgroup FCR_URVCTRL FCR_URVCTRL
 * @brief    RISC-V Control Register.
 * @{
 */
 #define MXC_F_FCR_URVCTRL_MEMSEL_POS                   0 /**< URVCTRL_MEMSEL Position */
 #define MXC_F_FCR_URVCTRL_MEMSEL                       ((uint32_t)(0x1UL << MXC_F_FCR_URVCTRL_MEMSEL_POS)) /**< URVCTRL_MEMSEL Mask */

 #define MXC_F_FCR_URVCTRL_IFLUSHEN_POS                 1 /**< URVCTRL_IFLUSHEN Position */
 #define MXC_F_FCR_URVCTRL_IFLUSHEN                     ((uint32_t)(0x1UL << MXC_F_FCR_URVCTRL_IFLUSHEN_POS)) /**< URVCTRL_IFLUSHEN Mask */

/**@} end of group FCR_URVCTRL_Register */

#ifdef __cplusplus
}
#endif

#endif /* _FCR_REGS_H_ */
