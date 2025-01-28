SRCS	= ft_printf.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_strlen.c ft_putchar.c printd.c printc.c printp.c printx.c printX.c printu.c prints.c 

OBJS	= ${SRCS:.c=.o}

CC	= cc

RM	= rm -f

CFLAGS    = -Wall -Wextra -Werror

NAME    = libftprintf.a

EXEC = printf

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}:    ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
	${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: clean fclean all re