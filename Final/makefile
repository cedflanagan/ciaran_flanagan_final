all: activator grand_adventure

grand_adventure:activator.o earth.o CinReader.o
	g++ -Wall -g -o earth_read activator.o earth.o CinReader.o

activator: activator.cpp
	g++ -Wall -g -c activator.cpp