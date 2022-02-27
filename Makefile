##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile for my_printf
##

NAME		=	bsq

SRC		=	sources/bsq.c					\
			sources/tools_handlefile.c		\
			sources/tools_square.c			\
			sources/find_biggest_square.c

MAIN	=	sources/main.c

OBJ		=	$(SRC:.c=.o)
OBJ		+=	$(MAIN:.c=.o)

TEST_SRC	=	$(SRC)					\
				tests_bsq.c

TEST_NAME	=	unit-tests

TEST_FLAGS	=	--coverage -lcriterion

CFLAGS		=	-Wall -Wextra -Wshadow

LIB_FLAGS	=	-L./lib/my -lmy

CC			=	gcc

all : lib $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC) $(MAIN) $(LIB_FLAGS) $(CFLAGS)
	make clean

lib:
	make -C ./lib/my

clean:
	rm -f *~
	rm -f */*~
	rm -f */*/*~
	rm -f '#'*'#'
	rm -f */'#'*'#'
	rm -f */*/'#'*'#'
	rm -f $(OBJ)

fclean: clean fclean_tests
	make fclean -C lib/my
	rm -f $(NAME)

tests_make: lib
	$(CC) -o $(TEST_NAME) $(TEST_SRC) $(LIB_FLAGS) $(TEST_FLAGS) $(CFLAGS)

tests_run: tests_make
	./$(TEST_NAME)
	make coverage

coverage:
	gcovr --exclude lib/

clean_tests: clean
	rm -f *.gc*

fclean_tests:
	make clean_tests
	rm -f $(NAME_TEST)

re: fclean all

debug:	CFLAGS += -g
debug:	re

.PHONY: all $(NAME) lib clean fclean re
