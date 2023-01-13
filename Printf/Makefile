NAME = libftprintf.a

PRINTF = ft_printf.c \
		 ft_check.c \
		 ft_putchar.c \
		 ft_putstring.c \
		 ft_puthex_mayus.c \
		 ft_puthex_minus.c \
		 ft_putpointer.c \
		 ft_putdec.c \
		 ft_putunsigned.c \

OBJS = $(PRINTF:.c=.o)

CC = gcc 

CFLAGS = -Wall -Wextra -Werror

AR = ar -rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./Libft
	cp Libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS) 
	$(MAKE) clean -C ./Libft

fclean: clean
	$(RM) $(NAME) 
	$(MAKE) fclean -C ./Libft

re: fclean all

.PHONY: all clean fclean re 