/*
 * drivers/amlogic/amports/arch/m8_m8m2/h264/h264mmc_linux.h
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

static const u32 MicroCode[] __initconst = {
	0x06bfff40, 0x06032400, 0x00400000, 0x0c780000, 0x00000000,
	0x09027207, 0x0a6140c8, 0x00000000, 0x0c00d900, 0x00000000,
	0x0c780540, 0x0a614148, 0x00000000, 0x0c003900, 0x00000000,
	0x0c780400, 0x0a614188, 0x00000000, 0x0c006cc0, 0x00000000,
	0x0c7802c0, 0x0a6141c8, 0x00000000, 0x0c007a40, 0x00000000,
	0x0c780180, 0x0a628208, 0x00000000, 0x0c000c40, 0x00000000,
	0x00000000, 0x08031e00, 0x0cc00000, 0x00400000, 0x0c7ff8c0,
	0x06431e07, 0x0a62c288, 0x06431f20, 0x06433f21, 0x0e000860,
	0x00000000, 0x00000000, 0x0f000800, 0x06031f20, 0x0f010840,
	0x0c7ffc80, 0x06033f21, 0x078077c5, 0x04002c4e, 0x07400c45,
	0x07807800, 0x04003c4e, 0x07400c40, 0x0cc00000, 0x09610140,
	0x07807846, 0x04004c4e, 0x07400c46, 0x07807880, 0x04005c4e,
	0x07400c40, 0x0cc00000, 0x09610180, 0x0680400f, 0x0780704e,
	0x040013cf, 0x06800000, 0x07c07080, 0x07c071c0, 0x07c07200,
	0x070003c1, 0x0940b040, 0x074003c1, 0x0d07ff4e, 0x040083cf,
	0x0cc00000, 0x00000000, 0x0649c900, 0x05808000, 0x05408000,
	0x0609c900, 0x078031d0, 0x0680400f, 0x0780718e, 0x0540338e,
	0x0200e38f, 0x04001c4e, 0x07000c4d, 0x078072c0, 0x090a1040,
	0x090c1c00, 0x02c0cc01, 0x0780730b, 0x0aa1000b, 0x0aa7404b,
	0x0c780b80, 0x00000000, 0x0980d00d, 0x0c07f340, 0x0944134c,
	0x0a22008d, 0x09481350, 0x04004c4e, 0x07000c46, 0x04005c4e,
	0x07000c40, 0x0c780d40, 0x09610180, 0x0c07f2c0, 0x0980d28d,
	0x07000380, 0x09c00300, 0x07400380, 0x07807200, 0x02000300,
	0x07c07200, 0x0649cf00, 0x0be11000, 0x06800040, 0x078071c0,
	0x04001000, 0x0c780980, 0x07c071c0, 0x0980d04d, 0x0c07eec0,
	0x0946134c, 0x0a22004d, 0x094a1350, 0x04002c4e, 0x07000c45,
	0x04003c4e, 0x07000c40, 0x0c7806c0, 0x09610140, 0x0c07ea40,
	0x0980d28d, 0x07000380, 0x09800300, 0x07400380, 0x0c7ff980,
	0x00000000, 0x0980d00d, 0x0980d04d, 0x0944134c, 0x0946134c,
	0x0c07e780, 0x09481350, 0x0c07e900, 0x094a1350, 0x0980d28d,
	0x07807200, 0x02000300, 0x07c07200, 0x0649cf00, 0x0be11000,
	0x06800040, 0x078071c0, 0x04001000, 0x07c071c0, 0x04006c4e,
	0x07807340, 0x07400c40, 0x04007c4e, 0x07400c51, 0x094c234b,
	0x05801010, 0x05409000, 0x02c0d00d, 0x07801e40, 0x07000381,
	0x09501040, 0x0400100e, 0x07000000, 0x0be100c0, 0x00000000,
	0x07802080, 0x09523040, 0x07400381, 0x07802fc0, 0x09584340,
	0x0900200d, 0x0a6100c0, 0x0be0c30d, 0x06800000, 0x09402340,
	0x09c0d20d, 0x04001c4e, 0x0ac03185, 0x0c780140, 0x07400c4d,
	0x0980d20d, 0x0c780080, 0x07400c4d, 0x0649cf00, 0x0a2440c0,
	0x0900200d, 0x0680000b, 0x0940634b, 0x07400c4d, 0x0c002080,
	0x0780718d, 0x040012cb, 0x0aa1c00b, 0x06804080, 0x0609c000,
	0x0609ce00, 0x0649cf00, 0x0be08080, 0x0c780000, 0x06800040,
	0x07c01d80, 0x0cc00000, 0x00000000, 0x0680400f, 0x0780704e,
	0x078020c0, 0x06800041, 0x0340d001, 0x0780734c, 0x06803fcb,
	0x06800008, 0x05403c48, 0x02031c4f, 0x04001c71, 0x07000c70,
	0x0a230330, 0x0be2cc30, 0x04005c71, 0x07000c41, 0x0b803301,
	0x00000000, 0x02401341, 0x0aa0ffcb, 0x0b80404a, 0x00000000,
	0x04000281, 0x040002c8, 0x04001208, 0x0b8ef388, 0x0cc00000,
	0x00000000, 0x0780720d, 0x0780390c, 0x0b82230d, 0x0c07f840,
	0x00000000, 0x0400024a, 0x0aa7bfcb, 0x0680400f, 0x05403c4b,
	0x02031c4f, 0x04001c71, 0x07000c70, 0x06800000, 0x09404c00,
	0x07400c70, 0x07807200, 0x04401000, 0x07c07200, 0x04401071,
	0x07000040, 0x09005000, 0x06800041, 0x03401001, 0x07807080,
	0x03000040, 0x07c07080, 0x06810000, 0x0bc09030, 0x078071c0,
	0x04401000, 0x07c071c0, 0x0649cf00, 0x0be11000, 0x0be0c080,
	0x0c07f080, 0x0a8e3289, 0x0cc00000, 0x00000000, 0x0680400f,
	0x0780704e, 0x06803fcd, 0x0680000c, 0x06800008, 0x05403c48,
	0x02031c4f, 0x04001c71, 0x07000c70, 0x06810000, 0x0a00e030,
	0x04001c71, 0x09101030, 0x02031031, 0x02031031, 0x07000c41,
	0x04001c71, 0x07000c40, 0x09610040, 0x0aa0ffcd, 0x0b80404c,
	0x00000000, 0x04000301, 0x04000348, 0x04001208, 0x0b8ec388,
	0x0cc00000, 0x00000000, 0x0649c701, 0x0aa24001, 0x04401041,
	0x0809c700, 0x05403041, 0x020013c1, 0x04001041, 0x07000070,
	0x09c302f0, 0x07400070, 0x0649c801, 0x0aa24001, 0x04401041,
	0x0809c800, 0x05403041, 0x020013c1, 0x04001041, 0x07000070,
	0x09c302f0, 0x07400070, 0x0cc00000, 0x00000000, 0x0680400f,
	0x05403c4d, 0x02031c4f, 0x04001c71, 0x07000c40, 0x06800081,
	0x09542001, 0x07400c40, 0x04401c31, 0x07000c04, 0x0649cf30,
	0x0a20c830, 0x05808044, 0x0be20041, 0x07801c01, 0x0aa10001,
	0x0a216004, 0x06800001, 0x07c01c01, 0x05809040, 0x0a218041,
	0x06800001, 0x09523001, 0x07400c40, 0x0c781700, 0x044012cb,
	0x0c07f400, 0x00000000, 0x0649c001, 0x0bef7fc1, 0x09101044,
	0x0a60c00b, 0x05409041, 0x0809d100, 0x09123c04, 0x0540210b,
	0x03430130, 0x0649d104, 0x02c04c04, 0x0609d104, 0x0940504d,
	0x09184c00, 0x0aa583f0, 0x068001c4, 0x0aa50030, 0x06800004,
	0x0b648170, 0x04404130, 0x0649cf04, 0x0be24084, 0x0b6380f0,
	0x04002130, 0x0aa30070, 0x06800144, 0x0b6280b0, 0x06800184,
	0x0c780200, 0x068001c4, 0x04401131, 0x07000104, 0x0580c104,
	0x0a20c044, 0x06800144, 0x06800184, 0x094a3044, 0x07802130,
	0x0aa0c030, 0x00000000, 0x09801201, 0x090c2c00, 0x0a60c0b0,
	0x00000000, 0x09801201, 0x04401c71, 0x07000c70, 0x090a2c30,
	0x09542070, 0x078017f0, 0x09583070, 0x06803230, 0x02030370,
	0x07000c30, 0x09610070, 0x06800030, 0x02030370, 0x07000c04,
	0x0aa1c00b, 0x0aa2404b, 0x0aa3408b, 0x0aa3c0cb, 0x0aa4c10b,
	0x0aa5414b, 0x00000000, 0x0609ca04, 0x0c780580, 0x0609c101,
	0x0649ca30, 0x09610c04, 0x0609ca30, 0x0c780440, 0x0609c201,
	0x0609cb04, 0x0c780380, 0x0609c301, 0x0649cb30, 0x09610c04,
	0x0609cb30, 0x0c780240, 0x0609c401, 0x0609cc04, 0x0c780180,
	0x0609c501, 0x0649cc30, 0x09610c04, 0x0609cc30, 0x0609c601,
	0x0649cf01, 0x0be09001, 0x0be100c0, 0x078071c0, 0x04401000,
	0x07c071c0, 0x0cc00000, 0x00000000, 0x0680000b, 0x07803d0d,
	0x0a21880d, 0x0780318c, 0x07801b8d, 0x0b00334c, 0x00000000,
	0x07801b8c, 0x078071cd, 0x0649cf00, 0x0be0d000, 0x0b01e30d,
	0x0c7800c0, 0x0680004c, 0x0b81430d, 0x00000000, 0x0c07d080,
	0x00000000, 0x0a61bfcd, 0x00000000, 0x0c079980, 0x00000000,
	0x0c780300, 0x00000000, 0x07800b00, 0x0400004c, 0x09401040,
	0x07c00b01, 0x05810041, 0x0c07d9c0, 0x07c00ac1, 0x040012cb,
	0x0aa0818b, 0x0c7ff800, 0x0aa1400b, 0x06800080, 0x0950800b,
	0x0609c000, 0x0609ce00, 0x0cc00000, 0x00000000, 0x07800b0c,
	0x0bee004c, 0x07802fcc, 0x0aa0c00c, 0x0780210c, 0x0a6d004c,
	0x078071cc, 0x0bac808c, 0x0c07c840, 0x00000000, 0x0aabffcd,
	0x07800b00, 0x07800af0, 0x09610030, 0x04002000, 0x0b0e000c,
	0x0c7ffa40, 0x00000000, 0x0680000b, 0x078071cd, 0x0aa4800d,
	0x00000000, 0x0c07c4c0, 0x00000000, 0x0a61bfcd, 0x00000000,
	0x0c078dc0, 0x00000000, 0x0c780280, 0x00000000, 0x07807180,
	0x0a807340, 0x00000000, 0x0c07ce80, 0x00000000, 0x040012cb,
	0x0aa0818b, 0x0c7ffb80, 0x0aa1c00b, 0x06800080, 0x0950800b,
	0x0609c000, 0x0609ce00, 0x0c7ffa00, 0x0680000b, 0x0cc00000,
	0x00000000, 0x0680400f, 0x0780704e, 0x06800008, 0x06800007,
	0x07807186, 0x078072c0, 0x0a225800, 0x07c07087, 0x05403c46,
	0x02031c4f, 0x07000c70, 0x09005c30, 0x06800041, 0x03401c01,
	0x07c07081, 0x05403c48, 0x02031c4f, 0x04001c71, 0x07000c70,
	0x0a23c0f0, 0x0a406188, 0x06800000, 0x09444c00, 0x07400c70,
	0x0c780280, 0x06800047, 0x06800000, 0x09406c00, 0x07400c70,
	0x06810000, 0x0bc04030, 0x078071c0, 0x04401000, 0x07c071c0,
	0x04001208, 0x0b8ec388, 0x0cc00000, 0x07c07207, 0x0680400f,
	0x0780704e, 0x06800008, 0x06800007, 0x07807186, 0x05403c48,
	0x02031c4f, 0x04001c71, 0x07000c70, 0x06810000, 0x0a007030,
	0x0a805188, 0x00000000, 0x09c302b0, 0x0c7800c0, 0x07400c70,
	0x06800047, 0x04001208, 0x0b8f3388, 0x0cc00000, 0x07c071c7,
	0x0400138e, 0x0780734d, 0x0240e38d, 0x07807300, 0x0b610080,
	0x00000000, 0x0200e34e, 0x0400138e, 0x06800008, 0x07807109,
	0x0680a00a, 0x0a403209, 0x0cc00000, 0x00000000, 0x05402108,
	0x0200410a, 0x04002c44, 0x07000c40, 0x04001c71, 0x07000c41,
	0x09610001, 0x0a42a380, 0x07000105, 0x06804031, 0x05403005,
	0x02006031, 0x04001186, 0x07000187, 0x04001c44, 0x07000c70,
	0x09002030, 0x0aa14040, 0x0aa18080, 0x06800000, 0x0c780180,
	0x094421c0, 0x0c780100, 0x09c07087, 0x0c780080, 0x09c070c7,
	0x0be4c307, 0x06800000, 0x094021c0, 0x07807200, 0x04401000,
	0x07c07200, 0x04401046, 0x07000040, 0x09005000, 0x06800041,
	0x03401001, 0x07807080, 0x03000040, 0x07c07080, 0x06810000,
	0x0bc04007, 0x078071c0, 0x04401000, 0x07c071c0, 0x0649cf00,
	0x0be14080, 0x07400187, 0x0be0d000, 0x04001208, 0x0b8ce248,
	0x0cc00000, 0x00000000, 0x07807108, 0x07807149, 0x0680a00a,
	0x0a403209, 0x0cc00000, 0x00000000, 0x05402108, 0x0200410a,
	0x04002c44, 0x07000c40, 0x04001c71, 0x07000c41, 0x09610001,
	0x0a42a380, 0x07000105, 0x06804031, 0x05403005, 0x02006031,
	0x04001186, 0x07000187, 0x04001c44, 0x07000c70, 0x09002030,
	0x0aa14040, 0x0aa1c080, 0x06800000, 0x0c780200, 0x094441c0,
	0x09c07087, 0x0c780140, 0x09c07107, 0x09c070c7, 0x0c780080,
	0x09c07147, 0x0be4c307, 0x06800000, 0x094021c0, 0x07807200,
	0x04401000, 0x07c07200, 0x04401046, 0x07000040, 0x09005000,
	0x06800041, 0x03401001, 0x07807080, 0x03000040, 0x07c07080,
	0x06810000, 0x0bc04007, 0x078071c0, 0x04401000, 0x07c071c0,
	0x0cc00000, 0x07400187, 0x04001208, 0x0b8ce248, 0x0cc00000,
	0x00000000, 0x0680000d, 0x07807300, 0x0b60c080, 0x00000000,
	0x0680004d, 0x07807108, 0x07807149, 0x0680a00a, 0x0a403209,
	0x0cc00000, 0x00000000, 0x05402108, 0x0200410a, 0x04002c44,
	0x07000c40, 0x04001c71, 0x07000c41, 0x09610001, 0x03800340,
	0x0a41c380, 0x07000105, 0x06804031, 0x05403005, 0x02006031,
	0x04001186, 0x07000187, 0x0a24c307, 0x06800000, 0x094061c0,
	0x07807200, 0x04401000, 0x07c07200, 0x04401046, 0x07000040,
	0x09005000, 0x06800041, 0x03401001, 0x07807080, 0x03000040,
	0x07c07080, 0x06810000, 0x0bc04007, 0x078071c0, 0x04401000,
	0x07c071c0, 0x0cc00000, 0x07400187, 0x04001208, 0x0b8db248,
	0x0cc00000, 0x00000000, 0x0400134d, 0x0780734c, 0x0240d34c,
	0x07807300, 0x0b610080, 0x00000000, 0x0200d30d, 0x0400134d,
	0x06800008, 0x07807109, 0x0680a00a, 0x0a403209, 0x0cc00000,
	0x00000000, 0x05402108, 0x0200410a, 0x04002c44, 0x07000c40,
	0x04001c71, 0x07000c41, 0x09610001, 0x0a417340, 0x07000105,
	0x06804031, 0x05403005, 0x02006031, 0x04001186, 0x07000187,
	0x04001c44, 0x07000c70, 0x09002030, 0x0aa14040, 0x0aa18080,
	0x068000c0, 0x0c780180, 0x094821c0, 0x0c780100, 0x09807107,
	0x0c780080, 0x09807147, 0x04006c46, 0x07400c4e, 0x0cc00000,
	0x07400187, 0x04001208, 0x0b8e1248, 0x0cc00000, 0x00000000,
	0x0440138e, 0x0680000d, 0x07807300, 0x0b60c080, 0x00000000,
	0x0680004d, 0x07807108, 0x07807149, 0x0680a00a, 0x0a403209,
	0x0cc00000, 0x00000000, 0x05402108, 0x0200410a, 0x04002c44,
	0x07000c40, 0x04001c71, 0x07000c41, 0x09610001, 0x03800340,
	0x0b01b380, 0x07000105, 0x06804031, 0x05403005, 0x02006031,
	0x04001186, 0x07000187, 0x0a250307, 0x06800000, 0x094061c0,
	0x07807200, 0x04401000, 0x07c07200, 0x04401046, 0x07000040,
	0x09005000, 0x06800041, 0x03401001, 0x07807080, 0x03000040,
	0x07c07080, 0x06810000, 0x0bc04007, 0x078071c0, 0x04401000,
	0x07c071c0, 0x07400187, 0x04001208, 0x0b8dc248, 0x0cc00000,
	0x00000000, 0x06800010, 0x078020b1, 0x0a61c0b1, 0x07800bb1,
	0x0aa14031, 0x0c07ab00, 0x07c00b90, 0x0c07a340, 0x00000000,
	0x078072f1, 0x09005031, 0x0a638140, 0x06800011, 0x0c07a900,
	0x00000000, 0x0780e100, 0x0be18080, 0x09001400, 0x0c07a080,
	0x00000000, 0x0c781800, 0x00000000, 0x0c07b040, 0x00000000,
	0x0c781700, 0x06800000, 0x090a2071, 0x0780e130, 0x0a858001,
	0x0a857030, 0x0680e10f, 0x070003c0, 0x0aa2c040, 0x0aa3c080,
	0x0aa4c0c0, 0x0aa68100, 0x00000000, 0x04605040, 0x0c500740,
	0x00000000, 0x04606040, 0x0c5010c0, 0x0c781280, 0x04001c4f,
	0x0c07b000, 0x07000c4e, 0x0c7ffc40, 0x040023cf, 0x04001c4f,
	0x0c07bf80, 0x07000c4e, 0x0c7ffb00, 0x040023cf, 0x04002c4f,
	0x0c07cd00, 0x07000c4e, 0x04001c4f, 0x0c07d900, 0x07000c4d,
	0x0c7ff900, 0x040033cf, 0x04001c4f, 0x07000c4e, 0x0c07e380,
	0x00000000, 0x0c7ff780, 0x040023cf, 0x0c079b80, 0x00000000,
	0x0c0793c0, 0x00000000, 0x06800007, 0x07807331, 0x0b250071,
	0x07807770, 0x07807780, 0x09610c00, 0x07807841, 0x07807880,
	0x09610040, 0x02401c01, 0x07c07841, 0x05810001, 0x07c07880,
	0x078077c1, 0x07807800, 0x09610040, 0x02401c01, 0x07c077c1,
	0x05810001, 0x07c07800, 0x0c7801c0, 0x07c07441, 0x07c07447,
	0x07c077c7, 0x07c07807, 0x07c07847, 0x07c07887, 0x07c07347,
	0x07c07487, 0x07c07647, 0x07c07687, 0x07c076c7, 0x07c07707,
	0x07c07747, 0x07c07787, 0x0c7fed40, 0x040013cf, 0x04001c4f,
	0x07000c4e, 0x0c07bf00, 0x00000000, 0x06800050, 0x0400044e,
	0x0c7feb40, 0x040023cf, 0x0680400f, 0x0780718e, 0x0540338e,
	0x0200e38f, 0x04001c4e, 0x07000c40, 0x0a2140c0, 0x0c071980,
	0x07c031d0, 0x0cc00000, 0x00000000, 0x078072f1, 0x09005031,
	0x090a2071, 0x0aa10140, 0x0aa0c001, 0x0c074040, 0x00000000,
	0x0649cf00, 0x0a219000, 0x0c071640, 0x07c031d0, 0x0c0773c0,
	0x00000000, 0x0c780140, 0x0c077300, 0x00000000, 0x0c071480,
	0x07c031d0, 0x0cc00000, 0x00000000, 0x00000000
};

