##
## EPITECH PROJECT, 2022
## B-CPE-110-PAR-1-2-BSQ-noe.kurata
## File description:
## Makefile
##

NAME	=	bsq

SRC		=	src/main.c 		\
			src/errorhandling.c	\
			src/array_2_int.c	\
			src/str_2_num.c	\
			src/algorithm.c	\
			src/getsquare.c	\
			src/generate_map.c	\
			src/str_2_arr.c	\
			src/count_columns.c	\
			src/misc.c	\
			src/launch_bsq.c \

INCLUDE	=	-Iinclude -Lprint/ -lmy

CFLAGS	=	-W -Wall -Wextra

all:
	make -C print/
	gcc -o $(NAME) $(SRC) $(INCLUDE) $(CFLAGS) -g3

clean:
	make clean -C print/

fclean:	clean
	make fclean -C print/
	rm -f $(NAME)

re: fclean all
