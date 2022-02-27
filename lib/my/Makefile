##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile for day10
##

SRC	=	my_find_prime_sup.c			\
		my_is_prime.c  				\
		my_revstr.c					\
		my_strcpy.c					\
		my_str_isprintable.c		\
		my_strncat.c				\
		my_strupcase.c				\
		my_getnbr.c					\
		my_putchar.c				\
		my_strcapitalize.c			\
		my_str_isalpha.c			\
		my_str_isupper.c			\
		my_strncmp.c				\
		my_swap.c					\
		my_compute_power_rec.c		\
		my_put_nbr.c				\
		my_strcat.c					\
		my_str_islower.c			\
		my_strlen.c					\
		my_strncpy.c				\
		my_compute_square_root.c	\
		my_isneg.c					\
		my_putstr.c					\
		my_strcmp.c					\
		my_str_isnum.c				\
		my_strlowcase.c				\
		my_strstr.c					\
		my_printf.c					\
		check_type.c				\
		check_format.c				\
		conversions.c				\
		tools.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):
	make clean
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	make clean
	make copy

clean:
	rm -f $(OBJ)
	rm -f *~

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

copy:
	cp $(NAME) ../$(NAME)
	cp my.h ../../include/my.h
