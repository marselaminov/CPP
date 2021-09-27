NAME 		=	serialization

SRC			=	main.cpp

OBJ			=	$(SRC:.cpp=.o)

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(FLAGS) $(SRC) -o $(NAME)

.cpp.o:
				$(CC) $(FLAGS) -c $< -o $@

clean:
				$(RM) $(OBJ)

fclean: 		clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: 		all clean fclean re