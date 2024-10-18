/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:24:02 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/18 18:46:34 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		byte;

	p = (const unsigned char *)s;
	byte = (unsigned char)c;
	while (n--)
	{
		if (*p == byte)
			return ((char *)p);
		p++;
	}
	return (NULL);
}
/* 
#include <stdio.h>

int	main(void)
{
	printf("\nTest de ft_memchr()\n");

	char strArray[10] = "Hola mundo";
	char x = 'm';
	printf("\nEsperado: Encontrar '%c' en la posición 5\n", x); 
		// Mensaje de expectativa
	char *result = ft_memchr(strArray, x, sizeof(strArray));
	if (result != NULL)
		printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
	else
		printf("Resultado: No encontrado\n");

	char x2 = 'z';
	printf("\nEsperado: No encontrar '%c'\n", x2);  // Mensaje de expectativa
	result = ft_memchr(strArray, x2, sizeof(strArray));
	if (result != NULL)
		printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
	else
		printf("Resultado: No encontrado\n");

	char x3 = ' ';
	printf("\nEsperado: Encontrar espacio en la posición 4\n"); 
		// Mensaje de expectativa
	result = ft_memchr(strArray, x3, sizeof(strArray));
	if (result != NULL)
		printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
	else
		printf("Resultado: No encontrado\n");

	char x4 = 'H';
	printf("\nEsperado: Encontrar '%c' en la posición 0\n", x4); 
		// Mensaje de expectativa
	result = ft_memchr(strArray, x4, sizeof(strArray));
	if (result != NULL)
		printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
	else
		printf("Resultado: No encontrado\n");

	char x5 = '\0';
	printf("\nEsperado: Encontrar '\\0' en la posición 9\n"); 
		// Mensaje de expectativa
	result = ft_memchr(strArray, x5, sizeof(strArray));
	if (result != NULL)
		printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
	else
		printf("Resultado: No encontrado\n");

	char x6 = 'd';
	printf("\nEsperado: Encontrar '%c' en la posición 8\n", x6); 
		// Mensaje de expectativa
	result = ft_memchr(strArray, x6, sizeof(strArray));
	if (result != NULL)
		printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
	else
		printf("Resultado: No encontrado\n");

	return (0);
	} */