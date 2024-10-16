/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:13:26 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/24 17:13:29 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Calculamos la longitud de dst (hasta el terminador nulo)
// Calculamos la longitud de src
// Si no hay espacio para concatenar, retornamos size + src_len
// Concatenamos src a dst, sin sobrepasar size-1 para dejar espacio para '\0'
// usamos size_t remaining_space para no alterar e tamaño de buffer y que n de error de segmentation fault
// Terminamos con null
// Devolvemos la longitud total de la cadena que se intentó crear
//dst_len == size: Esto significa que ya no hay espacio en el buffer
//para realizar la concatenación, ya que el buffer está completamente ocupado por dst.
//si fuera dst_len <= size significa que todavía queda espacio

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t dest_len;
	size_t src_len;	
	size_t i;
	size_t remaining_space;
	
	dest_len = 0;
	src_len = 0;
	//Usar la función lenght que he creado en lugard de calcuarlo aqui
	/*
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	*/
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len == size)
		return (src_len + src_len);
	i = 0;
	remaining_space = size - dest_len - 1;
	while (i < remaining_space && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/* 
// Función de prueba

void test_ft_strlcat(char *buffer, const char *str, size_t size, const char *expected)
{
	printf("Buffer antes: %s\n", buffer);
	size_t len = ft_strlcat(buffer, str, size);
	printf("Longitud devuelta por ft_strlcat: %zu\n", len);
	printf("Buffer después: %s\n", buffer);
	printf("Resultado esperado: %s\n", expected);
	printf("===\n");
}
#include <stdio.h>
int main(void)
{
	// Test 1: Concatenar cadenas que caben sin problemas
	char buffer1[20] = "Hello, ";
	const char *str1 = "world!";
	test_ft_strlcat(buffer1, str1, 20, "Hello, world!");

	// Test 2: Concatenar cuando el buffer está casi lleno y no tiene espacio para todo
	char buffer2[20] = "1234567890123456789"; // 19 caracteres
	const char *str2 = "0"; // Agregar solo un carácter
	test_ft_strlcat(buffer2, str2, 20, "12345678901234567890"); // Más de 20, debería truncar

	// Test 3: Concatenar cuando el buffer ya está lleno y no tiene espacio para todo
	char buffer3[20] = "Full buffer!"; // 13 caracteres
	const char *str3 = "Trying to add more.";
	test_ft_strlcat(buffer3, str3, 20, "Full buffer!Trying");

	// Test 4: Concatenar cadena vacía a un buffer no vacío y con espacio
	char buffer4[20] = "Non-empty buffer";
	const char *str4 = "";
	test_ft_strlcat(buffer4, str4, 20, "Non-empty buffer"); // Sin cambios

	// Test 5: Concatenar a un buffer vacío y con espacio
	char buffer5[20] = "";
	const char *str5 = "New content!";
	test_ft_strlcat(buffer5, str5, 20, "New content!"); // Debería ser "New content!"

	// Test 6: Concatenar con size pequeño pero espacio suficiente
	char buffer6[10] = "Hi"; // Solo dos caracteres
	const char *str6 = " there!";
	test_ft_strlcat(buffer6, str6, 10, "Hi there!"); // No debería cambiar

    return 0;
}

 */