NAME=zombie
CC=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
RM=rm -rf
SOURCES = main.cpp Zombie.cpp zombieHorde.cpp
OBJECTS=$(SOURCES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
