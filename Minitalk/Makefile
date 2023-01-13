NAME = 
SERVER = server
CLIENT = client

LIBFT 		= ./Libft/libft.a
LIBFT_DIR 	= ./Libft
PRINTF		= ./ft_printf/printf.a
PRINTF_DIR  = ./ft_printf

SRC_S	 = server.c
SRC_C	 = client.c
INCLUDE	 = -I. -I$(LIBFT_DIR) -I$(LIBFT_DIR)/stack \
				-I$(PRINTF_DIR) -I$(PRINTF_DIR)/stack \

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all: $(SERVER) $(CLIENT)

$(NAME): all

$(SERVER) : $(LIBFT)
	$(CC) $(CFLAGS) $(SRC_S) $(LIBFT) $(PRINTF) $(INC) -o $(SERVER)

$(CLIENT) : $(LIBFT)
	$(CC) $(CFLAGS) $(SRC_C) $(LIBFT) $(PRINTF) $(INC) -o $(CLIENT)

$(LIBFT) :
	$(MAKE) -C ./Libft

$(LIBFT) :
	$(MAKE) -C ./ft_printf

clean: 
	$(RM) $(SERVER) $(CLIENT)

fclean: clean
	$(RM) $(SERVER) $(CLIENT)
	$(MAKE) fclean -C $(LIBFT_DIR) $(PRINTF_DIR)

re: fclean all

.PHONY: all clean fclean re