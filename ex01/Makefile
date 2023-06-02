CC = g++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp zombieHorde.cpp Zombie.cpp
EXE = zombieHorde

all: $(EXE)

$(EXE):
	$(CC) $(CFILES) Zombie.hpp -o zombieHorde

clean:
	rm zombieHorde

fclean: clean

re: fclean all

.PHONY: all clean flcean re