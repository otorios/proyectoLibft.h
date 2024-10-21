/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:31:48 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/21 18:55:58 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char *s2, size_t n)
{
	unsigned char	*unstr1;
	unsigned char	*unstr2;

	unstr1 = (unsigned char *) s1;
	unstr2 = (unsigned char *) s2;
	while (n--)
	{
		if (*unstr1 != *unstr2 || *unstr1 == '\0' || *unstr2 == '\0')
			return (*unstr1 - *unstr2);
		unstr1++;
		unstr2++;
	}
	return (0);
}
/*#include <stdio.h>
int main(void)
{
    printf("\nTest de ft_strncmp()\n");
    
    char str1[] = "Hola Mundo";
    char str2[] = "Hola Mundo";
    char str3[] = "Hola Mundo!";
    char str4[] = "Hola mundo";  // Diferencia en una letra ('M' vs 'm')
    char str5[] = "Hola Mundo!!";  // str5 tiene más caracteres que str1

    int result;

    // Test 1: Cadenas idénticas con n mayor que la longitud de la cadena
    result = ft_strncmp(str1, str2, 11);
    printf("Test 1: str1 vs str2 (11 caracteres)\n");
    printf("Resultado: %d (Esperado: 0)\n", result);

    // Test 2: Diferencia en el último carácter (incluye más caracteres que str1)
    result = ft_strncmp(str1, str3, 12);
    printf("Test 2: str1 vs str3 (12 caracteres)\n");
    printf("Resultado: %d (Esperado: Un valor negativo)\n", result);
    
    // Test 3: Diferencia en una letra (M vs m)
    result = ft_strncmp(str1, str4, 10);
    printf("Test 3: str1 vs str4 (10 caracteres)\n");
    printf("Resultado: %d (Esperado: Un valor negativo)\n", result);

    // Test 4: Comparar solo los primeros 5 caracteres (deberían ser iguales)
    result = ft_strncmp(str1, str4, 5);
    printf("Test 4: str1 vs str4 (5 caracteres)\n");
    printf("Resultado: %d (Esperado: 0)\n", result);

    // Test 5: Diferencia en los dos últimos caracteres 
    //(str5 tiene caracteres extra)
    result = ft_strncmp(str1, str5, 10);
    printf("Test 5: str1 vs str5 (11 caracteres)\n");
    printf("Resultado: %d (Esperado: 0)\n", result);

    return 0;
}
*/