/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:13:26 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/24 19:59:42 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	dest_len;
	int	src_len;
	int	i;
	int	remaining_space;

	dest_len = 0;
	src_len = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len == (int)size)
		return ((size_t)(dest_len + src_len));
	i = 0;
	remaining_space = (int)size - dest_len - 1;
	while (i < remaining_space && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return ((size_t)(dest_len + src_len));
}
/* #include <stdio.h>

void	test_ft_strlcat(char *buffer, const char *str, size_t size,
		const char *expected)
{
	size_t	len;

	printf("Buffer antes: %s\n", buffer);
	len = ft_strlcat(buffer, str, size);
	printf("Longitud devuelta por ft_strlcat: %zu\n", len);
	printf("Buffer después: %s\n", buffer);
	printf("Resultado esperado: %s\n", expected);
	printf("===\n");
}

int	main(void)
{
	// Test 1: Concatenar cadenas que caben sin problemas
	char buffer1[20] = "Hello, ";
	const char *str1 = "world!";
	test_ft_strlcat(buffer1, str1, 20, "Hello, world!");

	// Test 2: Concatenar cuando el buffer está casi lleno
	// y no tiene espacio para todo
	char buffer2[20] = "1234567890123456789"; // 19 caracteres
	const char *str2 = "0";                   // Agregar solo un carácter
	test_ft_strlcat(buffer2, str2, 20, "12345678901234567890");
	// Más de 20, debería truncar

	// Test 3: Concatenar cuando el buffer ya está lleno
	// y no tiene espacio para todo
	char buffer3[20] = "Full buffer!"; // 13 caracteres
	const char *str3 = "Trying to add more.";
	test_ft_strlcat(buffer3, str3, 20, "Full buffer!Trying");

	// Test 4: Concatenar cadena vacía a un buffer no vacío y con espacio
	char buffer4[20] = "Non-empty buffer";
	const char *str4 = "";
	test_ft_strlcat(buffer4, str4, 20, "Non-empty buffer");

	// Test 5: Concatenar a un buffer vacío y con espacio
	char buffer5[20] = "";
	const char *str5 = "New content!";
	test_ft_strlcat(buffer5, str5, 20, "New content!");
	// Debería ser "New content!"

	// Test 6: Concatenar con size pequeño pero espacio suficiente
	char buffer6[10] = "Hi"; // Solo dos caracteres
	const char *str6 = " there!";
	test_ft_strlcat(buffer6, str6, 10, "Hi there!");
	// No debería cambiar

	char buffer7[20] = "0"; // Cadena vacía en el destino
	const char *str7 = "Hello, world!";
	test_ft_strlcat(buffer7, str7, 20, "Hi there!");

	return (0);
} */