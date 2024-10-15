# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 16:43:00 by olalsanc          #+#    #+#              #
#    Updated: 2024/09/10 16:43:03 by olalsanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de la librería
NAME = libft.a

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente
SRC = ft_isascii.c ft_toupper.c ft_tolower.c ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isprint.c ft_strlen.c ft_bzero.c ft_memset.c ft_memcpy.c ft_strchr.c ft_strrchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strtrim.c ft_striteri.c ft_strmapi.c ft_strjoin.c ft_split.c
OBJ = $(SRC:.c=.o)

# Archivo main, con esto no hace flta poner en el comando gcc -Wall -Wextra -Werror -o programa main.c -L. -lft
# MAIN_SRC = main.c
# MAIN_OBJ = $(MAIN_SRC:.c=.o)

# Regla por defecto (compilar todo)
all: $(NAME)# Regla para crear la librería estática
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Regla para compilar archivos .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpieza de archivos objeto
clean:
	rm -f $(OBJ)

# Limpieza total (objetos y librería)
fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo
re: fclean all
