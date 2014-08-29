#Eric Kang
#makefile for lab7
#Section 53

all:lab7

lab7:lab7.o
	g++ lab7.o -o lab7

lab7.o:lab7.cpp lab7.h
	g++ -c lab7.cpp -o lab7.o
