CC = g++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp
EXE = Brain

all: $(EXE)

$(EXE):
	$(CC) $(CFILES) -o Brain

clean:
	rm Brain

fclean: clean

re: fclean all

.PHONY: all clean flcean re