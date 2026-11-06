NAME	= megaphone
CC		= c++
CFLAGS	= -Wextra -Werror -Wall -std=c++98

SRC		= megaphone.cpp
OBJ		= megaphone.o

all: $(NAME)

$(NAME): Makefile $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re