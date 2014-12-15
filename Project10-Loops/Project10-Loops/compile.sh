#!/bin/bash
g++ -c Tools.cpp
g++ -c main.cpp
g++ Tools.o main.o
./a.out
