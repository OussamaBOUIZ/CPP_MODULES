NAME=weapon 
CC= c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address

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
