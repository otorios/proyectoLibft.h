/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:44:39 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/18 18:27:47 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	char	char_c;

	char_c = (char) c;
	while (*s != '\0')
	{
		if (char_c == *s)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
/* #include <stdio.h>
char *ft_strchr(const char *str, char x)
{
	while (*str != '\0') 
	{
		if (*str == x) 
		    return (char *)str; // Devuelve la dirección del carácter encontrado
		str++;
	}
	if (*str == x) 
		return (char *)str; // También puede ser el último carácter
	return NULL; // No se encontró el carácter. 
    //Ponemos NULL porque al trabajar con punteros nos lo permite
}

int	main(void)
{
	printf("\nTest de ft_strchr()\n");

    // Test 1: ft_strchr() con carácter 'l'
    char strArray1[6] = "Hola";
    char x1 = 'l';
    printf("Buscamos \"%c\" en la palabra \"%s\",\n", x1, strArray1);
    char *pos1 = ft_strchr(strArray1, x1);
    if (pos1 != NULL)
        printf("Está en la posición %td\n", pos1 - strArray1);
    else
        printf("Carácter no encontrado.\n");

    // Test 2: ft_strchr() con carácter 'z'
    char strArray2[6] = "Hola";
    char x2 = 'z';
    printf("Buscamos \"%c\" en la palabra \"%s\",\n", x2, strArray2);
    char *pos2 = ft_strchr(strArray2, x2);
    if (pos2 != NULL)
        printf("Está en la posición %td\n", pos2 - strArray2);
    else
        printf("Carácter no encontrado.\n");

    // Test 3: ft_strchr() con carácter '8'
    char strArray3[6] = "Hola";
    char x3 = '8';
    printf("Buscamos \"%c\" en la palabra \"%s\",\n", x3, strArray3);
    char *pos3 = ft_strchr(strArray3, x3);
    if (pos3 != NULL)
        printf("Está en la posición %td\n", pos3 - strArray3);
    else
        printf("Carácter no encontrado.\n");

    // Test 4: ft_strchr() con carácter 'H'
    char strArray4[6] = "Hola";
    char x4 = 'H';
    printf("Buscamos \"%c\" en la palabra \"%s\",\n", x4, strArray4);
    char *pos4 = ft_strchr(strArray4, x4);
    if (pos4 != NULL)
        printf("Está en la posición %td\n", pos4 - strArray4);
    else
        printf("Carácter no encontrado.\n");

    // Test 5: ft_strchr() con carácter nulo '\0'
    char strArray5[6] = "Hola";
    char x5 = '\0';
    printf("Buscamos el carácter nulo '\\0' en la palabra \"%s\",\n", strArray5);
    char *pos5 = ft_strchr(strArray5, x5);
    if (pos5 != NULL)
        printf("Está en la posición %td\n", pos5 - strArray5);
    else
        printf("Carácter no encontrado.\n");

    // Test 6: ft_strchr() con carácter espacio ' '
    char strArray6[12] = "Hola mundo";
    char x6 = ' ';
    printf("Buscamos \"%c\" en la palabra \"%s\",\n", x6, strArray6);
    char *pos6 = ft_strchr(strArray6, x6);
    if (pos6 != NULL)
        printf("Está en la posición %td\n", pos6 - strArray6);
    else
    {
        printf("Carácter no encontrado.\n");
    }

	return (0);
} */
