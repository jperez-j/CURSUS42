NAME = printf.a

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
	$(AR) $(NAME) $(OBJS)

clean: 
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean re 