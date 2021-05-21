##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

CC	=	gcc

LD	=	$(CC)

RM	=	rm -f

NAME	=	bsq

CFLAGS	+=	-I./include -g3

PATH_LIB	=	./lib/c_funct/

SRC	=	src/main.c	\
		src/error_handling/error_handling.c	\
		src/error_handling/check_first_line.c		\
		src/error_handling/check_nbr_lines.c		\
		src/error_handling/check_each_line.c		\
		src/error_handling/check_chars.c		\
		src/error_handling/is_file_existing.c	\
		src/read_file.c						\
		src/getters/get_column.c			\
		src/getters/get_lines.c				\
		src/bsq/bsq.c						\
		src/bsq/get_biggest_square.c			\
		src/bsq/translate_map.c				\
		src/inits/init_sqr_struct.c			\

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		make -C $(PATH_LIB)
		$(LD) -o $(NAME) $(OBJ) -L$(PATH_LIB) -lc_funct

clean:
	make clean -C $(PATH_LIB)
	$(RM) $(OBJ)

fclean:
	make fclean -C $(PATH_LIB)
	make clean
	$(RM) $(NAME)

re: fclean all