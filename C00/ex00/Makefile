NAME=megaphone
CC= c++ -Wall -Wextra -Werror -std=c++98

SOURCES = megaphone.cpp

OBJECTS=$(SOURCES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(NAME)

clean :
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)
re: fclean all
	