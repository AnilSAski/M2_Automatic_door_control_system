PROJ_NAME = Auto_door

BUILD_DIR = Build

# All Source code files
SRC = door.c\
src/pin_in.c

# All header file paths
INC = -I inc



# Command to make to consider these names as targets and not as file names in folder

all:$(BUILD_DIR)
# Compile the code and generate the ELF file
	avr-gcc -g -Wall -Os -mmcu=atmega328   -DF_CPU=16000000UL $(SRC)  $(INC) -o $(BUILD_DIR)/$(PROJ_NAME).elf

$(BUILD_DIR):
# Create directory to store the built files
	mkdir $(BUILD_DIR)

analysis: $(SRC)
# Analyse the code using Cppcheck command line utility
	cppcheck --enable=all $^



clean:
# Remove all the build files and generated document files
	rm -rf $(BUILD_DIR)/*
	