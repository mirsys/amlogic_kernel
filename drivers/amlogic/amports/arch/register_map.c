/*
 * drivers/amlogic/amports/arch/register_map.c
 *
 * Copyright (C) 2015 Amlogic, Inc. All rights reserved.
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

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/printk.h>
#include <linux/string.h>
#include <linux/of_address.h>
#include <linux/io.h>
#include <linux/regmap.h>
#include <linux/device.h>
#include <linux/of_platform.h>
#include <linux/platform_device.h>
#include "register_map.h"
#include "log.h"

#ifndef CONFIG_ARM64
#include <asm/opcodes-sec.h>
#endif

static const struct of_device_id codec_io_dt_match[] = {
	{ .compatible = "amlogic, codec_io" },
	{ /* sentinel */ },
};

enum{
	CODECIO_CBUS_BASE = 0,
	CODECIO_DOSBUS_BASE,
	CODECIO_HIUBUS_BASE,
	CODECIO_AOBUS_BASE,
	CODECIO_VCBUS_BASE,
	CODECIO_DMCBUS_BASE,
	CODECIO_BUS_MAX,
};

static void __iomem *codecio_reg_map[CODECIO_BUS_MAX];

static int codecio_reg_read(u32 bus_type, unsigned int reg, unsigned int *val)
{
	if ((bus_type >= CODECIO_CBUS_BASE) && (bus_type < CODECIO_BUS_MAX)) {
		*val = readl((codecio_reg_map[bus_type]+reg));
		return 0;
	} else
		return -1;
}


static int codecio_reg_write(u32 bus_type, unsigned int reg, unsigned int val)
{
	if ((bus_type >= CODECIO_CBUS_BASE) && (bus_type < CODECIO_BUS_MAX)) {
		writel(val, (codecio_reg_map[bus_type]+reg));
		return 0;
	} else
		return -1;
}

int codecio_read_cbus(unsigned int reg)
{
	int ret, val;
	ret = codecio_reg_read(CODECIO_CBUS_BASE, reg<<2, &val);
	if (ret) {
		pr_err("read cbus reg %x error %d\n", reg, ret);
		return -1;
	} else
		return val;
}

void codecio_write_cbus(unsigned int reg, unsigned int val)
{
	int ret;
	ret = codecio_reg_write(CODECIO_CBUS_BASE, reg<<2, val);
	if (ret) {
		pr_err("write cbus reg %x error %d\n", reg, ret);
		return;
	} else
		return;
}

int codecio_read_dosbus(unsigned int reg)
{
	int ret, val;
	ret = codecio_reg_read(CODECIO_DOSBUS_BASE, reg<<2, &val);
	if (ret) {
		pr_err("read cbus reg %x error %d\n", reg, ret);
		return -1;
	} else
		return val;
}

void codecio_write_dosbus(unsigned int reg, unsigned int val)
{
	int ret;
	ret = codecio_reg_write(CODECIO_DOSBUS_BASE, reg<<2, val);
	if (ret) {
		pr_err("write cbus reg %x error %d\n", reg, ret);
		return;
	} else
		return;
}

int codecio_read_hiubus(unsigned int reg)
{
	int ret, val;
	ret = codecio_reg_read(CODECIO_HIUBUS_BASE, reg<<2, &val);
	if (ret) {
		pr_err("read cbus reg %x error %d\n", reg, ret);
		return -1;
	} else
		return val;
}

void codecio_write_hiubus(unsigned int reg, unsigned int val)
{
	int ret;
	ret = codecio_reg_write(CODECIO_HIUBUS_BASE, reg<<2, val);
	if (ret) {
		pr_err("write cbus reg %x error %d\n", reg, ret);
		return;
	} else
		return;
}
int codecio_read_aobus(unsigned int reg)
{
	int ret, val;
	/*
	reg don't left thift for AOBUS
	*/
	ret = codecio_reg_read(CODECIO_AOBUS_BASE, reg, &val);
	if (ret) {
		pr_err("read cbus reg %x error %d\n", reg, ret);
		return -1;
	} else
		return val;
}

void codecio_write_aobus(unsigned int reg, unsigned int val)
{
	int ret;
	ret = codecio_reg_write(CODECIO_AOBUS_BASE, reg, val);
	if (ret) {
		pr_err("write cbus reg %x error %d\n", reg, ret);
		return;
	} else
		return;
}

int codecio_read_vcbus(unsigned int reg)
{
	int ret, val;
	ret = codecio_reg_read(CODECIO_VCBUS_BASE, reg<<2, &val);
	if (ret) {
		pr_err("read vcbus reg %x error %d\n", reg, ret);
		return -1;
	} else
		return val;
}

void codecio_write_vcbus(unsigned int reg, unsigned int val)
{
	int ret;
	ret = codecio_reg_write(CODECIO_VCBUS_BASE, reg<<2, val);
	if (ret) {
		pr_err("write vcbus reg %x error %d\n", reg, ret);
		return;
	} else
		return;
}

int codecio_read_dmcbus(unsigned int reg)
{
	int ret, val;
	ret = codecio_reg_read(CODECIO_DMCBUS_BASE, reg<<2, &val);
	if (ret) {
		pr_err("read cbus reg %x error %d\n", reg, ret);
		return -1;
	} else
		return val;
}

void codecio_write_dmcbus(unsigned int reg, unsigned int val)
{
	int ret;
	ret = codecio_reg_write(CODECIO_DMCBUS_BASE, reg<<2, val);
	if (ret) {
		pr_err("write dmcbus reg %x error %d\n", reg, ret);
		return;
	} else
		return;
}

static int codec_io_probe(struct platform_device *pdev)
{
	int i = 0;
/* void __iomem *base; */
	struct resource res;
	struct device_node *np, *child;
	np = pdev->dev.of_node;

	for_each_child_of_node(np, child) {
			if (of_address_to_resource(child, 0, &res))
				return -1;
#if 0
			base = ioremap(res.start, resource_size(&res));
			meson_regmap_config.max_register =
				resource_size(&res) - 4;
			meson_regmap_config.name = child->name;
			meson_reg_map[i] =
				devm_regmap_init_mmio(&pdev->dev,
					base, &meson_regmap_config);

			if (IS_ERR(meson_reg_map[i])) {
				pr_err("iomap index %d registers not found\n",
					   i);
				return PTR_ERR(meson_reg_map[i]);
			}
#endif
			if (res.start != 0) {
				codecio_reg_map[i] =
					ioremap(res.start, resource_size(&res));
				pr_info("codec map io source 0x%p,size=%d to 0x%p\n",
					(void *)res.start,
					(int)resource_size(&res),
					codecio_reg_map[i]);
			} else{
				codecio_reg_map[i] = 0;
				pr_info("ignore io source start %p,size=%d\n",
				(void *)res.start, (int)resource_size(&res));
			}
			i++;
	}
	/*pr_info("amlogic codec_io probe done\n");*/
	return 0;
}



static  struct platform_driver codec_io_platform_driver = {
	.probe		= codec_io_probe,
	.driver		= {
		.owner		= THIS_MODULE,
		.name		= "codec_io",
		.of_match_table	= codec_io_dt_match,
	},
};

int __init codec_io_init(void)
{

	int ret;

	ret = platform_driver_register(&codec_io_platform_driver);

	return ret;
}
core_initcall(codec_io_init);



