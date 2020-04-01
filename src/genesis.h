// Copyright (c) 2016-2018 The CryptoCoderz Team / Espers
// Copyright (c) 2018 The CryptoCoderz Team / INSaNE project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_GENESIS_H
#define BITCOIN_GENESIS_H

#include "bignum.h"

/** Genesis Start Time */
static const unsigned int timeGenesisBlock = 1566857302; // Mon, 01 May 2017 00:00:00 GMT
/** Genesis TestNet Start Time */
static const unsigned int timeTestNetGenesis = 1566857302; // Mon, 01 May 2017 00:00:30 GMT
/** Genesis RegNet Start Time */
static const unsigned int timeRegNetGenesis = 1566857302; // Mon, 01 May 2017 00:00:90 GMT
/** Genesis Nonce Mainnet*/
static const unsigned int nNonceMain = 283949;
/** Genesis Nonce Testnet */
static const unsigned int nNonceTest = 283949;
/** Genesis Nonce Regnet */
static const unsigned int nNonceReg = 283949;
/** Main Net Genesis Block */
static const uint256 nGenesisBlock("0x00002a8e3af249a8e5ed2c8e98406f98c2030c1cc00abe40daca2a0add8bcb42");
/** Test Net Genesis Block */
static const uint256 hashTestNetGenesisBlock("0x00002a8e3af249a8e5ed2c8e98406f98c2030c1cc00abe40daca2a0add8bcb42");
/** Reg Net Genesis Block */
static const uint256 hashRegNetGenesisBlock("0x00002a8e3af249a8e5ed2c8e98406f98c2030c1cc00abe40daca2a0add8bcb42");
/** Genesis Merkleroot */
static const uint256 nGenesisMerkle("0xadb97de451fc804e038bbf5b84bca8f713cf0f1845b37e94275f1fc7e30e62bb");

#endif // BITCOIN_GENESIS_H