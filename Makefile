##
## EPITECH PROJECT, 2025
## First makefile
## File description:
## Makefile that create lib, make tests and run them
##

##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile
##

SRC	=	./src/main.c 					\
		./src/parsing/handle_csv_parsing.c		\

CFLAGS	+=	-iquote ./include -Wextra -Wall -pedantic -g3 -ggdb3

LDFLAGS	+=	-Llib

LDLIBS	=	-lmy

OBJ	=	$(SRC:.c=.o)

NAME	=	caca

all:    $(NAME)

$(NAME):	$(OBJ)
	make -C ./lib
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS) $(LDLIBS)

clean:
	make clean -C ./lib
	rm -f $(OBJ) $(NAME)

fclean: clean
	make fclean -C ./lib
	rm -f $(OBJ) $(NAME)

re:     fclean all
