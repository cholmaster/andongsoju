#!/bin/sh
# Example Setup For Gram 2022 late. Use Bullo-Linux in my Git Source Tree.
modprobe -f buffer
gcc -o pat pat.c
gcc -o pattern pattern.c
nohup pat| pattern |rpl > /sys/class/net/wlp0s20f3&
cat /dev/net/tun > /dev/buffer0
cat /dev/buffer0 | tee /usr/bin/rpl | data-sanitizer | /sys/class/net/wlp0s20f3 
masterplan
