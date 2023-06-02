CC = g++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp
EXE = replace_me

all: $(EXE)

$(EXE):
	$(CC) $(CFILES) -o replace_me

clean:
	rm replace_me

fclean: clean

re: fclean all

.PHONY: all clean flcean re