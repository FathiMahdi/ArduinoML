SRC = main.cpp
OBJ = run
COMPILER = avr-gcc
MCU = atmega328
F_CPU = 16000000UL
FLAGS += -mmcu=$(MCU)
FLAGS += -DF_CPU=${F_CPU}
FLAGS += -Wall
FLAGS += -Werror
FLAGS += -O1
PROGRAMER = arduino 


all:

compile:
	$(COMPILER) $(SRC) -o $(OBJ) -O ihex ${OBJ}.bin ${OBJ}.hex $(FLAGS)

flash:
	avrdude -p $(MCU) -c $(ROGRAMER) -U flash:w:$(OBJ):i -F -P usb

clear:



