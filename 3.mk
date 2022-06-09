SRC =	$(addsuffix .c, 	\
		$(addprefix srcs/,	\
		main				\
		ft_putstr			\
		ft_putnbr			\
		multiply			\
		))					\

OBJ =	${SRC:srcs/%.c=obj/%.o}

NAME =	prog

CFLAGS = -Wall -Wextra -Werror -Iinclude/

${NAME}: ${OBJ}
	gcc ${CFLAGS} ${OBJ} -o ${NAME}

obj/%.o: srcs/%.c
	gcc ${CFLAGS} -c $< -o $@

all: ${NAME}

clean:
	rm -f ${OBJ}

fclean:
	rm -f ${OBJ} ${NAME}

re: fclean all

.PHONY: all clean fclean re