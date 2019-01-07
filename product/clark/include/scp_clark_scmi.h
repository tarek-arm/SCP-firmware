/*
 * Arm SCP/MCP Software
 * Copyright (c) 2017-2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Description:
 *     Definitions for SCMI and SMT module configurations.
 */

#ifndef SCP_CLARK_SCMI_H
#define SCP_CLARK_SCMI_H

/* SCMI agent identifiers */
enum scp_clark_scmi_agent_id {
    /* 0 is reserved for the platform */
    SCP_SCMI_AGENT_ID_OSPM = 1,
    SCP_SCMI_AGENT_ID_PSCI,
};

/* SCMI service indexes */
enum scp_clark_scmi_service_idx {
    SCP_CLARK_SCMI_SERVICE_IDX_PSCI,
    SCP_CLARK_SCMI_SERVICE_IDX_OSPM,
    SCP_CLARK_SCMI_SERVICE_IDX_COUNT,
};

#endif /* SCP_CLARK_SCMI_H */