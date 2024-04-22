##
## EPITECH PROJECT, 2022
## B-MUL-100-PAR-1-2-myhunter-noe.kurata
## File description:
## Makefile
##

NAME	=	my_radar

CFLAGS	=	-W -Wall -Wextra

SRC		=	src/main.c

RM		=	rm -f

OBJ		=	$(SRC:.c=.o)

INCLUDE	=	-Iincludes -Llib/phoenix -lphoenix

CSFML		=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

APPLEFLAGS	=	-L/opt/homebrew/Cellar/csfml/2.5.1/lib/

all:	$(OBJ)
		make -C lib/phoenix
		gcc $(OBJ) -o $(NAME) $(SRC) $(CSFML) $(CFLAGS) $(INCLUDE)

osx: 	$(OBJ)
		make -C lib/phoenix
		gcc -o $(NAME) $(SRC) $(APPLEFLAGS) $(CSFML) $(CFLAGS) $(INCLUDE)

clean:
		make clean -C lib/phoenix
		$(RM) $(OBJ)

fclean:		clean
		make fclean -C lib/phoenix
		$(RM) $(NAME)

re: fclean all

reosx: fclean osx
