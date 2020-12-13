src = $(wildcard *.cpp)
#可以过滤掉src中不想编译的文件
src := $(filter-out tinyxml2.cpp, $(src))
targets = $(patsubst %.cpp, %, $(src))
INCLUDE = -I ./
CC = g++
CFLAGS =  -g -std=c++11 
#-Wall
LIBS  = -lm -lstdc++ 
all:$(targets)

$(targets):%:%.cpp
	$(CC) $(INCLUDE) $(CFLAGS)  $< -o $@ $(LIBS)

.PHONY:clean all
clean:
	-rm -rf $(targets) 
