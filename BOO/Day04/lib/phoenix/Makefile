##
## EPITECH PROJECT, 2022
## B-BOO-101-PAR-1-1-phoenixd03-noe.kurata
## File description:
## Makefile
##

SRC 		=		is_prime_number.c		\
					my_putchar.c			\
					my_strcpy.c				\
					my_strncmp.c			\
					my_strstr.c				\
					reverse_string.c		\
					show_number.c			\
					show_string.c			\
					to_number.c				\

OBJ		=		$(SRC.c=.o)

NAME	=		libphoenix.a

all:	$(OBJ)
		gcc -c $(SRC)
		ar rc $(NAME) *.o
		cp $(NAME) ../..


clean:
	rm -f *.o

fclean:	clean
		rm -f $(NAME)
		rm -f ../../$(NAME)

re:	fclean all
