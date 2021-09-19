##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)


NAME	=	cat

all:	$(NAME)

$(NAME): $(SRC)
	gcc -o $(NAME) $(SRC)

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
