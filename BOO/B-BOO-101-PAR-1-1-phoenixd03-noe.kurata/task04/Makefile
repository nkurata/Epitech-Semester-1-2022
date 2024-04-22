##
## EPITECH PROJECT, 2022
## B-BOO-101-PAR-1-1-phoenixd03-noe.kurata
## File description:
## Makefile
##

SRC 	=	show_params.c

NAME	=	show_params

all:
	make -C ../lib/phoenix
	gcc -o $(NAME) $(SRC) -Iincludes -L../lib/phoenix -lphoenix

clean:
	make clean -C ../lib/phoenix

fclean:	clean
	make fclean -C ../lib/phoenix
	rm -f $(NAME)

re: fclean all
