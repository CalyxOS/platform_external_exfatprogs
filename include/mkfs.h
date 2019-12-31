/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 *  Copyright (C) 2019 Namjae Jeon <linkinjeon@gmail.com>
 */

#ifndef _MKFS_H

#define DEFAULT_CLUSTER_SIZE	(1024*1024)
#define DEFAULT_SECTOR_SIZE	(512)
#define MIN_NUM_SECTOR		(2048)
#define EXFAT_MAX_CLUSTER_SIZE	(32*1024*1024)

#define KB			(1024)
#define MB			(1024*1024)
#define GB			(1024UL*1024UL*1024UL)

struct exfat_mkfs_info {
	unsigned int total_clu_cnt;
	unsigned int used_clu_cnt;
	unsigned int fat_byte_off;
	unsigned int fat_byte_len;
	unsigned int clu_byte_off;
	unsigned int bitmap_byte_off;
	unsigned int bitmap_byte_len;
	unsigned int ut_byte_off;
	unsigned int ut_start_clu;
	unsigned int ut_clus_off;
	unsigned int ut_byte_len;
	unsigned int root_byte_off;
	unsigned int root_byte_len;
	unsigned int root_start_clu;
};

extern struct exfat_mkfs_info finfo;

int exfat_create_upcase_table(struct exfat_blk_dev *bd,
		struct exfat_user_input *ui);

#endif /* !_MKFS_H */