/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:21:57 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/24 19:07:35 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const	*set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*result;
	int		start;
	int		end;
	int		len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = 0;
	while (s1[start + end])
		end++;
	while (end > 0 && is_in_set(s1[start + end - 1], set))
		end--;
	result = malloc(end + 1);
	if (result == NULL)
		return (NULL);
	len = 0;
	while (len < end)
		result[len++] = s1[start++];
	result[len] = '\0';
	return (result);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main() 
{
	printf("Test ft_strtrim\n");

	// Test 1: Eliminar espacios al principio y al final
	char *result1 = ft_strtrim("   Hola, mundo!   ", " ");
	printf("Test 1: '%s'\n", result1);
	// Resultado esperado: 'Hola, mundo!'
	free(result1); // Liberar la memoria asignada

	// Test 2: Eliminar caracteres 'x' y 'o' del principio y el final
	char *result2 = ft_strtrim("xxoxoHolaoxxxoxox", "xo");
	printf("Test 2: '%s'\n", result2);
	// Resultado esperado: 'Hola'
	free(result2); // Liberar la memoria asignada

	// Test 3: Cadena sin caracteres para eliminar
	char *result3 = ft_strtrim("SinEspacios", " ");
	printf("Test 3: '%s'\n", result3);
	// Resultado esperado: 'SinEspacios'
	free(result3); // Liberar la memoria asignada

	// Test 4: Todos los caracteres pertenecen a 'set'
	char *result4 = ft_strtrim("xxxxx", "x");
	printf("Test 4: '%s'\n", result4);
	// Resultado esperado: '' (cadena vacía)
	free(result4); // Liberar la memoria asignada

	// Test 5: Cadena vacía
	char *result5 = ft_strtrim("", " ");
	printf("Test 5: '%s'\n", result5);
	// Resultado esperado: '' (cadena vacía)
	free(result5); // Liberar la memoria asignada

	// Test 6: Frase con varias palabras, eliminando espacios y guiones
	char *result6 = ft_strtrim("---  Esta es una prueba   ---", "- ");
	printf("Test 6: '%s'\n", result6);
	// Resultado esperado: 'Esta es una prueba compleja'
	free(result6); // Liberar la memoria asignada

	// Test 7: Frase con guiones en medio, eliminando 
	//solo los del principio y final
	char *result7 = ft_strtrim("--- Esta-es-una-prueba ---", "- ");
	printf("Test 7: '%s'\n", result7);
	// Resultado esperado: 'Esta-es-una-prueba-compleja' 
	//(se eliminan solo los guiones del inicio y final)
	free(result7); // Liberar la memoria asignada

	return 0;
}
*/