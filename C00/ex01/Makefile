NAME = phonebook
CC = c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address
RM = rm -rf
SOURCES = PhoneBook.cpp utils.cpp PhoneBook_private.cpp main.cpp
OBJECTS = $(SOURCES:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)
	
re: fclean all
