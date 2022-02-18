#!/bin/sh
ifconfig | grep \(Ethernet\) | sed 's/ *ether //g'