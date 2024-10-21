/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:23:14 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/21 18:57:07 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*final_string;
	int		a;
	int		b;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	final_string = (char *) malloc (len1 + len2 + 1);
	if (!final_string)
		return (NULL);
	a = -1;
	while (++a < len1)
		final_string[a] = s1[a];
	b = -1;
	while (++b < len2)
		final_string[a + b] = s2[b];
	final_string[a + b] = '\0';
	return (final_string);
}
/*#include <stdio.h>
int	main(void)
{
	printf("Test fc_strjoin\n");

	// Test 1: Concatenar dos cadenas normales
    printf("- Se espera: Hola Mundo\n");
    char *result1 = ft_strjoin("Hola ", "Mundo");
    printf("Test 1: '%s'\n", result1);
    free(result1);
	printf("\n");

    // Test 2: Concatenar una cadena vacía con una no vacía
    printf("- Se espera: Mundo\n");
    char *result2 = ft_strjoin("", "Mundo");
    printf("Test 2: '%s'\n", result2);
    free(result2);
	printf("\n");

    // Test 3 (antiguo Test 4): Concatenar dos cadenas vacías
    printf("- Se espera: \n");
    char *result3 = ft_strjoin("", "");
    printf("Test 3: '%s'\n", result3);
    free(result3);
	printf("\n");

    // Test 4 (antiguo Test 5): Concatenar con caracteres especiales
    printf("- Se espera: Hola! @#*&\n");
    char *result4 = ft_strjoin("Hola! ", "@#*&");
    printf("Test 4: '%s'\n", result4);
    free(result4);
	printf("\n");

    // Test 5 (antiguo Test 6): Concatenar con cadenas largas
    printf("- Se espera: Cadena muy larga concatenada con otra!\n");
    char *result5 = ft_strjoin("Cadena muy larga ", "concatenada con otra !");
    printf("Test 5: '%s'\n", result5);
    free(result5);
	printf("\n");

    // Test 6 (antiguo Test 8): 
	//Concatenar con cadenas NULL (deberías manejarlo en tu función)
    printf("- Se espera: NULL\n");
    char *result6 = ft_strjoin("Hola", NULL);
    printf("Test 6: '%s'\n", result6 ? result6 : "NULL");
    free(result6);
	printf("\n");

    // Test 7 (antiguo Test 9): 
	//Concatenar cadenas con caracteres especiales y espacios
    printf("Se espera: _Hola Mundo_\n");
    char *result7 = ft_strjoin("_Hola ", "Mundo_");
    printf("Test 7: '%s'\n", result7);
    free(result7);
	printf("\n");

	return (0);
}
*/