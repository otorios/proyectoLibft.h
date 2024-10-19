/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:12:54 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/19 10:40:45 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (src_len == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
    char dest[10];
    const char *src = "Hello, World!";
    
    printf("Test de ft_strcpy\n");
    
    size_t len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Copied string: %s\n", dest);
    printf("Length of source string: %zu\n", len);

	printf("Test de strlcpy (función original)\n");

	return (0);
}  */