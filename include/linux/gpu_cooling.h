/*
 *  linux/include/linux/gpu_cooling.h
 *
 *  Copyright (C) 2012	Samsung Electronics Co., Ltd(http://www.samsung.com)
 *  Copyright (C) 2012  Amit Daniel <amit.kachhap@linaro.org>
 *
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#ifndef __gpu_COOLING_H__
#define __gpu_COOLING_H__

#include <linux/thermal.h>
#include <linux/cpumask.h>

#ifdef CONFIG_GPU_THERMAL

/**
 * gpufreq_cooling_register - function to create gpufreq cooling device.
 * @clip_gpus: gpumask of gpus where the frequency constraints will happen
 */
 /**
 * struct gpufreq_cooling_device - data for cooling device with gpufreq
 * @id: unique integer value corresponding to each gpufreq_cooling_device
 *	registered.
 * @cool_dev: thermal_cooling_device pointer to keep track of the
 *	registered cooling device.
 * @gpufreq_state: integer value representing the current state of gpufreq
 *	cooling	devices.
 * @gpufreq_val: integer value representing the absolute value of the clipped
 *	frequency.
 * @allowed_gpus: all the gpus involved for this gpufreq_cooling_device.
 *
 * This structure is required for keeping information of each
 * gpufreq_cooling_device registered. In order to prevent corruption of this a
 * mutex lock cooling_gpufreq_lock is used.
 */
struct gpufreq_cooling_device {
	int id;
	struct thermal_cooling_device *cool_dev;
	unsigned int gpufreq_state;
	unsigned int gpufreq_val;
	int (*get_gpu_freq_level)(int freq);
	unsigned int (*get_gpu_max_level)(void);
	unsigned int (*get_gpu_current_max_level)(void);
	void (*set_gpu_freq_idx)(unsigned int idx);
};
int gpufreq_cooling_register(struct gpufreq_cooling_device *gpufreq_dev);
struct gpufreq_cooling_device *gpufreq_cooling_alloc(void);

/**
 * gpufreq_cooling_unregister - function to remove gpufreq cooling device.
 * @cdev: thermal cooling device pointer.
 */
void gpufreq_cooling_unregister(struct thermal_cooling_device *cdev);
int register_gpu_freq_info(unsigned (*fun)(void));

unsigned long gpufreq_cooling_get_level(unsigned int gpu, unsigned int freq);
#else /* !CONFIG_GPU_THERMAL */
struct gpufreq_cooling_device *gpufreq_cooling_alloc(void)
{
	return NULL;
}

int gpufreq_cooling_register(struct gpufreq_cooling_device *gpufreq_dev)
{
	return NULL;
}
static inline
void gpufreq_cooling_unregister(struct thermal_cooling_device *cdev)
{
	return;
}
static inline
unsigned long gpufreq_cooling_get_level(unsigned int gpu, unsigned int freq)
{
	return THERMAL_CSTATE_INVALID;
}
static inline int register_gpu_freq_info(unsigned (*fun)(void))
{
	return 0;
}
#endif	/* CONFIG_GPU_THERMAL */

#endif /* __GPU_COOLING_H__ */
