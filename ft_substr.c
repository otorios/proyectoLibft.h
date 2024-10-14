/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:21:33 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/06 11:21:35 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*chek_start(size_t	s_size, unsigned int start)
{
	char	*new_string;

	if (start >= s_size)
	{
		new_string = malloc(1);
		if (new_string)
			new_string[0] = '\0';
		return (new_string);
	}
	return (NULL);
}

char	*ft_substr(char const	*s, unsigned int start, size_t	len)
{
	size_t	s_size;
	char	*new_string;
	size_t	i;

	if (!s)
		return (NULL);
	s_size = 0;
	while (s[s_size] != '\0')
		s_size++;
	new_string = chek_start(s_size, start);
	if (new_string)
		return (new_string);
	if (len > s_size - start)
		len = s_size - start;
	new_string = malloc(len + 1);
	if (!new_string)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_string[i] = s[start + i];
		i++;
	}
	new_string[len] = '\0';
	return (new_string);
}
/*
int main() 
{
    printf("Test ft_substr:\n");

    // Caso 1: Cadena normal, extracción válida
    char *result1 = ft_substr("Hola Mundo", 0, 4);
    printf("ft_substr(\"Hola Mundo\", 0, 4) = \"%s\"\n", result1);
	//(Esperado: \"Hola\")
    free(result1); // Liberar memoria asignada.

    // Caso 2: start fuera de rango, debería retornar cadena vacía
    char *result2 = ft_substr("Hola Mundo", 20, 4);
    printf("ft_substr(\"Hola Mundo\", 20, 4) = \"%s\"\n", result2);
	//(Esperado: \"\")
    free(result2); // Liberar memoria asignada.

    // Caso 3: Extracción que excede el tamaño de la cadena
    char *result3 = ft_substr("Hola Mundo", 6, 10);
    printf("ft_substr(\"Hola Mundo\", 6, 10) = \"%s\"\n", result3);
	//(Esperado: \"undo\")
    free(result3); // Liberar memoria asignada.

    // Caso 4: start al final de la cadena, debería retornar cadena vacía
    char *result4 = ft_substr("Hola Mundo", 10, 4);
    printf("ft_substr(\"Hola Mundo\", 10, 4) = \"%s\"\n", result4);
	//(Esperado: \"\")
    free(result4); // Liberar memoria asignada.

    // Caso 5: Cadena vacía
    char *result5 = ft_substr("", 0, 4);
    printf("ft_substr(\"\", 0, 4) = \"%s\"\n", result5);
	//(Esperado: \"\")
    free(result5); // Liberar memoria asignada.

    return (0);
}
*/