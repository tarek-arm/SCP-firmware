/*
 * Arm SCP/MCP Software
 * Copyright (c) 2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <fwk_module.h>
#include <mod_juno_rom.h>
#include <software_mmap.h>
#include <scp_mmap.h>

struct fwk_module_config config_juno_rom = {
    .data = &(struct mod_juno_rom_config) {
        .ap_context_base = AP_CONTEXT_BASE,
        .ap_context_size = AP_CONTEXT_SIZE,
        .ramfw_base = SCP_RAM_BASE,
    },
};
