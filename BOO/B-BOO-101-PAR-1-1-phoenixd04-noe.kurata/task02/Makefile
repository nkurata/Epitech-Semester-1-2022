##
## EPITECH PROJECT, 2022
## B-BOO-101-PAR-1-1-phoenixd04-noe.kurata
## File description:
## Makefile
##

SRC 	=	concat_params.c		\
			main.c 				\

NAME	=	concat_params

all:
	make -C ../lib/phoenix
	gcc -o $(NAME) $(SRC) -Iincludes -L../lib/phoenix -lphoenix -g3

clean:
	make clean -C ../lib/phoenix

fclean:	clean
	make fclean -C ../lib/phoenix
	rm -f $(NAME)

re: fclean all