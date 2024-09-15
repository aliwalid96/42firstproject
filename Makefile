CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_isalnum.c ft_isalpha.c ft_isasci.c ft_isdigit.c ft_isprint.c \
	ft_strchr.c ft_strlen.c ft_strrchr.c ft_tolower.c ft_toupper.c strncmp.c
OBJECTS = $(SRCS:.c=.o)
all: $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<
$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJECTS)
	/bin/rm -f .ft_*
	/bin/rm -f .*.swp
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
