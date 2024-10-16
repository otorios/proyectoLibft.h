/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:53:10 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/19 14:53:34 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
0 si los bloques de memoria son iguales en los primeros n bytes.
Un valor negativo si el primer bloque es "menor" que el segundo 
(según el primer byte donde difieren).
Un valor positivo si el primer bloque es "mayor" que el segundo.
*/
#include "libft.h"


int	ft_memcmp(const void	*str1, const void	*str2, size_t	byte_size)
{
	const unsigned char	*unstr1;
	const unsigned char	*unstr2;

	unstr1 = (const unsigned char *) str1;
	unstr2 = (const unsigned char *) str2;
	while (byte_size--)
	{
		if (*unstr1 != *unstr2)
			return (*unstr1 - *unstr2);
		unstr1++;
		unstr2++;
	}
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	printf("\nTest de t_strchr()\n");
	
	char str1[] = "Hola Mundo";
	char str2[] = "Hola Mundo";
	char str3[] = "Hola Mundo!";
	char str4[] = "Hola mundo"; // Diferencia en una letra ('M' vs 'm')
	char str5[] = "Hola Mundo!!";
	int result;
	
	// Test 1: Cadenas idénticas
	result = ft_memcmp(str1, str2, 10);
	printf("Test 1: str1 vs str2 (10 bytes) -> Resultado: %d\n", result); 
	// Esperado: 0

	// Test 2: Diferencia en el último carácter
	result = ft_memcmp(str1, str3, 11);
	printf("Test 2: str1 vs str3 (11 bytes) -> Resultado: %d\n", result); 
	// Esperado: Un valor negativo (porque str1 tiene '\0' en el último carácter)

	// Test 3: Diferencia en una letra (M vs m)
	result = ft_memcmp(str1, str4, 10);
	printf("Test 3: str1 vs str4 (10 bytes) -> Resultado: %d\n", result); 
	// Esperado: Un valor negativo (porque 'M' < 'm')

	// Test 4: Comparar solo los primeros 5 bytes (deberían ser iguales)
	result = ft_memcmp(str1, str4, 5);
	printf("Test 4: str1 vs str4 (5 bytes) -> Resultado: %d\n", result); 
	// Esperado: 0
	
	// Test 5: Diferencia en los dos últimos carácteres
	result = ft_memcmp(str5, str1, 11);
	printf("Test 5: str5 vs str1 (11 bytes) -> Resultado: %d\n", result); 
	// Esperado: Un valor positivo 

	return (0);
}
*/