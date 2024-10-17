/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:25:37 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/17 19:27:35 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H   // if LIBFT_H no está definido...
# define LIBFT_H   // Defínelo para evitar inclusiones múltiples

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

// Aquí van las declaraciones de las funciones
//----------------Bonus part---------------------

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

t_list  *ft_lstnew(void *content);
void	ft_lstadd_front(t_list	**lst, t_list	*new);
int	    ft_lstsize(t_list	*lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));

//----------------1º part---------------------

int     ft_isascii(int x);
int     ft_toupper(char x);
int	    ft_tolower(char x);
int	    ft_isdigit(char number);
int	    ft_isalpha(char str);
int     ft_isalnum(char x);
int	    ft_isprint(int x);
size_t	ft_strlen(const char	*str);
void	ft_bzero(void *s, size_t n);
//void ft_memset(char *x, int value, size_t varsize, size_t buffer_size);
void    *ft_memcpy(const void	*source, void	*dest, size_t	num);
//int ft_strchr(char *str, char x);
//char *ft_strrchr(char *str, char x);
//char *ft_memchr (const char    *str, int  byte_x, size_t   byte_lenght);
int	    ft_memcmp(const void	*str1, const void	*str2, size_t	byte_size);
void	*ft_calloc(size_t	num_elements, size_t	element_size);
char	*ft_strdup(const char	*s);

//----------------2º part---------------------

void	ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	*ft_substr(char const	*s, unsigned int start, size_t	len);
char	*ft_strtrim(char const	*s1, char const	*set);
void	ft_striteri(char	*s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const	*s, char c);

#endif
