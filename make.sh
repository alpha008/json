#!/bin/sh
g++ jsoncpp_demo01.c -o demo01 -ljsoncpp -std=c++11
g++ jsoncpp_demo02.c -o demo02 -ljsoncpp -std=c++11
g++ jsoncpp_speed.cpp -o jsoncpp_speed -ljsoncpp -std=c++11
