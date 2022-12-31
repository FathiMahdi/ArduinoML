SRC = files/main.cpp
OBJ = files/run
COMPILER = gcc-avr
FLAGS = -std=c99
FLAGS += -Wall
FLAGS += -Waerror
MCU = atmega328
PROGRAMER = arduino 


all:

compile:
	$(COMPILER) $(SRC) $(OBJ) $(FLAGS)

flash:

clear:



