/* SPDX-License-Identifier: BSD-3-Clause
 *
 * Copyright(c) 2019 Intel Corporation. All rights reserved.
 *
 * Author: Seppo Ingalsuo <seppo.ingalsuo@linux.intel.com>
 */

#include <stdint.h>

static const int32_t src_int32_20_7_2976_5000_fir[480] = {
	-256723,
	1344746,
	-2486660,
	482960,
	8803622,
	-25175385,
	38156367,
	-26821177,
	-30322914,
	139209517,
	-280008402,
	420358466,
	1488086393,
	344609809,
	-265964196,
	145835752,
	-41503751,
	-18612384,
	34694762,
	-25046017,
	9883375,
	-447489,
	-2061731,
	1243993,
	-257790,
	1430421,
	-2904866,
	1472489,
	7512409,
	-24905037,
	41179060,
	-34983105,
	-18158004,
	130074709,
	-290505844,
	497893035,
	1480516005,
	271225445,
	-248771931,
	149972291,
	-51575356,
	-10483542,
	30867847,
	-24539283,
	10746634,
	-1307565,
	-1637919,
	1131618,
	-250985,
	1497545,
	-3308001,
	2507980,
	6018699,
	-24218101,
	43692864,
	-42966397,
	-5155053,
	118449090,
	-297082341,
	576603587,
	1465446600,
	200746465,
	-228849250,
	151672845,
	-60434436,
	-2554778,
	26751530,
	-23682389,
	11392151,
	-2087883,
	-1222450,
	1010988,
	-235284,
	1542701,
	-3687330,
	3574601,
	4335443,
	-23103753,
	45632743,
	-50636218,
	8520404,
	104388416,
	-299393672,
	655854845,
	1443020096,
	133671448,
	-206627048,
	151023745,
	-68000205,
	5062027,
	22422731,
	-22506719,
	11822288,
	-2781010,
	-821850,
	885325,
	-209785,
	1562603,
	-4033875,
	4655972,
	2479587,
	-21557704,
	46939894,
	-57856679,
	22685034,
	87987310,
	-297130784,
	734992775,
	1413447322,
	70451819,
	-182543791,
	148141360,
	-74214664,
	12264611,
	17958130,
	-21047124,
	12042769,
	-3381467,
	-441871,
	757646,
	-173742,
	1554188,
	-4338570,
	5734358,
	472008,
	-19582602,
	47563003,
	-64492961,
	37139770,
	69379621,
	-290024675,
	813351472,
	1377005590,
	11487844,
	-157039901,
	143169199,
	-79042523,
	18961492,
	13432966,
	-19341191,
	12062407,
	-3885702,
	-87448,
	630726,
	-126597,
	1514691,
	-4592426,
	6790900,
	-1662635,
	-17188341,
	47459422,
	-70413498,
	51672186,
	48738256,
	-277850917,
	890260280,
	1334035510,
	-42874712,
	-130552275,
	136274740,
	-82470803,
	25072920,
	8919923,
	-17428496,
	11892777,
	-4292028,
	237335,
	507055,
	-68016,
	1441735,
	-4786710,
	7805887,
	-3896107,
	-14392256,
	46596269,
	-75492215,
	66059175,
	26274465,
	-260433716,
	965051045,
	1284937076,
	-92347211,
	-103509015,
	127646050,
	-84508106,
	30531607,
	4488098,
	-15349871,
	11547875,
	-4600534,
	529258,
	388813,
	2078,
	1333417,
	-4913133,
	8759054,
	-6196888,
	-11219206,
	44951408,
	-79610761,
	80069897,
	2236568,
	-237649478,
	1037065415,
	1230165094,
	-136700052,
	-76324425,
	117488238,
	-85183602,
	35283230,
	202077,
	-13146676,
	11043746,
	-4812965,
	785957,
	277852,
	83482,
	1188383,
	-4964038,
	9629912,
	-8530533,
	-7701529,
	42514303,
	-82660716,
	93468962,
	-23091857,
	-209429797,
	1105662099,
	1170223995,
	-175763838,
	-49394345,
	106019809,
	-84545738,
	39286714,
	-3878880,
	-10860107,
	10398097,
	-4932590,
	1005906,
	175685,
	175685,
	1005906,
	-4932590,
	10398097,
	-10860107,
	-3878880,
	39286714,
	-84545738,
	106019809,
	-49394345,
	-175763838,
	1170223995,
	1105662099,
	-209429797,
	-23091857,
	93468962,
	-82660716,
	42514303,
	-7701529,
	-8530533,
	9629912,
	-4964038,
	1188383,
	83482,
	277852,
	785957,
	-4812965,
	11043746,
	-13146676,
	202077,
	35283230,
	-85183602,
	117488238,
	-76324425,
	-136700052,
	1230165094,
	1037065415,
	-237649478,
	2236568,
	80069897,
	-79610761,
	44951408,
	-11219206,
	-6196888,
	8759054,
	-4913133,
	1333417,
	2078,
	388813,
	529258,
	-4600534,
	11547875,
	-15349871,
	4488098,
	30531607,
	-84508106,
	127646050,
	-103509015,
	-92347211,
	1284937076,
	965051045,
	-260433716,
	26274465,
	66059175,
	-75492215,
	46596269,
	-14392256,
	-3896107,
	7805887,
	-4786710,
	1441735,
	-68016,
	507055,
	237335,
	-4292028,
	11892777,
	-17428496,
	8919923,
	25072920,
	-82470803,
	136274740,
	-130552275,
	-42874712,
	1334035510,
	890260280,
	-277850917,
	48738256,
	51672186,
	-70413498,
	47459422,
	-17188341,
	-1662635,
	6790900,
	-4592426,
	1514691,
	-126597,
	630726,
	-87448,
	-3885702,
	12062407,
	-19341191,
	13432966,
	18961492,
	-79042523,
	143169199,
	-157039901,
	11487844,
	1377005590,
	813351472,
	-290024675,
	69379621,
	37139770,
	-64492961,
	47563003,
	-19582602,
	472008,
	5734358,
	-4338570,
	1554188,
	-173742,
	757646,
	-441871,
	-3381467,
	12042769,
	-21047124,
	17958130,
	12264611,
	-74214664,
	148141360,
	-182543791,
	70451819,
	1413447322,
	734992775,
	-297130784,
	87987310,
	22685034,
	-57856679,
	46939894,
	-21557704,
	2479587,
	4655972,
	-4033875,
	1562603,
	-209785,
	885325,
	-821850,
	-2781010,
	11822288,
	-22506719,
	22422731,
	5062027,
	-68000205,
	151023745,
	-206627048,
	133671448,
	1443020096,
	655854845,
	-299393672,
	104388416,
	8520404,
	-50636218,
	45632743,
	-23103753,
	4335443,
	3574601,
	-3687330,
	1542701,
	-235284,
	1010988,
	-1222450,
	-2087883,
	11392151,
	-23682389,
	26751530,
	-2554778,
	-60434436,
	151672845,
	-228849250,
	200746465,
	1465446600,
	576603587,
	-297082341,
	118449090,
	-5155053,
	-42966397,
	43692864,
	-24218101,
	6018699,
	2507980,
	-3308001,
	1497545,
	-250985,
	1131618,
	-1637919,
	-1307565,
	10746634,
	-24539283,
	30867847,
	-10483542,
	-51575356,
	149972291,
	-248771931,
	271225445,
	1480516005,
	497893035,
	-290505844,
	130074709,
	-18158004,
	-34983105,
	41179060,
	-24905037,
	7512409,
	1472489,
	-2904866,
	1430421,
	-257790,
	1243993,
	-2061731,
	-447489,
	9883375,
	-25046017,
	34694762,
	-18612384,
	-41503751,
	145835752,
	-265964196,
	344609809,
	1488086393,
	420358466,
	-280008402,
	139209517,
	-30322914,
	-26821177,
	38156367,
	-25175385,
	8803622,
	482960,
	-2486660,
	1344746,
	-256723

};

static const struct src_stage src_int32_20_7_2976_5000 = {
	1, 3, 20, 24, 480, 7, 20, 0, 0,
	src_int32_20_7_2976_5000_fir};
