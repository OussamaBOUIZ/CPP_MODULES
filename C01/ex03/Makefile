NAME=weapon 
CC= c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98

SOURCES = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

OBJECTS=$(SOURCES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

clean :
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)
re: fclean all
