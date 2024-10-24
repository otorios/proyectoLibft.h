/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:12:54 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/24 19:28:29 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	int	i;
	int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (src_len == 0)
		return (src_len);
	i = 0;
	while (i < (int)size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t)src_len);
}
/* 
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[10];
    const char *src = "Hello, World!";
    
    printf("Test de ft_strlcpy\n");
    
    size_t len = ft_strlcpy(dest, src, 0);

    printf("Copied string: %s\n", dest);
    printf("Length of source string: %zu\n", len);
    
    // Test con cadena vacía
    const char *empty_src = "";
    printf("\nTest con cadena vacía\n");
    len = ft_strlcpy(dest, empty_src, sizeof(dest));
    printf("Copied string (con cadena vacía): '%s'\n", dest);
    printf("Length of source string (con cadena vacía): %zu\n", len);
    
    printf("Test de strlcpy (función original)\n");
    
    // Test con cadena vacía para strlcpy
    len = ft_strlcpy(dest, empty_src, sizeof(dest));
    printf("Copied string (strlcpy con cadena vacía): '%s'\n", dest);
    printf("Length of source string (strlcpy con cadena vacía): %zu\n", len);
} */