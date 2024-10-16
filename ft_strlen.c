/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:18:34 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/10 18:18:37 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*str)
{
	size_t	size;

	size = 0;
	while (str [size] != '\0')
		size++;
	return (size);
}
/*#include <stdio.h>
int	main(void)
{
	printf("\nTest de ft_strlen()\n");
	
	// Test 1: Cadena general
	// Esperado: 13 (longitud de "Hello, World!")
	char *str1 = "Hello, World!";
	printf("Test 1 - str = \"%s\": %zu\n", str1, ft_strlen(str1));

	// Test 2: Cadena vacía
	// Esperado: 0 (longitud de "")
	char *str2 = "";
	printf("Test 2 - str = \"\": %zu\n", ft_strlen(str2));

	// Test 3: Cadena con un solo carácter
	// Esperado: 1 (longitud de "a")
	char *str3 = "a";
	printf("Test 3 - str = \"a\": %zu\n", ft_strlen(str3));

	// Test 4: Cadena corta
	// Esperado: 5 (longitud de "Libft")
	char *str4 = "Libft";
	printf("Test 4 - str = \"Libft\": %zu\n", ft_strlen(str4));

	// Test 5: Cadena larga
	// Esperado: 45 (longitud de "Esta es una cadena más larga para probar.")
	char *str5 = "Esta es una cadena más larga para probar.";
	printf("Test 5 - str = \"Esta es una cadena más larga para probar.\": %zu\n", ft_strlen(str5));

	// Test 6: Cadena con carácter nulo al principio
	// Esperado:  (longitud de "Hello", ignorando el nulo al principio)
	char *str6 = "\0Hello";
	printf("Test 6 - str = \"\\0Hello\": %zu\n", ft_strlen(str6));
	
	return (0);
}
*/