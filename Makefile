##
## EPITECH PROJECT, 2022
## My_lib from tek1 - made by Lysandra
## File description:
## Makefile
##

SRC	=	$(wildcard lib/my/*.c) \

OBJ	=	$(SRC:.c=.o) \

CPPFLAGS	= -I./include

CFLAGS	=	-W -Wall -Wextra -Werror

NAME	=	My_library

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean :	clean
	$(RM) $(NAME)

re:	fclean all
