/*
 * process.c
 *
 *  Created on: Feb 3, 2024
 *      Author: timot
 */

#include "process.h"
#include "shifter.h"
#include "actuator_config.h"

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <errno.h>

struct process_ctx {
	uint8_t is_init_done;
};

struct process_ctx proc_ctx;

static int process_shifter(void) {
	uint8_t clutch_sttus = 1;
	/* todo */
	return shifter_process(clutch_sttus);
}

static int process_ffb_steering(void) {
	/* todo */
	return 0;
}

static int process_pedals(void) {
	/* todo */
	return 0;
}


int main_process_init(void)
{
	int ret = 0;

	memset(&proc_ctx, 0, sizeof(proc_ctx));

	ret = shifter_init(&shifter_conf);

	proc_ctx.is_init_done = true;

	return ret;
}

int main_process_job(void) {
	int ret = 0;

	if (!proc_ctx.is_init_done) {
		ret = EACCES;
		goto out;
	}

	ret = process_pedals();
	if (ret != 0) {
		goto out;
	}

	ret = process_shifter();
	if (ret != 0) {
		goto out;
	}

	ret = process_ffb_steering();
	if (ret != 0) {
		goto out;
	}

out:
	return ret;
}

