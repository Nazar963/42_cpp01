CC = g++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp Harl.cpp
EXE = harlFilter

all: $(EXE)

$(EXE):
	$(CC) $(CFILES) Harl.hpp -o harlFilter

clean:
	rm harlFilter

fclean: clean

re: fclean all

.PHONY: all clean flcean re