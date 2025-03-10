##
## EPITECH PROJECT, 2025
## First makefile
## File description:
## Makefile that create lib, make tests and run them
##

SRC = 	./src/main.c	\
		./src/handle_csv_parsing.c    \

OBJ = $(SRC:.c=.o)

LIB_NAME = libcuddle.a

CFLAGS = -Iinclude

all: $(BINARY_NAME)

$(BINARY_NAME): $(OBJ)
	ar rc $(BINARY_NAME) $(OBJ)
	ranlib $(BINARY_NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(BINARY_NAME)

re: fclean all
