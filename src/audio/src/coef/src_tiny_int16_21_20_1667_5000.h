/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2019 Intel Corporation. All rights reserved.
 *
 * Author: Seppo Ingalsuo <seppo.ingalsuo@linux.intel.com>
 */

#include <stdint.h>

static const int16_t src_int16_21_20_1667_5000_fir[336] = {
	-4,
	61,
	-87,
	-314,
	1046,
	-503,
	-3125,
	8816,
	19978,
	7975,
	-3254,
	-295,
	986,
	-337,
	-66,
	57,
	-5,
	65,
	-109,
	-285,
	1099,
	-719,
	-2954,
	9658,
	19911,
	7140,
	-3342,
	-97,
	919,
	-355,
	-45,
	52,
	-2,
	69,
	-132,
	-251,
	1144,
	-941,
	-2741,
	10498,
	19779,
	6316,
	-3392,
	90,
	847,
	-367,
	-26,
	48,
	-2,
	72,
	-156,
	-211,
	1179,
	-1168,
	-2483,
	11329,
	19580,
	5506,
	-3406,
	265,
	771,
	-375,
	-9,
	43,
	-1,
	74,
	-182,
	-166,
	1203,
	-1396,
	-2181,
	12147,
	19318,
	4716,
	-3385,
	427,
	692,
	-379,
	5,
	38,
	0,
	76,
	-205,
	-115,
	1218,
	-1625,
	-1834,
	12947,
	18993,
	3948,
	-3332,
	575,
	611,
	-376,
	20,
	33,
	2,
	76,
	-229,
	-59,
	1219,
	-1851,
	-1441,
	13725,
	18608,
	3206,
	-3250,
	708,
	530,
	-371,
	33,
	27,
	5,
	75,
	-253,
	2,
	1207,
	-2072,
	-1005,
	14476,
	18165,
	2494,
	-3140,
	825,
	448,
	-362,
	43,
	24,
	7,
	74,
	-275,
	68,
	1181,
	-2285,
	-523,
	15195,
	17667,
	1815,
	-3006,
	928,
	366,
	-349,
	53,
	20,
	9,
	71,
	-297,
	138,
	1140,
	-2488,
	1,
	15878,
	17118,
	1172,
	-2850,
	1014,
	288,
	-334,
	60,
	16,
	13,
	66,
	-316,
	212,
	1085,
	-2677,
	566,
	16520,
	16520,
	566,
	-2677,
	1085,
	212,
	-316,
	66,
	13,
	16,
	60,
	-334,
	288,
	1014,
	-2850,
	1172,
	17118,
	15878,
	1,
	-2488,
	1140,
	138,
	-297,
	71,
	9,
	20,
	53,
	-349,
	366,
	928,
	-3006,
	1815,
	17667,
	15195,
	-523,
	-2285,
	1181,
	68,
	-275,
	74,
	7,
	24,
	43,
	-362,
	448,
	825,
	-3140,
	2494,
	18165,
	14476,
	-1005,
	-2072,
	1207,
	2,
	-253,
	75,
	5,
	27,
	33,
	-371,
	530,
	708,
	-3250,
	3206,
	18608,
	13725,
	-1441,
	-1851,
	1219,
	-59,
	-229,
	76,
	2,
	33,
	20,
	-376,
	611,
	575,
	-3332,
	3948,
	18993,
	12947,
	-1834,
	-1625,
	1218,
	-115,
	-205,
	76,
	0,
	38,
	5,
	-379,
	692,
	427,
	-3385,
	4716,
	19318,
	12147,
	-2181,
	-1396,
	1203,
	-166,
	-182,
	74,
	-1,
	43,
	-9,
	-375,
	771,
	265,
	-3406,
	5506,
	19580,
	11329,
	-2483,
	-1168,
	1179,
	-211,
	-156,
	72,
	-2,
	48,
	-26,
	-367,
	847,
	90,
	-3392,
	6316,
	19779,
	10498,
	-2741,
	-941,
	1144,
	-251,
	-132,
	69,
	-2,
	52,
	-45,
	-355,
	919,
	-97,
	-3342,
	7140,
	19911,
	9658,
	-2954,
	-719,
	1099,
	-285,
	-109,
	65,
	-4,
	57,
	-66,
	-337,
	986,
	-295,
	-3254,
	7975,
	19978,
	8816,
	-3125,
	-503,
	1046,
	-314,
	-87,
	61,
	-4

};

static const struct src_stage src_int16_21_20_1667_5000 = {
	19, 20, 21, 16, 336, 20, 21, 0, 0,
	src_int16_21_20_1667_5000_fir};
