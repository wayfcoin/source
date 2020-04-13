apt update
apt install build-essential libtool automake autotools-dev autoconf pkg-config libssl-dev libgmp3-dev libevent-dev bsdmainutils wget -y
apt install libboost-system-dev libboost-filesystem-dev libboost-chrono-dev libboost-program-options-dev libboost-test-dev libboost-thread-dev -y
apt install software-properties-common -y
add-apt-repository ppa:bitcoin/bitcoin -y
apt update
apt install libdb4.8-dev libdb4.8++-dev -y
apt install libminiupnpc-dev -y
apt-get install zlib1g-dev -y
apt-get install libssl1.0-dev -y
wget https://github.com/wayfcoin/source/releases/download/2/Wayfcoind_boost
chmod +x Wayfcoind_boost
echo 'Wayfcoin is ready to use, usage: ./Wayfcoind_boost -daemon Then run it again so it will add all nodes from network to conf file'
