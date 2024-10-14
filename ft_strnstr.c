/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:13:53 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/24 17:13:59 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Validar entrada: Comprobar si needle es una cadena vacía. 
Si lo es, simplemente devolver haystack.

Iterar sobre haystack: Recorrer haystack hasta el límite de len 
o hasta que se alcance el final de la cadena.

Buscar coincidencias: Para cada carácter en haystack, verificar 
si el resto de la cadena contiene needle.

Devolver resultado: Si se encuentra needle, devolver el puntero al 
inicio de la coincidencia. Si no se encuentra ninguna coincidencia, 
devolver NULL.

src: La cadena principal donde se busca la subcadena.
str: La subcadena que se desea normi	encontrar.
len: El número máximo de caracteres de haystack a examinar.

Devuelve un puntero a la primera aparición de needle en haystack 
dentro de los primeros len caracteres.
Si needle es una cadena vacía, devuelve haystack.
Si no se encuentra needle, devuelve NULL.

recorremmos solo hasta donde puede ser que entre la palabra que buscamos, 
el resto de posiciones nada. Por eso la resta
	while (src[i] != '\0' && i <= len - found_len )
Si needle completo coincide, retornar puntero al inicio de la coincidencia
		if (x == found_len)
			return ((char *)(src + i));
*/
//#include <stdio.h>
#include <stddef.h>
char	*ft_strnstr(const char *src, const char *found, size_t len)
{
	size_t	found_len;
	size_t	i;
	size_t	x;

	if (!*found)
		return ((char *)src);
	found_len = 0;
	while (found[found_len] != '\0')
		found_len++;
	i = 0;
	while (src[i] != '\0' && i <= len - found_len)
	{
		x = 0;
		while (x < found_len && src[i + x] == found[x])
			x++;
		if (x == found_len)
			return ((char *)(src + i));
		i++;
	}
	return (NULL);
}
/*
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
    
    return (0);
}
*/
