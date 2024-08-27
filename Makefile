cc = gcc 

SCRS	= $(shell ls *.c)

OBJS	= ${SCRS:.c=.o}

NAME	= rush-02

.c.o:	${CC} -c $< -o ${<:.c=.o}

CFLAGS		=  -Wall -Wextra -Werror

all:		${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

.PHONY:		all clean fclean
