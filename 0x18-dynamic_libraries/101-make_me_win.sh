#!/bin/bash
gcc *.o -fPIC -shared -o libgmwin.so
export LD_PRELOAD="$WPD/libgmwin.so"
