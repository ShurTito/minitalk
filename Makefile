# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antferna <antferna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 12:36:18 by antferna          #+#    #+#              #
#    Updated: 2023/07/26 17:02:58 by antferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = client
NAME_S = server
NAME_C_BONUS = client_bonus
NAME_S_BONUS = server_bonus

SRC_C = src/client.c 
SRC_S = src/server.c
SRC_C_BONUS = srcb/client_bonus.c 
SRC_S_BONUS = srcb/server_bonus.c

OBJ_C = $(SRC_C:.c=.o)
OBJ_S = $(SRC_S:.c=.o)
OBJ_C_BONUS = $(SRC_C_BONUS:.c=.o)
OBJ_S_BONUS = $(SRC_S_BONUS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -fr

all: 			$(NAME_C) $(NAME_S)

$(NAME_C):		$(SRC_C) $(LIBFT)
				$(CC) $(CFLAGS) $(SRC_C) -o $(NAME_C) $(LIBFT) 

$(NAME_S):		$(SRC_S) $(LIBFT)
				$(CC) $(CFLAGS) $(SRC_S) -o $(NAME_S) $(LIBFT) 

$(NAME_C_BONUS):$(SRC_C_BONUS) $(LIBFT)
				$(CC) $(CFLAGS) $(SRC_C_BONUS) -o $(NAME_C_BONUS) $(LIBFT)

$(NAME_S_BONUS):$(SRC_S_BONUS) $(LIBFT)
				$(CC) $(CFLAGS) $(SRC_S_BONUS) -o $(NAME_S_BONUS) $(LIBFT)

$(LIBFT):
				make -s -C $(LIBFT_PATH)

bonus:			$(NAME_C_BONUS) $(NAME_S_BONUS)

clean:
				make clean -s -C $(LIBFT_PATH)
fclean:			clean
				$(RM) $(NAME_C_BONUS) $(NAME_C) $(NAME_S_BONUS) $(NAME_S)
				make fclean -s -C $(LIBFT_PATH)

re: 			fclean all


.PHONY: all re clean fclean bonus 
