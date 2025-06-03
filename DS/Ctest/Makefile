CC = g++
SRC = main.cpp Maze.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = Main
#EXEC = Main.exe
$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)