<p align="center">
  <img src="https://raw.githubusercontent.com/wayfcoin/source/master/src/qt/res/images/about.png">
</p>

Wayfcoin [WAYF]
=====================================


What is the Wayfcoin [WAYF] Blockchain?
-------------------------------------

### Overview
Wayfcoin is a blockchain project with the goal of offering secured messaging, masternodes, and an overall pleasing experience to the user.

### Blockchain Technology
The Wayfcoin [WAYF] Blockchain is an experimental smart contract platform protocol that enables 
instant payments to anyone, anywhere in the world in a private, secure manner. 
Wayfcoin [WAYF] uses peer-to-peer blockchain technology developed by Bitcoin to operate
with no central authority: managing transactions, execution of contracts, and 
issuing money are carried out collectively by the network. Wayfcoin [WAYF] is the name of 
open source software which enables the use of this protocol.

### Custom Difficulty Retarget Algorithm “VRX”
VRX is designed from the ground up to integrate properly with the Velocity parameter enforcement system to ensure users no longer receive orphan blocks.

### Velocity Block Constraint System
Ensuring Wayfcoin stays as secure and robust as possible the Wayfcoin developers have implemented what's known as the Velocity block constraint system. This system acts as third and final check for both mined and peer-accepted blocks ensuring that all parameters are strictly enforced.


BUILD LINUX
-----------

### Dependencies install
```
apt-get update
apt-get install build-essential libtool automake autotools-dev autoconf pkg-config libssl-dev libgmp3-dev libevent-dev bsdmainutils wget -y
apt-get install libboost-system-dev libboost-filesystem-dev libboost-chrono-dev libboost-program-options-dev libboost-test-dev libboost-thread-dev -y
apt-get install software-properties-common -y
add-apt-repository ppa:bitcoin/bitcoin -y
apt-get update
apt-get install libdb4.8-dev libdb4.8++-dev -y
apt-get install libminiupnpc-dev -y
apt-get install zlib1g-dev -y
apt-get install libssl1.0-dev -y
```

### Clone and build WAYF daemon
```
cd wayfcoin/src
make -f makefile.unix
```

### Run WAYF daemon
```
./Wayfcoind
```

OR
--

### Run AppImage daemon
```
wget -O - https://raw.githubusercontent.com/wayfcoin/source/master/ubuntu_install.sh | bash
```

License
-------

Wayfcoin [WAYF] is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.
