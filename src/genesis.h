// Copyright (c) 2020 The Wayfcoin Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_GENESIS_H
#define BITCOIN_GENESIS_H

#include "bignum.h"

/** Genesis Start Time */
static const unsigned int timeGenesisBlock = 1586858578; // Mon, 01 May 2017 00:00:00 GMT
/** Genesis TestNet Start Time */
static const unsigned int timeTestNetGenesis = 1586858578; // Mon, 01 May 2017 00:00:30 GMT
/** Genesis RegNet Start Time */
static const unsigned int timeRegNetGenesis = 1586858578; // Mon, 01 May 2017 00:00:90 GMT
/** Genesis Nonce Mainnet*/
static const unsigned int nNonceMain = 354066;
/** Genesis Nonce Testnet */
static const unsigned int nNonceTest = 354066;
/** Genesis Nonce Regnet */
static const unsigned int nNonceReg = 354066;
/** Main Net Genesis Block */
static const uint256 nGenesisBlock("0x00000ca0786f3090f171c2a1ac73635a33295e829133c168acd38ac689ab3978");
/** Test Net Genesis Block */
static const uint256 hashTestNetGenesisBlock("0x00000ca0786f3090f171c2a1ac73635a33295e829133c168acd38ac689ab3978");
/** Reg Net Genesis Block */
static const uint256 hashRegNetGenesisBlock("0x00000ca0786f3090f171c2a1ac73635a33295e829133c168acd38ac689ab3978");
/** Genesis Merkleroot */
static const uint256 nGenesisMerkle("0xadb97de451fc804e038bbf5b84bca8f713cf0f1845b37e94275f1fc7e30e62bb");

#endif // BITCOIN_GENESIS_H
