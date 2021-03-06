/*
 * Arm SCP/MCP Software
 * Copyright (c) 2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef FMW_MEMORY_LD_S
#define FMW_MEMORY_LD_S

#include <scp_mmap.h>

#define FIRMWARE_MEM_MODE FWK_MEM_MODE_DUAL_REGION_RELOCATION

/* ROM */
#define FIRMWARE_MEM0_SIZE SCP_ROM_SIZE
#define FIRMWARE_MEM0_BASE SCP_ROM_BASE

/* RAM */
#define FIRMWARE_MEM1_SIZE (16 * 1024)
#define FIRMWARE_MEM1_BASE (SCP_RAM_BASE + SCP_RAM_SIZE - FIRMWARE_MEM1_SIZE)

#define FIRMWARE_STACK_SIZE (1 * 1024)

#endif /* FMW_MEMORY_LD_S */
