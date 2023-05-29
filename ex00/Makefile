CC = g++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

all:
	$(CC) $(CFILES) Zombie.hpp -o zombie

clean:
	rm zombie

fclean: clean

re: fclean all

.PHONY: all clean flcean re