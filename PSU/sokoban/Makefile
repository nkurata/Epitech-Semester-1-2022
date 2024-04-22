##
## EPITECH PROJECT, 2022
## B-PSU-100-PAR-1-2-sokoban-noe.kurata
## File description:
## Makefile
##

SRC		=	src/my_sokoban.c		\
			src/fill_structure.c	\
			src/str_2_arr.c		\
			src/movement.c			\
			src/game_loop.c			\
			src/check.c			\
			src/check_map.c 		\


OBJ     = 		$(SRC:.c=.o)

NAME	=		 my_sokoban

INCLUDE	=		-lncurses -Iinclude -Lprint/ -lmy

CFLAGS	=		-Wall -Wextra -Werror

all:	$(OBJ)
		make -C print/
		cc -o $(NAME) $(OBJ) $(INCLUDE) $(CFLAGS)

clean:
		make -C print/ clean
		rm -f $(OBJ)

fclean: clean
		make -C print/ fclean
		rm -f $(NAME)

re: fclean all
