/*
 * Copyright 2016, Imagination Technologies Limited and/or its
 *                 affiliated group companies.
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup        cpu_mips32r2_common Imagination Technologies MIPS32R2 Common
 * @ingroup         cpu
 * @brief           Imagination Technologies MIPS32R2 Common implementation
 * @{
 *
 * @file
 * @brief       API for supporting External Interrupt Controllers (EIC mode)
 *
 * @author      Neil Jones <neil.jones@imgtec.com>
 */

#ifndef EIC_H
#define EIC_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   External ISR callback
 */
typedef void (*external_isr_ptr_t)(void);

/**
 * @brief   Set External ISR callback
 */
void set_external_isr_cb(int vecNum, external_isr_ptr_t cbFunc);

void eic_configure_priority(int vecNum, int priority, int subpriority);

void eic_enable(int vecNum);

void eic_disable(int vecNum);

void eic_clear_flag(int VecNum);

#ifdef __cplusplus
}
#endif

#endif /* EIC_H */
/** @} */