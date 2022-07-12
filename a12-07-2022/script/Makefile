CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all:app

app.cpp: $(OBJ)/Employee.o
		$(CC) $(LFLAGS) $(BIN)/Employee $(OBJ)/Employee.o

$(OBJ)/Employee.o: $(SRC)/Employee.cpp
		$(CC) $(CFLAGS) $(IFLAG) $(SRC)/Employee.cpp 
			mv *.o $(OBJ)


clean:
		@echo "Cleaning is in Progress"
		rm -f a.out app* .o
		rm -f *.o
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/app 

