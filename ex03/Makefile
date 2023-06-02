CC = g++ -g -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
HFILES = HumanA.hpp HumanB.hpp Weapon.hpp
EXE = weapon

all: $(EXE)

$(EXE):
	$(CC) $(CFILES) $(HFILES) -o weapon

clean:
	rm weapon

fclean: clean

re: fclean all

.PHONY: all clean flcean re