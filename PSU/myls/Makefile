##
## EPITECH PROJECT, 2022
## make file
## File description:
## make file
##

SRC		=	src/main.c		\

NAME	=	my_ls

NAME_LIB	=	libmy.a

INCLUDE	=	-Iinclude -Lmy_printf/ -lmy

CFLAGES	=	-W -Wall -Wextra

all:
		make -C my_printf
		gcc -o $(NAME) $(SRC) $(INCLUDE) $(CFLAGES)

clean:
		make clean -C my_printf/

fclean:	clean
		make fclean -C my_printf
		rm -f $(NAME)

re: fclean all