/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * drivers/amlogic/media/video_processor/ppmgr/ppmgr_dev.h
 *
 * Copyright (C) 2017 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 */

#ifndef PPMGR_DEV_INCLUDE_H
#define PPMGR_DEV_INCLUDE_H
#include <linux/amlogic/media/vfm/vframe.h>
#include <linux/semaphore.h>
struct ppmgr_device_t {
	struct class *cla;
	struct device *dev;
	char name[20];
	unsigned int open_count;
	int major;
	unsigned int dbg_enable;
	unsigned int buffer_start;
	unsigned int buffer_size;

	unsigned int angle;
	unsigned int orientation;
	unsigned int videoangle;

	int bypass;
	int disp_width;
	int disp_height;
	int canvas_width;
	int canvas_height;

	const struct vinfo_s *vinfo;
	int left;
	int top;
	int width;
	int height;
	int receiver;
	int receiver_format;
	int display_mode;
	int mirror_flag;
	int started;
	int global_angle;
	int use_reserved;
	unsigned int tb_detect;
	unsigned int tb_detect_period;
	unsigned int tb_detect_buf_len;
	unsigned int tb_detect_init_mute;
	struct page *cma_pages;
	struct io_mapping *mapping;
	void  __iomem *vir_addr;
	struct platform_device *pdev;
	unsigned int ppmgr_debug;
	unsigned int debug_first_frame;
	unsigned int debug_ppmgr_flag;
	unsigned int get_count;
	unsigned int put_count;
	unsigned int get_dec_count;
	unsigned int put_dec_count;
	unsigned int peek_dec;
	char dump_path[32];
	struct semaphore ppmgr_sem;
	struct semaphore tb_sem;
	unsigned int decontour_addr;
	int dump_grid;
	int bypass_decontour;
	int debug_decontour;
	int i_do_decontour;
	bool reg_dct_irq_success;
	bool is_used;
};

struct ppmgr_dev_reg_s {
	unsigned long mem_start;
	unsigned long mem_end;
	struct device *cma_dev;
	struct dec_sysinfo *sys_info;
};

struct ppframe_s {
	struct vframe_s frame;
	int index;
	int angle;
	struct vframe_s *dec_frame;
};

#define to_ppframe(vf)	\
	container_of(vf, struct ppframe_s, frame)

extern struct ppmgr_device_t ppmgr_device;

int vf_ppmgr_get_states(struct vframe_states *states);
int get_property_change(void);
void set_property_change(int flag);
enum platform_type_t get_platform_type(void);

#endif /* PPMGR_DEV_INCLUDE_H. */
