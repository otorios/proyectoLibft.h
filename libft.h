/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:25:37 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/21 18:47:45 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H // if LIBFT_H no está definido...
# define LIBFT_H // Defínelo para evitar inclusiones múltiples
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

// Aquí van las declaraciones de las funciones
//----------------Bonus part---------------------

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

//----------------1º part---------------------

int					ft_isascii(int x);
int					ft_toupper(int x);
int					ft_tolower(int x);
int					ft_isdigit(int number);
int					ft_isalpha(int str);
int					ft_isalnum(int x);
int					ft_isprint(int x);
size_t				ft_strlen(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
char				*strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *str1, const void *str2,
						size_t byte_size);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *nptr);
void				*ft_memmove(void *dest, const void *src, size_t n);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
void				*ft_calloc(size_t num_elements, size_t element_size);
char				*ft_strdup(const char *s);

//----------------2º part---------------------

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(int n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_split(char const *s, char c);

#endif
