#!/bin/bash
wget -P /tmp https://github.com/amiassefa/alx-low_level_programming/0x17-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
