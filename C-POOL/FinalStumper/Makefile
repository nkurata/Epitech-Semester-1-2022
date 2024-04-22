##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

NAME	=	rush3

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_putnbr.c	\
		rush3.c	\
		check_length.c	\
		main.c	\

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
