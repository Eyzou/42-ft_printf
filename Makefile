SRC = 	ft_printf.c \
		ft_printfutils.c \
		ft_printfutils2.c

NAME = libftprintf.a

LIBFT = libft
LIBFT_A = ${LIBFT}/libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	make -C ${LIBFT}
	cp ${LIBFT_A} ${NAME}
	ar -rcs ${NAME} ${OBJ}

clean:
	rm -rf ${OBJ}
	make clean -C ${LIBFT}

fclean: clean
	rm -rf ${NAME}
	make fclean -C ${LIBFT}

re: fclean all

.PHONY: all clean fclean re
