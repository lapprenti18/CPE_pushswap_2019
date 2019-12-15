##
## EPITECH PROJECT, 2019
## Bistromatic
## File description:
## Makefile
##

SRC	=	my_amazing_sorter.c	\
		operation.c	\
		add_struct.c	\

NAME	=	push_swap

OBJ	=	libmy.a

CSFML	=	-lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system

VG	=	-g3

ERROR	=	-Wall -W -Wextra

LIB	=	-L. -lmy -I include

all	:	$(OBJ)

$(OBJ)	:
	gcc -c lib/my/*.c
	ar rc $(OBJ) *.o
	gcc -o $(NAME) $(SRC) $(ERROR) $(LIB) $(VG)

clean	:
	rm -f *.o $(OBJ)

fclean	: clean
	rm -f $(NAME)

re	: fclean all
