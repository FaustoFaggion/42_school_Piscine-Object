NAME		=	car
CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -std=c++98 -g

PATH_OBJ	=	./obj/

SRC			=	main.cpp \
				

OBJ			=	$(SRC:%.cpp=$(PATH_OBJ)%.o)

HEADER		=	Car.hpp

all:	$(NAME)

$(PATH_OBJ)%.o:	%.cpp $(HEADER)
	mkdir -p $(PATH_OBJ)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)
	rm -rf $(PATH_OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

run:	$(NAME)
	./$(NAME)

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)