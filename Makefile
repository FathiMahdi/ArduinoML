SRC = files/main.cpp
OBJ = files/run
COMPILER = avr-gcc
FLAGS += -Wall
FLAGS += -Werror
FLAGS += -O1
MCU = atmega328
FLAGS += -mmcu=$(MCU)
PROGRAMER = arduino 


all:

compile:
	$(COMPILER) $(SRC) -o $(OBJ) $(FLAGS)

flash:
	avrdude -p $(MCU) -c $(ROGRAMER) -U flash:w:$(OBJ):i -F -P usb

clear:



