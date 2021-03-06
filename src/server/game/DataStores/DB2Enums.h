/*
 * Copyright (C) 2011-2014 Project SkyFire <http://www.projectskyfire.org/>
 * Copyright (C) 2008-2014 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2005-2014 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

enum BattlePetSpeciesFlags
{
    BATTLE_PET_SPECIES_FLAG_NONE        = 0x0000,
    BATTLE_PET_FLAG_LIMITED_ABILITIES   = 0x0001, // battle pets with less than 6 abilites have this flag
    BATTLE_PET_FLAG_NOT_TRADABLE        = 0x0002,
    BATTLE_PET_FLAG_NOT_ACCOUNT_BOUND   = 0x0004,
    BATTLE_PET_FLAG_RELEASABLE          = 0x0008,
    BATTLE_PET_FLAG_NOT_CAGEABLE        = 0x0010,
    BATTLE_PET_FLAG_NOT_TAMEABLE        = 0x0020,
    BATTLE_PET_FLAG_UNIQUE              = 0x0040,
    BATTLE_PET_FLAG_COMPANION           = 0x0080,
    BATTLE_PET_FLAG_UNKNOWN_2           = 0x0100,
    BATTLE_PET_FLAG_UNKNOWN_3           = 0x0200,
    BATTLE_PET_FLAG_ELITE               = 0x0400,
    BATTLE_PET_FLAG_UNKNOWN_4           = 0x0800, // battle pets 89, 169 and 218, these also have not tradable flag but don't display message in game
    BATTLE_PET_FLAG_UNKNOWN_5           = 0x1000  // only seen on battle pet 316 (Cenarion Hatchling)
};

enum BattlePetStates
{
    BATTLE_PET_STATE_IS_DEAD = 1,
    BATTLE_PET_STATE_MAXHEALTHBONUS = 2,
    BATTLE_PET_STATE_INTERNAL_INITIALHEALTH = 3,
    BATTLE_PET_STATE_STAT_KHARMA = 4,
    BATTLE_PET_STATE_INTERNAL_INITIALLEVEL = 17,
    BATTLE_PET_STATE_STAT_POWER = 18,
    BATTLE_PET_STATE_STAT_STAMINA = 19,
    BATTLE_PET_STATE_STAT_SPEED = 20,
    BATTLE_PET_STATE_MECHANIC_ISPOISONED = 21,
    BATTLE_PET_STATE_MECHANIC_ISSTUNNED = 22,
    BATTLE_PET_STATE_MOD_DAMAGEDEALTPERCENT = 23,
    BATTLE_PET_STATE_MOD_DAMAGETAKENPERCENT = 24,
    BATTLE_PET_STATE_MOD_SPEEDPERCENT = 25,
    BATTLE_PET_STATE_RAMPING_DAMAGEID = 26,
    BATTLE_PET_STATE_RAMPING_DAMAGEUSES = 27,
    BATTLE_PET_STATE_CONDITION_WASDAMAGEDTHISTURN = 28,
    BATTLE_PET_STATE_UNTARGETTABLE = 29,
    BATTLE_PET_STATE_MECHANIC_ISUNDERGROUND = 30,
    BATTLE_PET_STATE_LAST_HITTAKEN = 31,
    BATTLE_PET_STATE_LAST_HITDEALT = 32,
    BATTLE_PET_STATE_MECHANIC_ISFLYING = 33,
    BATTLE_PET_STATE_MECHANIC_ISBURNING = 34,
    BATTLE_PET_STATE_TURNLOCK = 35,
    BATTLE_PET_STATE_SWAPOUTLOCK = 36,
    BATTLE_PET_STATE_STAT_CRITCHANCE = 40,
    BATTLE_PET_STATE_STAT_ACCURACY = 41,
    BATTLE_PET_STATE_PASSIVE_CRITTER = 42,
    BATTLE_PET_STATE_PASSIVE_BEAST = 43,
    BATTLE_PET_STATE_PASSIVE_HUMANOID = 44,
    BATTLE_PET_STATE_PASSIVE_FLYING = 45,
    BATTLE_PET_STATE_PASSIVE_DRAGON = 46,
    BATTLE_PET_STATE_PASSIVE_ELEMENTAL = 47,
    BATTLE_PET_STATE_PASSIVE_MECHANICAL = 48,
    BATTLE_PET_STATE_PASSIVE_MAGIC = 49,
    BATTLE_PET_STATE_PASSIVE_UNDEAD = 50,
    BATTLE_PET_STATE_PASSIVE_AQUATIC = 51,
    BATTLE_PET_STATE_MECHANIC_ISCHILLED = 52,
    BATTLE_PET_STATE_WEATHER_BURNTEARTH = 53,
    BATTLE_PET_STATE_WEATHER_ARCANESTORM = 54,
    BATTLE_PET_STATE_WEATHER_MOONLIGHT = 55,
    BATTLE_PET_STATE_WEATHER_DARKNESS = 56,
    BATTLE_PET_STATE_WEATHER_SANDSTORM = 57,
    BATTLE_PET_STATE_WEATHER_BLIZZARD = 58,
    BATTLE_PET_STATE_WEATHER_MUD = 59,
    BATTLE_PET_STATE_WEATHER_RAIN = 60,
    BATTLE_PET_STATE_WEATHER_SUNLIGHT = 61,
    BATTLE_PET_STATE_WEATHER_LIGHTNINGSTORM = 62,
    BATTLE_PET_STATE_WEATHER_WINDY = 63,
    BATTLE_PET_STATE_MECHANIC_ISWEBBED = 64,
    BATTLE_PET_STATE_MOD_HEALINGDEALTPERCENT = 65,
    BATTLE_PET_STATE_MOD_HEALINGTAKENPERCENT = 66,
    BATTLE_PET_STATE_MECHANIC_ISINVISIBLE = 67,
    BATTLE_PET_STATE_UNKILLABLE = 68,
    BATTLE_PET_STATE_MECHANIC_ISOBJECT = 69,
    BATTLE_PET_STATE_SPECIAL_PLANT = 70,
    BATTLE_PET_STATE_ADD_FLATDAMAGETAKEN = 71,
    BATTLE_PET_STATE_ADD_FLATDAMAGEDEALT = 72,
    BATTLE_PET_STATE_STAT_DODGE = 73,
    BATTLE_PET_STATE_SPECIAL_BLOCKEDATTACKCOUNT = 74,
    BATTLE_PET_STATE_SPECIAL_OBJECTREDIRECTIONAURAID = 75,
    BATTLE_PET_STATE_MECHANIC_ISBLEEDING = 77,
    BATTLE_PET_STATE_STAT_GENDER = 78,
    BATTLE_PET_STATE_MECHANIC_ISBLIND = 82,
    BATTLE_PET_STATE_COSMETIC_STEALTHED = 84,
    BATTLE_PET_STATE_COSMETIC_WATERBUBBLED = 85,
    BATTLE_PET_STATE_MOD_PETTYPEDAMAGEDEALTPERCENT = 87,
    BATTLE_PET_STATE_MOD_PETTYPEDAMAGETAKENPERCENT = 88,
    BATTLE_PET_STATE_MOD_PETTYPE_ID = 89,
    BATTLE_PET_STATE_INTERNAL_CAPTUREBOOST = 90,
    BATTLE_PET_STATE_INTERNAL_EFFECTSUCCEEDED = 91,
    BATTLE_PET_STATE_SPECIAL_ISCOCKROACH = 93,
    BATTLE_PET_STATE_SWAPINLOCK = 98,
    BATTLE_PET_STATE_MOD_MAXHEALTHPERCENT = 99,
    BATTLE_PET_STATE_CLONE_ACTIVE = 100,
    BATTLE_PET_STATE_CLONE_PBOID = 101,
    BATTLE_PET_STATE_CLONE_PETABILITY1 = 102,
    BATTLE_PET_STATE_CLONE_PETABILITY2 = 103,
    BATTLE_PET_STATE_CLONE_PETABILITY3 = 104,
    BATTLE_PET_STATE_CLONE_HEALTH = 105,
    BATTLE_PET_STATE_CLONE_MAXHEALTH = 106,
    BATTLE_PET_STATE_CLONE_LASTABILITYID = 107,
    BATTLE_PET_STATE_CLONE_LASTABILITYTURN = 108,
    BATTLE_PET_STATE_SPECIAL_ISCHARGING = 113,
    BATTLE_PET_STATE_SPECIAL_ISRECOVERING = 114,
    BATTLE_PET_STATE_CLONE_CLONEABILITYID = 117,
    BATTLE_PET_STATE_CLONE_CLONEAURAID = 118,
    BATTLE_PET_STATE_DARKSIMULACRUM_ABILITYID = 119,
    BATTLE_PET_STATE_SPECIAL_CONSUMEDCORPSE = 120,
    BATTLE_PET_STATE_RAMPING_PBOID = 121,
    BATTLE_PET_STATE_REFLECTING = 122,
    BATTLE_PET_STATE_SPECIAL_BLOCKEDFRIENDLYMODE = 123,
    BATTLE_PET_STATE_SPECIAL_TYPEOVERRIDE = 124,
    BATTLE_PET_STATE_MECHANIC_ISWALL = 126,
    BATTLE_PET_STATE_CONDITION_DIDDAMAGETHISROUND = 127,
    BATTLE_PET_STATE_COSMETIC_FLYTIER = 128,
    BATTLE_PET_STATE_COSMETIC_FETISHMASK = 129,
    BATTLE_PET_STATE_MECHANIC_ISBOMB = 136,
    BATTLE_PET_STATE_SPECIAL_ISCLEANSING = 141,
    BATTLE_PET_STATE_COSMETIC_BIGGLESWORTH = 144,
    BATTLE_PET_STATE_INTERNAL_HEALTHBEFOREINSTAKILL = 145,
    BATTLE_PET_STATE_RESILIENT = 149,
    BATTLE_PET_STATE_PASSIVE_ELITE = 153,
    BATTLE_PET_STATE_COSMETIC_CHAOS = 158,
    BATTLE_PET_STATE_PASSIVE_BOSS = 162,
    BATTLE_PET_STATE_COSMETIC_TREASUREGOBLIN = 176,
};

enum BattlePetFamily
{
    BATTLE_PET_FAMILY_HUMANOID = 1,
    BATTLE_PET_FAMILY_DRAGONKIN = 2,
    BATTLE_PET_FAMILY_FLYING = 3,
    BATTLE_PET_FAMILY_UNDEAD = 4,
    BATTLE_PET_FAMILY_CRITTER = 5,
    BATTLE_PET_FAMILY_MAGIC = 6,
    BATTLE_PET_FAMILY_ELEMENTAL = 7,
    BATTLE_PET_FAMILY_BEAST = 8,
    BATTLE_PET_FAMILY_AQUATIC = 9,
    BATTLE_PET_FAMILY_MECHANICAL = 10,

    BATTLE_PET_FAMILY_MAX,
};
