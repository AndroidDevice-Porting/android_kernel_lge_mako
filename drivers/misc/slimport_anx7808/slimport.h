/*
 * Copyright(c) 2012, LG Electronics Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __SLIMPORT_H
#define __SLIMPORT_H


#define SSC_EN
//#define SSC_1
#define HDCP_EN
//#define EYE_TEST
//#define EDID_DEBUG_PRINT

#define AUX_ERR  1
#define AUX_OK   0

extern unchar  sp_tx_hw_lt_done;
extern unchar  sp_tx_hw_lt_enable;
extern unchar	sp_tx_link_config_done ;
extern enum SP_TX_System_State sp_tx_system_state;
extern unchar sp_tx_rx_anx7730;
extern unchar sp_tx_pd_mode;
extern unchar sp_tx_rx_mydp;

extern unchar bEDID_break;

int sp_tx_read_reg(uint8_t slave_addr, uint8_t offset, uint8_t *buf);
int sp_tx_write_reg(uint8_t slave_addr, uint8_t offset, uint8_t value);
void sp_tx_hardware_poweron(void);
void sp_tx_hardware_powerdown(void);
int slimport_read_edid_block(int block, uint8_t *edid_buf);
#endif