##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile the libmy
##

CC = gcc

RM = rm -f

SRC =	hidenp.c

OBJ = $(SRC:.c=.o)

NAME = hidenp

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
