NAME 		=	polymorphism

SRC			=   Animal.cpp \
                WrongAnimal.cpp \
                WrongCat.cpp \
                Cat.cpp \
                Dog.cpp \
				main.cpp

%.obj:			%.cpp
				$(CC) $(CFLAGS) -c $< -o $@

OBJ			=	$(SRC:.cpp=.o)


CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -rf

all:			$(NAME)


$(NAME):		$(OBJ)
				$(CC) $(FLAGS) $(SRC) -o $(NAME)


clean:
				$(RM) $(OBJ)

fclean: 		clean
				$(RM) $(NAME)

re:				fclean all

.PHONY: 		all clean fclean re