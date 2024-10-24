/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:13:53 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/24 14:50:37 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;
	size_t	x;

	if (!*little)
		return ((char *)big);
	if (len == 0)
		 return (NULL);
	little_len = 0;
	while (little[little_len] != '\0')
		little_len++;
	i = 0;
	while (big[i] != '\0' && i <= len - little_len)
	{
		x = 0;
		while (x < little_len && big[i + x] == little[x])
			x++;
		if (x == little_len)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	printf("Test de ft_strnstr\n");
	
	// Caso 1: Haystack nulo
	const char *haystack1 = "";
	const char *needle1 = "world";
	char *result1 = ft_strnstr(haystack1, needle1, 12); 
	// Limitar a 12 caracteres
	printf("Test 1:\n");

	printf("Haystack: ");
	if (haystack1 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", haystack1);

	printf("Needle: %s\n", needle1);
	printf("Longitud: %u\n", 12);

	printf("Resultado: ");
	if (result1 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", result1);
	printf("Esperado: NULL (haystack es vacio)\n\n");

	// Caso 2: Longitud de búsqueda menor que la longitud de needle
	const char *haystack2 = "Hello, world!";
	const char *needle2 = "world";
	char *result2 = ft_strnstr(haystack2, needle2, 5); 
	// Solo buscar los primeros 5 caracteres
	printf("Test 2:\n");

	printf("Haystack: %s\n", haystack2);
	printf("Needle: %s\n", needle2);
	printf("Longitud: %u\n", 5);

	printf("Resultado: ");
	if (result2 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", result2);
	printf("Esperado: NULL (la longitud es menor que el needle)\n\n");

	// Caso 3: Coincidencia completa dentro del límite
	const char *haystack3 = "Hello, world!";
	const char *needle3 = "world";
	char *result3 = ft_strnstr(haystack3, needle3, 12); 
	// Limitar a 12 caracteres
	printf("Test 3:\n");

	printf("Haystack: %s\n", haystack3);
	printf("Needle: %s\n", needle3);
	printf("Longitud: %u\n", 12);

	printf("Resultado: ");
	if (result3 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", result3);
	printf("Esperado: 'world!' (coincidencia completa)\n\n");

	// Caso 4: Needle vacío
	const char *haystack4 = "Hello, world!";
	const char *needle4 = "";
	char *result4 = ft_strnstr(haystack4, needle4, 12); // Needle vacío
	printf("Test 4:\n");

	printf("Haystack: %s\n", haystack4);
	printf("Needle: '%s'\n", needle4);
	printf("Longitud: %u\n", 12);

	printf("Resultado: ");
	if (result4 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", result4);
	printf("Esperado: 'Hello, world!' (needle vacío)\n\n");
	
	// Caso 5: haystack5 y Needle vacío
	const char *haystack5 = "";
	const char *needle5 = "";
	char *result5 = ft_strnstr(haystack5, needle5, 12); // Needle vacío
	printf("Test 5:\n");

	printf("Haystack: %s\n", haystack5);
	printf("Needle: '%s'\n", needle5);
	printf("Longitud: %u\n", 12);

	printf("Resultado: ");
	if (result5 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", result5);
	printf("Esperado: '' (haystack y needle vacío)\n\n");

	const char *haystack6 = "lorem ipsum dolor sit amet";
	const char *needle6 = "dolor";
	char *result6 = ft_strnstr(haystack6, needle6, 0); 
	// Limitar a 12 caracteres
	printf("Test 6:\n");

	printf("Haystack: ");
	if (haystack6 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", haystack6);

	printf("Needle: %s\n", needle6);
	printf("Longitud: %u\n", 12);

	printf("Resultado: ");
	if (result6 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", result6);
	printf("Esperado: NULL (haystack es vacio)\n\n");
    
    return (0);
}