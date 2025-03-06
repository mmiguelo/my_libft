# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 19:51:11 by mmiguelo          #+#    #+#              #
#    Updated: 2024/10/15 19:51:11 by mmiguelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

#==============================================================================#
#                               NAMES                                          #
#==============================================================================#

CC = cc
CFLAGS = -Wall -Werror -Wextra -g
RM = rm -f
INC = -I./includes

NAME = libft.a

#==============================================================================#
#                               FOLDERS                                        #
#==============================================================================#

OBJ_DIR = obj

GENERAL = ft_atoi
GENERAL += ft_atol
GENERAL += ft_bzero
GENERAL += ft_calloc
GENERAL += ft_isalnum
GENERAL += ft_isalpha
GENERAL += ft_isascii
GENERAL += ft_isdigit
GENERAL += ft_isprint
GENERAL += ft_itoa
GENERAL += ft_memchr
GENERAL += ft_memcmp
GENERAL += ft_memcpy
GENERAL += ft_memmove
GENERAL += ft_memset
GENERAL += ft_putchar_fd
GENERAL += ft_putendl_fd
GENERAL += ft_putnbr_fd
GENERAL += ft_putstr_fd
GENERAL += ft_split
GENERAL += ft_strchr
GENERAL += ft_strdup
GENERAL += ft_striteri
GENERAL += ft_strjoin
GENERAL += ft_strlcat
GENERAL += ft_strlcpy
GENERAL += ft_strlen
GENERAL += ft_strmapi
GENERAL += ft_strcmp
GENERAL += ft_strncmp
GENERAL += ft_strnstr
GENERAL += ft_strrchr
GENERAL += ft_strtrim
GENERAL += ft_substr
GENERAL += ft_tolower
GENERAL += ft_toupper
GENERAL += ft_lstnew
GENERAL += ft_lstadd_front
GENERAL += ft_lstsize
GENERAL += ft_lstlast
GENERAL += ft_lstadd_back
GENERAL += ft_lstdelone
GENERAL += ft_lstclear
GENERAL += ft_lstiter
GENERAL += ft_lstmap

FT_PRINTF = ft_printf
FT_PRINTF += ft_putchar
FT_PRINTF += ft_puthex
FT_PRINTF += ft_putnbr
FT_PRINTF += ft_putptr
FT_PRINTF += ft_putstr
FT_PRINTF += ft_pututoa

GET_NEXT_LINE = get_next_line
GET_NEXT_LINE += get_next_line_utils

#==============================================================================#
#                                PATHS                                         #
#==============================================================================#

VPATH += src
VPATH += src/ft_printf
VPATH += src/get_next_line

#==============================================================================#
#                                FILES                                         #
#==============================================================================#

SRC += $(addsuffix .c, $(GENERAL))
SRC += $(addsuffix .c, $(FT_PRINTF))
SRC += $(addsuffix .c, $(GET_NEXT_LINE))

OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

#==============================================================================#
#                                    RULES                                     #
#==============================================================================#

all: $(NAME)

$(NAME): $(OBJ)
		@ar rcs $(NAME) $(OBJ)

$(OBJ_DIR):
		mkdir -p obj

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
		@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

clean:
		@$(RM) $(OBJ)

fclean: clean
		@rm -rf $(OBJ_DIR)
		@$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
