##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy

all:	$(NAME) copy

$(NAME): $(SRC) $(OBJ)
	gcc -c $(SRC)
	ar rc libmy.a $(OBJ)

copy:
	cp -f libmy.a ../
	@echo -n "[ "	
	@echo -n -e "\e[1;32mOK\e[0m"
	@echo -n " ] "
	@echo -e "\e[1;31mCOPYING THE libmy.a ...\e[0m"
	cp -f my.h ../../include/
	@echo -n "[ "	
	@echo -n -e "\e[1;32mOK\e[0m"
	@echo -n " ] "
	@echo -e "\e[1;31mCOPYING THE my.h ...\e[0m"

clean:
	rm -f $(OBJ)
	@echo -n "[ "	
	@echo -n -e "\e[1;32mOK\e[0m"
	@echo -n " ] "
	@echo -e "\e[1;31mREMOVED THE OBJECT FILES ...\e[0m"

fclean:	clean
	rm -f $(NAME)
	@echo -n "[ "	
	@echo -n -e "\e[1;32mOK\e[0m"
	@echo -n " ] "
	@echo -e "\e[1;31mREMOVED THE BINARY ...\e[0m"


re:	fclean all
	@echo -n "[ "	
	@echo -n -e "\e[1;32mOK\e[0m"
	@echo -n " ] "
	@echo -e "\e[1;31mREMOVED ALLLLLLLLlllll ...\e[0m"
