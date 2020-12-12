#!/bin/sh
g++ -g jsoncpp_demo01.c -o demo01 -ljsoncpp -std=c++11   -L/usr/local/lib /usr/local/lib/libjsoncpp.a
g++ -g jsoncpp_demo02.c -o demo02 -ljsoncpp -std=c++11   -L/usr/local/lib /usr/local/lib/libjsoncpp.a
g++ -g jsoncpp_speed.cpp -o demo03 -ljsoncpp -std=c++11   -L/usr/local/lib /usr/local/lib/libjsoncpp.a
