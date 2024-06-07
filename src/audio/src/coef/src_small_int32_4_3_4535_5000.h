/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2020 Intel Corporation. All rights reserved.
 *
 */

#include <stdint.h>

static const int32_t src_int32_4_3_4535_5000_fir[352] = {
	-92406,
	134596,
	-172955,
	199213,
	-202952,
	171872,
	-92271,
	-50243,
	269806,
	-579151,
	988295,
	-1503105,
	2123834,
	-2843689,
	3647541,
	-4510854,
	5398956,
	-6266696,
	7058601,
	-7709550,
	8146004,
	-8287785,
	8050355,
	-7347530,
	6094510,
	-4211085,
	1624834,
	1725890,
	-5889416,
	10898942,
	-16771756,
	23509887,
	-31102720,
	39532369,
	-48783143,
	58857567,
	-69803863,
	81765532,
	-95078238,
	110480787,
	-129645170,
	156801585,
	-205545868,
	352289694,
	1775663649,
	-115092154,
	16013223,
	19545653,
	-36989159,
	46321858,
	-51068157,
	52836065,
	-52507853,
	50644700,
	-47648483,
	43833437,
	-39459786,
	34749839,
	-29895522,
	25061680,
	-20387357,
	15986286,
	-11947265,
	8334785,
	-5190123,
	2532951,
	-363454,
	-1335110,
	2593518,
	-3453483,
	3964496,
	-4180727,
	4158132,
	-3951853,
	3614009,
	-3191933,
	2726878,
	-2253207,
	1798040,
	-1381308,
	1016168,
	-709698,
	463787,
	-276159,
	141438,
	-52186,
	-133,
	24318,
	-117075,
	189618,
	-277971,
	378322,
	-483989,
	585105,
	-668473,
	717655,
	-713318,
	633869,
	-456402,
	157934,
	283079,
	-885003,
	1661121,
	-2617655,
	3751798,
	-5049885,
	6485781,
	-8019632,
	9597032,
	-11148719,
	12590816,
	-13825651,
	14743115,
	-15222474,
	15134503,
	-14343708,
	12710360,
	-10091891,
	6343080,
	-1314149,
	-5154556,
	13243486,
	-23174218,
	35246386,
	-49905711,
	67875066,
	-90425662,
	119998879,
	-161853737,
	229472505,
	-369909774,
	932444601,
	1461114371,
	-361976166,
	182728934,
	-106383275,
	63007473,
	-34766272,
	15038822,
	-795929,
	-9561299,
	16978445,
	-22073792,
	25290375,
	-26972147,
	27403763,
	-26831647,
	25474929,
	-23530723,
	21176260,
	-18569352,
	15848091,
	-13130355,
	10513476,
	-8074279,
	5869613,
	-3937391,
	2298127,
	-956886,
	-94423,
	874553,
	-1410327,
	1734067,
	-1881173,
	1887914,
	-1789538,
	1618728,
	-1404449,
	1171177,
	-938509,
	721093,
	-528870,
	367521,
	-239095,
	142729,
	-75412,
	-75412,
	142729,
	-239095,
	367521,
	-528870,
	721093,
	-938509,
	1171177,
	-1404449,
	1618728,
	-1789538,
	1887914,
	-1881173,
	1734067,
	-1410327,
	874553,
	-94423,
	-956886,
	2298127,
	-3937391,
	5869613,
	-8074279,
	10513476,
	-13130355,
	15848091,
	-18569352,
	21176260,
	-23530723,
	25474929,
	-26831647,
	27403763,
	-26972147,
	25290375,
	-22073792,
	16978445,
	-9561299,
	-795929,
	15038822,
	-34766272,
	63007473,
	-106383275,
	182728934,
	-361976166,
	1461114371,
	932444601,
	-369909774,
	229472505,
	-161853737,
	119998879,
	-90425662,
	67875066,
	-49905711,
	35246386,
	-23174218,
	13243486,
	-5154556,
	-1314149,
	6343080,
	-10091891,
	12710360,
	-14343708,
	15134503,
	-15222474,
	14743115,
	-13825651,
	12590816,
	-11148719,
	9597032,
	-8019632,
	6485781,
	-5049885,
	3751798,
	-2617655,
	1661121,
	-885003,
	283079,
	157934,
	-456402,
	633869,
	-713318,
	717655,
	-668473,
	585105,
	-483989,
	378322,
	-277971,
	189618,
	-117075,
	24318,
	-133,
	-52186,
	141438,
	-276159,
	463787,
	-709698,
	1016168,
	-1381308,
	1798040,
	-2253207,
	2726878,
	-3191933,
	3614009,
	-3951853,
	4158132,
	-4180727,
	3964496,
	-3453483,
	2593518,
	-1335110,
	-363454,
	2532951,
	-5190123,
	8334785,
	-11947265,
	15986286,
	-20387357,
	25061680,
	-29895522,
	34749839,
	-39459786,
	43833437,
	-47648483,
	50644700,
	-52507853,
	52836065,
	-51068157,
	46321858,
	-36989159,
	19545653,
	16013223,
	-115092154,
	1775663649,
	352289694,
	-205545868,
	156801585,
	-129645170,
	110480787,
	-95078238,
	81765532,
	-69803863,
	58857567,
	-48783143,
	39532369,
	-31102720,
	23509887,
	-16771756,
	10898942,
	-5889416,
	1725890,
	1624834,
	-4211085,
	6094510,
	-7347530,
	8050355,
	-8287785,
	8146004,
	-7709550,
	7058601,
	-6266696,
	5398956,
	-4510854,
	3647541,
	-2843689,
	2123834,
	-1503105,
	988295,
	-579151,
	269806,
	-50243,
	-92271,
	171872,
	-202952,
	199213,
	-172955,
	134596,
	-92406

};

static const struct src_stage src_int32_4_3_4535_5000 = {
	2, 3, 4, 88, 352, 3, 4, 0, 0,
	src_int32_4_3_4535_5000_fir};
