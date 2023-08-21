#!/bin/bash
wget -P https://github.com/collinmorudi/alx-low_level_programming/master/0x18-dynamic_libraries/random.so
export LD_PRELOAD=random.so
