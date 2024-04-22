##
## EPITECH PROJECT, 2022
## makecat
## File description:
## makecat
##


SRC     = cat.c

NAME    = cat

all:    $(NAME)

$(NAME):        $(SRC)
	gcc -o $(NAME) $(SRC) -L ./../lib/my/ -lmy

clean:
	rm -rf $(NAME)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all
