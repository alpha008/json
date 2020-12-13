#!/bin/sh
src = $(wildcard *.cpp)
src := $(filter-out cJSON.c, $(src))
targets = $(patsubst %.cpp, %, $(src))
INCLUDE = ./proto/IM.BaseDefine.pb.cc ./proto/IM.Login.pb.cc
CC = g++
#标志位置中有些需要加上带上开源源文件一起编译
CFLAGS =  -g   
#-Wall
LIBS  = -lm -lstdc++  `pkg-config --cflags --libs protobuf`
all:$(targets)

$(targets):%:%.cpp
	$(CC) $(INCLUDE) $(CFLAGS)  $< -o $@ $(LIBS)

.PHONY:clean all
clean:
	-rm -rf $(targets) 
	-rm -rf *.cc *.h
#g++ -std=c++11 IM.BaseDefine.pb.cc IM.Login.pb.cc code_test.cpp -o test `pkg-config --cflags --libs protobuf`