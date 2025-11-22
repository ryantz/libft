# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryatan <ryatan@student.42singapore.sg      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/22 19:58:04 by ryatan            #+#    #+#              #
#    Updated: 2025/11/22 20:18:49 by ryatan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables
EXEC = test

OBJ_DIR = obj

SOURCE_FILES = ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_strmapi.c \
			 	test.c 	

OBJECT_FILES = $(SOURCE_FILES:%.c=$(OBJ_DIR)/%.o)

CFLAGS = -Wall -Werror -Wextra

COMPILER = cc

# rules
$(EXEC): $(OBJECT_FILES)
	$(COMPILER) $(CFLAGS) -o $(EXEC) $(OBJECT_FILES) -lbsd

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(COMPILER) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(EXEC)

