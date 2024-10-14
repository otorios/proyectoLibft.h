/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:25:37 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/10 16:33:57 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H   // Si LIBFT_H no está definido...
#define LIBFT_H   // Defínelo para evitar inclusiones múltiples

// Aquí van las declaraciones de las funciones

int ft_isascii(int x);
int ft_toupper(int x);
int ft_tolower(int x);
int	ft_isdigit(char number);
int	ft_isalpha(char str);
int ft_isalnum(char x);
int	ft_isprint(int x);
int ft_strlen(const char *str);
void ft_bzero(void *s, int n);
//void ft_memset(char *x, int value, size_t varsize, size_t buffer_size);
void    *ft_memcpy(const void	*source, void	*dest, size_t	num);
//int ft_strchr(char *str, char x);
//char *ft_strrchr(char *str, char x);
//char *ft_memchr (const char    *str, int  byte_x, size_t   byte_lenght);
int	ft_memcmp(const void	*str1, const void	*str2, size_t	byte_size);
char	*ft_strdup(const char	*s);
//----------
void	ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
//itoa
char	*ft_substr(char const	*s, unsigned int start, size_t	len);
char	*ft_strtrim(char const	*s1, char const	*set);
void	ft_striteri(char	*s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const	*s, char c);
#endif  // Termina el bloque de la guarda
