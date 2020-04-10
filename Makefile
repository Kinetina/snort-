
CC=g++
CFLAGS= -std=c++2a -c -Ofast -march=native -Wall
SOURCE=main.cc machinelearning.cc bayesian.cc naivebayesian.cc bayesiannetwork.cc
LDFLAGS=
OBJECTS= $(SOURCE:.cc=.o)

EXECUTABLE= bayesian