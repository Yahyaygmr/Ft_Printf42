SRCS	=	ft_print_char.c	ft_print_hex.c	ft_print_number.c	ft_print_number_u.c	\
			ft_print_point.c	ft_print_str.c	ft_printf.c	ft_printf_.c	ft_strlen.c
OBJS	=	$(SRCS:.c=.o)
NAME	=	libftprintf.a
FLAGS	=	-Werror -Wall -Wextra
all: $(NAME)
$(NAME): $(SRCS)
	gcc -c $(FLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
		gcc -c $(FLAGS) $(SRCS)
		ar rcs $(NAME) $(OBJS)
.PHONY: all fclean re clean
