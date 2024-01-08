# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imanol <imanol@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 13:03:47 by ide-la-i          #+#    #+#              #
#    Updated: 2024/01/08 17:08:09 by imanol           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SOURCE = # files here

OBJ = $(SOURCE:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

# No idea about this
LIB = ar rc $(NAME)
RANLIB = ranlib $(NAME)

RM = rm -f

all: $(NAME)

# Compile with libft
$(NAME): $(OBJ)
		@$(MAKE) -C .libft/
		@$(CC) $(CFLAGS) $(OBJ) ./libft/libft.a -o $(NAME)



# Pedro makefile
# NAME            = $(BIN_DIR)/so_long
# MLX_DIR     = ./minilibx_opengl_20191021
# LIBFT_DIR   = ./libft
# SRC_DIR     = ./src
# OBJ_DIR     = ./obj
# BIN_DIR     = ./bin
# CC              = cc
# CFLAGS          = -Wall -Wextra -Werror
# RM              = rm -rf
# MLX_LINK_FLAGS  = -I $(MLX_DIR) -L $(MLX_DIR) -lmlx -framework OpenGL -framework AppKit
# LIBFT_LINK_FLAGS= -I $(LIBFT_DIR) -L $(LIBFT_DIR) -lft
# FILES   =   main.c \
#             create_map.c check_map.c free_map.c \
#             ft_new_sprite.c ft_new_window.c ft_update.c
# SRC     = $(addprefix $(SRC_DIR)/, $(FILES))
# OBJ     = $(addprefix $(OBJ_DIR)/, $(FILES:.c=.o))
# .PHONY : all re clean fclean
# #.SILENT :
# all : $(NAME)
# $(NAME) : $(OBJ)
#     $(MAKE) -C $(MLX_DIR)
#     $(MAKE) -C $(LIBFT_DIR)
#     mkdir -p $(BIN_DIR)
#     $(CC) $(CFLAGS) $(LIBFT_LINK_FLAGS) $(MLX_LINK_FLAGS) $(OBJ) -o $(NAME)
# $(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
#     mkdir -p $(OBJ_DIR)
#     $(CC) $(CFLAGS) -c $< -o $@
# re : fclean all
# fclean : clean
#     $(RM) $(BIN_DIR)
#     $(MAKE) -C $(LIBFT_DIR) fclean
# clean :
#     $(RM) $(OBJ_DIR)
#     $(MAKE) -C $(LIBFT_DIR) clean
#     $(MAKE) -C $(MLX_DIR) clean