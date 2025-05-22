NAME = libftprintf.a

COMPILER = cc

SRCS = ft_printf.c\
		ft_utility.c

COMPILERFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $@ $^

%.o: %.c
		$(COMPILER) $(COMPILERFLAGS) -I. -c $< -o $@

clean: 
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re