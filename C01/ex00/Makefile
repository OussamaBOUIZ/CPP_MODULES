NAME=zombie
CC=c++ -Wall -Wextra -Werror -std=c++98
RM=rm -rf
SOURCES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJECTS=$(SOURCES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

