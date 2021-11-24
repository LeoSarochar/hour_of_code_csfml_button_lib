##
## EPITECH PROJECT, 2021
## button_lib
## File description:
## Makefile
##

CC	=	gcc

TARGET	=	best_code_of_the_world

SRC	=	src/main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -Wextra -I./include

LDFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system

all:	$(OBJ)
	$(CC) $(LDFLAGS) -o $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(TARGET)

re:	fclean all