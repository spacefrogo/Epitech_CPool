##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)


NAME	=	infin_add

CFLAGS	=	-ggdb -g3

all:	$(NAME)

$(NAME): $(SRC)
	gcc -o $(NAME) $(SRC) $(CFLAGS)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all

.PHONY: $(NAME)

.PHONY: clean

.PHONY: fclean

.PHONY: re
