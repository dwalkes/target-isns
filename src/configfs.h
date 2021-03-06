/*
 * (C) Copyright 2013
 * Christophe Vu-Brugier <cvubrugier@yahoo.fr>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __CONFIGFS_H__
#define __CONFIGFS_H__

#include <linux/limits.h>
#include <stdbool.h>
#include <sys/inotify.h>
#include <ccan/list/list.h>

struct target {
	struct list_node list;
	char name[256];
	struct list_head tpgs;
	bool updated;
	int watch_fd;
};

bool configfs_iscsi_path_exists(void);

int configfs_init(void);

void configfs_cleanup(void);

void configfs_handle_events(void);

#endif
