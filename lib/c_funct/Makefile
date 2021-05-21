##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

CC	=	gcc

LIB	= 	ar rc

RM	=	rm -f

NAME	=	libc_funct.a

PATH_INCLUDE	= 	./include/

PATH_SRC 	=	./src/

CFLAGS		+=	-I$(PATH_INCLUDE)

SRC	=	src/my_capitalize.c				\
		src/my_compute_power_rec.c		\
		src/my_compute_square_root.c	\
		src/my_getnbr.c					\
		src/my_intlen.c					\
		src/my_isneg.c					\
		src/my_put_nbr.c				\
		src/my_putchar.c				\
		src/my_putstr.c					\
		src/my_revstr.c					\
		src/my_str_isalpha.c			\
		src/my_str_islower.c			\
		src/my_str_isnum.c				\
		src/my_char_isnum.c				\
		src/my_atoi.c					\
		src/my_cut.c					\
		src/my_index_of.c				\
		src/my_strdup.c					\
		src/my_count_char.c				\
		src/my_str_isprintable.c		\
		src/my_str_isupper.c			\
		src/my_strcat.c					\
		src/my_strcmp.c					\
		src/my_strcpy.c					\
		src/init_int_matrix.c			\
		src/my_strlen.c					\
		src/my_strlowcase.c				\
		src/my_strupcase.c				\
		src/my_swap.c					\

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all