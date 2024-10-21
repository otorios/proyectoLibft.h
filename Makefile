# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 16:43:00 by olalsanc          #+#    #+#              #
#    Updated: 2024/10/21 19:20:06 by olalsanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

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

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: .bonus
.bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)
	touch .bonus

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME) .bonus

re: fclean all

.PHONY: clean fclean re all bonus