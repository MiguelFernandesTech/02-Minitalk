# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: migmarti <migmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 14:43:03 by migmarti          #+#    #+#              #
#    Updated: 2023/01/04 17:37:51 by migmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

LIBFT = ./libft/libft.a

CLIENT = client
SERVER = server

SRC_C = client.c
OBJ_C = $(SRC_C:%.c=%.o)

SRC_S = server.c
OBJ_S = $(SRC_S:%.c=%.o)

CLIENT_BONUS = client_bonus
SERVER_BONUS = server_bonus

BONUS_C = client_bonus.c
BONUS_OBJ_C = $(BONUS_C:%.c=%.o)

BONUS_S = server_bonus.c
BONUS_OBJ_S = $(BONUS_S:%.c=%.o)


#Rules:
all: $(SERVER) $(CLIENT)

$(LIBFT):
	@$(MAKE) -C ./libft

$(SERVER): $(OBJ_S) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ_S) $(LIBFT) -o server

$(CLIENT): $(OBJ_C) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJ_C) $(LIBFT) -o client


$(SERVER_BONUS): $(BONUS_OBJ_S) $(LIBFT)
	@$(CC) $(CFLAGS) $(BONUS_OBJ_S) $(LIBFT) -o server_bonus

$(CLIENT_BONUS): $(BONUS_OBJ_C) $(LIBFT)
	@$(CC) $(CFLAGS) $(BONUS_OBJ_C) $(LIBFT) -o client_bonus

bonus: $(SERVER_BONUS) $(CLIENT_BONUS)

clean:
	@$(MAKE) clean -C ./libft
	@$(RM) $(OBJ_S) $(OBJ_C)
	@$(RM) $(BONUS_OBJ_S) $(BONUS_OBJ_C)

fclean: clean
	@$(MAKE) fclean -C ./libft
	@$(RM) $(SERVER) $(CLIENT)
	@$(RM) $(SERVER_BONUS) $(CLIENT_BONUS)

re: fclean all
