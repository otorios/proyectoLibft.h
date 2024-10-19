/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:15:03 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/19 11:29:00 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s)
{
	size_t	len;
	char	*dup;

	if (s == NULL)
		return (NULL);
	len = ft_strlen((char *)s);
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s, len + 1);
	return (dup);
}
/* #include <stdio.h>
//gcc -Wall -Wextra -Werror ft_strdup.c ft_memcpy.c ft_strlen.c 
int main()
{
	// Test ft_strdup
	printf("Test ft_strdup\n");

	// Caso 1: Cadena normal
	const char *original1 = "Hola, mundo!";
	char *copia1 = ft_strdup(original1);
	printf("Original: %s\nCopia: %s\n", original1, copia1);
	// Esperado: Copia igual a "Hola, mundo!"
	free(copia1); // Liberar memoria
	printf("\n");

	// Caso 2: Cadena vacía
	const char *original2 = "";
	char *copia2 = ft_strdup(original2);
	printf("Original: '%s'\nCopia: '%s'\n", original2, copia2);
	// Esperado: Copia vacía ''
	free(copia2); // Liberar memoria
	printf("\n");

	// Caso 3: Cadena nula
	const char *original3 = NULL;
	char *copia3 = ft_strdup(original3);
	printf("Original: %s\nCopia: %s\n", original3, copia3);
	// Esperado: Copia es NULL (no se imprime)
	// (No se libera memoria, ya que es NULL)
	printf("\n");
	
	// Caso 4: Cadena con solo números
	const char *original4 = "1234567890";
	char *copia4 = ft_strdup(original4);
	printf("Original: %s\nCopia: %s\n", original4, copia4);
	// Esperado: Copia igual a "1234567890"
	free(copia4); // Liberar memoria
	printf("\n");
	
	// Caso 5: Cadena con caracteres especiales
	const char *original5 = "!@#$%^&*()_+";
	char *copia5 = ft_strdup(original5);
	printf("Original: %s\nCopia: %s\n", original5, copia5);
	// Esperado: Copia igual a "!@#$%^&*()_+"
	free(copia5); // Liberar memoria
	printf("\n");
	
	// Caso 6: Cadena muy larga
	const char *original6 = "Esta es una cadena muy larga que se usa "
							"para probar la función ft_strdup en el caso "
							"de una entrada más extensa de lo normal.";
	char *copia6 = ft_strdup(original6);
	printf("Versión recortada\n");
	printf("Original : %.50s...\nCopia : %.50s...\n", original6, copia6);
	printf("\n");
	printf("Versión llarga\n");
	printf("Original: %s\nCopia: %s\n", original6, copia6);
	// Esperado: Copia igual a la cadena larga
	free(copia6); // Liberar memoria

	return (0);
}
 */