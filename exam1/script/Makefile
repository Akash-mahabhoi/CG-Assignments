CC = g++
INC = ./inc
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: number

number: $(OBJ)/number.o
		$(CC) $(LFLAGS) $(BIN)/number1 $(OBJ)/number1.o

$(OBJ)/number1.o: $(SRC)/number1.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/number1.cpp 
			mv *.o $(OBJ)


clean:
		rm -f a.out number1
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/number1 
