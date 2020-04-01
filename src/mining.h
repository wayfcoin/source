#ifndef BITCOIN_MINING_H
#define BITCOIN_MINING_H

#include "bignum.h"

/** Minimum nCoinAge required to stake PoS */
static const unsigned int nStakeMinAge = 2 / 60; // 30 minutes
/** Time to elapse before new modifier is computed */
static const unsigned int nModifierInterval = 2 * 60;
/** Genesis block subsidy */
static const int64_t nGenesisBlockReward = 1 * COIN;
/** Reserve block subsidy */
static const int64_t nBlockRewardReserve = 1840010 * COIN; //
/** Starting block subsidy */
static const int64_t nBlockPoWReward = 1 * COIN;
/** Altered block subsidy */
static const int64_t nBlockPoWReward_2 = 5.5 * COIN;
/** Superblock modifier */
static const int64_t nSuperModifier = 2;
/** PoS Reward */
static const int64_t COIN_YEAR_REWARD = 2 * COIN; // Corrected in v1.0.2.0+
/** PoS Reward Fixed */
static const int64_t COIN_YEAR_REWARD_FIXED = 2 * CENT; // 1.5%
/** PoS Superblock Reward */
static const int64_t COIN_SPRB_REWARD = 2 * COIN; // Corrected in v1.0.2.0+
/** PoS Superblock Reward Fixed */
static const int64_t COIN_SPRB_REWARD_FIXED = 2 * CENT; // 3%
/** MN Reward Fixed */
static const int64_t MN_REWARD_FIXED = 4 * CENT; // 9% total, 1.5%/3% for standard net, 7.5%/6% for MNs
/** PoS Reward Static */
static const int64_t STATIC_POS_REWARD = 1 * COIN;
/** PoS Reward Multiplier */
static const int64_t STATIC_POS_MULTIPLIER = 125;
/** Block spacing preferred */
static const int64_t BLOCK_SPACING = 2 * 60;
/** Block spacing minimum */
static const int64_t BLOCK_SPACING_MIN = 1 * 60;
/** Block spacing maximum */
static const int64_t BLOCK_SPACING_MAX = 3 * 60;
/** Desired block times/spacing */
static const int64_t GetTargetSpacing = BLOCK_SPACING;
/** Darksend collateral */
static const int64_t DARKSEND_COLLATERAL = (0.01*COIN);
/** Darksend pool values */
static const int64_t DARKSEND_POOL_MAX = (4999.99*COIN);
/** MasterNode required collateral */
inline int64_t MasternodeCollateral(int nHeight) { return 5000; } // 50K WAYF required as collateral
/** Coinbase transaction outputs can only be staked after this number of new blocks (network rule) */
static const int nStakeMinConfirmations = 5;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int nCoinbaseMaturity = 5; // 15-TXs | 90-Mined

#endif // BITCOIN_MINING_H