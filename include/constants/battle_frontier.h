#ifndef GUARD_CONSTANTS_BATTLE_FRONTIER_H
#define GUARD_CONSTANTS_BATTLE_FRONTIER_H

#define FRONTIER_CHALLENGE(facility, mode) ((facility << 8) + mode)

// Battle Frontier facility ids.
#define FRONTIER_FACILITY_TOWER    0
#define FRONTIER_FACILITY_DOME     1
#define FRONTIER_FACILITY_PALACE   2  // also Verdanturf Tent
#define FRONTIER_FACILITY_ARENA    3  // also Fallarbor Tent
#define FRONTIER_FACILITY_FACTORY  4  // also Slateport Tent
#define FRONTIER_FACILITY_PIKE     5
#define FRONTIER_FACILITY_PYRAMID  6
#define NUM_FRONTIER_FACILITIES    7
// VAR_FRONTIER_FACILITY is re-used for the below facilities as well
#define FACILITY_LINK_CONTEST      7
#define FACILITY_UNION_ROOM        8
#define FACILITY_MULTI_OR_EREADER  9  // Direct Corner multi battles, multi battle with Steven, and e-Reader battles

// Battle Frontier lvl modes.
#define FRONTIER_LVL_50   0
#define FRONTIER_LVL_OPEN 1
#define FRONTIER_LVL_TENT 2

// Battle Frontier battle modes.
#define FRONTIER_MODE_SINGLES      0
#define FRONTIER_MODE_DOUBLES      1
#define FRONTIER_MODE_MULTIS       2
#define FRONTIER_MODE_LINK_MULTIS  3
#define FRONTIER_MODE_COUNT        4

// Challenge Statuses
#define CHALLENGE_STATUS_SAVING   1
#define CHALLENGE_STATUS_PAUSED   2
#define CHALLENGE_STATUS_WON      3
#define CHALLENGE_STATUS_LOST     4

// Special trainer battles.
#define SPECIAL_BATTLE_TOWER 0
#define SPECIAL_BATTLE_SECRET_BASE 1
#define SPECIAL_BATTLE_EREADER 2
#define SPECIAL_BATTLE_DOME 3
#define SPECIAL_BATTLE_PALACE 4
#define SPECIAL_BATTLE_ARENA 5
#define SPECIAL_BATTLE_FACTORY 6
#define SPECIAL_BATTLE_PIKE_SINGLE 7
#define SPECIAL_BATTLE_STEVEN 8
#define SPECIAL_BATTLE_PIKE_DOUBLE 9
#define SPECIAL_BATTLE_PYRAMID 10
#define SPECIAL_BATTLE_MULTI 11

#define MAX_BATTLE_FRONTIER_POINTS 9999
#define MAX_STREAK 9999

// These sets of facility ids would be redundant if the order was consistent
// The order is important for this set so that all the non-link records can be continuous
#define RANKING_HALL_BATTLE_TOWER_SINGLES   0
#define RANKING_HALL_BATTLE_TOWER_DOUBLES   1
#define RANKING_HALL_BATTLE_TOWER_MULTIS    2
#define RANKING_HALL_BATTLE_DOME            3
#define RANKING_HALL_BATTLE_PALACE          4
#define RANKING_HALL_BATTLE_ARENA           5
#define RANKING_HALL_BATTLE_FACTORY         6
#define RANKING_HALL_BATTLE_PIKE            7
#define RANKING_HALL_BATTLE_PYRAMID         8
#define RANKING_HALL_BATTLE_TOWER_LINK      9

#define FRONTIER_MANIAC_BATTLE_TOWER_SINGLES   0
#define FRONTIER_MANIAC_BATTLE_TOWER_DOUBLES   1
#define FRONTIER_MANIAC_BATTLE_TOWER_MULTIS    2
#define FRONTIER_MANIAC_BATTLE_TOWER_LINK      3
#define FRONTIER_MANIAC_BATTLE_DOME            4
#define FRONTIER_MANIAC_BATTLE_FACTORY         5
#define FRONTIER_MANIAC_BATTLE_PALACE          6
#define FRONTIER_MANIAC_BATTLE_ARENA           7
#define FRONTIER_MANIAC_BATTLE_PIKE            8
#define FRONTIER_MANIAC_BATTLE_PYRAMID         9
#define FRONTIER_MANIAC_FACILITY_COUNT        10

#define FRONTIER_MANIAC_MESSAGE_COUNT 3

// Frontier Gambler
#define FRONTIER_GAMBLER_WAITING     0
#define FRONTIER_GAMBLER_PLACED_BET  1
#define FRONTIER_GAMBLER_WON         2
#define FRONTIER_GAMBLER_LOST        3

#define FRONTIER_GAMBLER_BET_5      0
#define FRONTIER_GAMBLER_BET_10     1
#define FRONTIER_GAMBLER_BET_15     2
#define FRONTIER_GAMBLER_BET_CANCEL 3

#define FRONTIER_GAMBLER_CHALLENGE_COUNT 12

#define EXCHANGE_CORNER_DECOR1_CLERK     0
#define EXCHANGE_CORNER_DECOR2_CLERK     1
#define EXCHANGE_CORNER_VITAMIN_CLERK    2
#define EXCHANGE_CORNER_HOLD_ITEM_CLERK  3

#define F_EV_SPREAD_HP         (1 << 0)
#define F_EV_SPREAD_ATTACK     (1 << 1)
#define F_EV_SPREAD_DEFENSE    (1 << 2)
#define F_EV_SPREAD_SPEED      (1 << 3)
#define F_EV_SPREAD_SP_ATTACK  (1 << 4)
#define F_EV_SPREAD_SP_DEFENSE (1 << 5)

#endif // GUARD_CONSTANTS_BATTLE_FRONTIER_H
