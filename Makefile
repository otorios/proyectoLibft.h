# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 16:43:00 by olalsanc          #+#    #+#              #
#    Updated: 2024/10/16 19:06:38 by olalsanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de la librería
NAME = libft.a

# Compilador y flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente
SRC = ft_atoi.c     ft_lstadd_back_bonus.c   ft_memchr.c      ft_split.c     ft_strncmp.c \
		ft_bzero.c    ft_memcmp.c      ft_strchr.c    ft_strnstr.c \
		ft_calloc.c   ft_memcpy.c      ft_strdup.c    ft_strrchr.c \
		ft_isalnum.c  ft_memmove.c     ft_striteri.c  ft_strtrim.c \
		ft_isalpha.c  ft_memset.c      ft_strjoin.c   ft_substr.c \
		ft_isascii.c  ft_putchar_fd.c  ft_strlcat.c   ft_tolower.c \
		ft_isdigit.c  ft_putendl_fd.c  ft_strlcpy.c   ft_toupper.c \
		ft_isprint.c  ft_putnbr_fd.c   ft_strlen.c \
		ft_itoa.c     ft_putstr_fd.c   ft_strmapi.c
OBJ = $(SRC:.c=.o)

SRC_BONUS= ft_lstadd_back_bonus.c   ft_lstclear_bonus.c   ft_lstiter_bonus.c  ft_lstmap_bonus.c  ft_lstsize_bonus.c \
			ft_lstadd_front_bonus.c  ft_lstdelone_bonus.c  ft_lstlast_bonus.c  ft_lstnew_bonus.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)

# Archivo main, con esto no hace flta poner en el comando gcc -Wall -Wextra -Werror -o programa main.c -L. -lft
# MAIN_SRC = main.c
# MAIN_OBJ = $(MAIN_SRC:.c=.o)

# Regla para compilar archivos .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla por defecto (compilar todo)
all: $(NAME)# Regla para crear la librería estática
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: .bonus
.bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)
	touch .bonus

# Limpieza de archivos objeto
clean:
	rm -f $(OBJ) $(OBJ_BONUS)

# Limpieza total (objetos y librería)
fclean: clean
	rm -f $(NAME) .bonus

# Regla para recompilar todo
re: fclean all

.PHONY: clean fclean re all bonus