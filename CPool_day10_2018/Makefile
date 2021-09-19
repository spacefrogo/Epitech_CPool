##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC: .c=.o)

NAME	=	libmy

all:	$(NAME) copy

$(NAME): $(SRC)
	gcc -c $(SRC)
	ar rc libmy.a $(OBJ)

copy:
