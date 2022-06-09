SRC	=	srcs/main.c			\
		srcs/ft_putstr.c	\
		srcs/ft_putnbr.c	\
		srcs/multiply.c		\

OBJ =	srcs/main.o			\
		srcs/ft_putstr.o	\
		srcs/ft_putnbr.o	\
		srcs/multiply.o		\

NAME =	prog

CFLAGS = -Wall -Wextra -Werror -Iinclude/

${NAME}: ${OBJ}
	gcc ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.c
	gcc ${CFLAGS} -c $< -o $@

