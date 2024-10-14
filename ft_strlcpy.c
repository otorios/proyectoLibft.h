/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:12:54 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/24 17:13:00 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Calcula la longitud de src
// Si size es 0, solo devolvemos la longitud de src
// sino copia hasta size - 1 caracteres
// Asegura que el destino esté terminado en nulo

#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcpy(char	*dest, const char *src, size_t size)
{
	size_t i;
	size_t	src_len;
	
	src_len = 0;
	while(src[src_len] != '\0')
		src_len++;
	
	if (src_len == 0)
		return (src_len);
	
	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	
	return (src_len);
}

int	main(void)
{
    char dest[10];
    const char *src = "Hello, World!";
    
    printf("Test de ft_strcpy\n");
    
    size_t len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Copied string: %s\n", dest);
    printf("Length of source string: %zu\n", len);


	return (0);
}
