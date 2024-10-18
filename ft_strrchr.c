/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:59:16 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/18 18:38:37 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*position;

	position = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			position = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (position);
}
/* 
 #include <stdio.h>
int	main(void)
{
	printf("\nTest de ft_strrchr()\n");

	char strArrayR[6] = "Hola";
	char y = 'l';
	char *result = ft_strrchr(strArrayR, y);
	if (result != NULL) {
	printf("Buscamos \"%c\" en \"%s\", y está en la posición %ld\n",
	       y, strArrayR, result - strArrayR);
	}else {
	printf("Buscamos \"%c\" en \"%s\", y no se encontró.\n", y, strArrayR);
	}

	char strArrayR2[6] = "Hola";
	char y2 = 'z';
	result = ft_strrchr(strArrayR2, y2);
	if (result != NULL) {
	printf("Buscamos \"%c\" en \"%s\", y está en la posición %ld\n",
	       y2, strArrayR2, result - strArrayR2);
	} else {
	printf("Buscamos \"%c\" en \"%s\", y no se encontró.\n", y2, strArrayR2);
	}

	char strArrayR3[6] = "Hola";
	char y3 = '8';
	result = ft_strrchr(strArrayR3, y3);
	if (result != NULL) {
	printf("Buscamos \"%c\" en \"%s\", y está en la posición %ld\n",
	       y3, strArrayR3, result - strArrayR3);
	} else {
	printf("Buscamos \"%c\" en \"%s\", y no se encontró.\n", y3, strArrayR3);
	}

	char strArrayR4[6] = "Hola";
	char y4 = 'H';
	result = ft_strrchr(strArrayR4, y4);
	if (result != NULL) {
	printf("Buscamos \"%c\" en \"%s\", y está en la posición %ld\n",
	       y4, strArrayR4, result - strArrayR4);
	} else {
	printf("Buscamos \"%c\" en \"%s\", y no se encontró.\n", y4, strArrayR4);
	}

	char strArrayR5[6] = "Hola";
	char y5 = '\0';
	result = ft_strrchr(strArrayR5, y5);
	if (result != NULL) {
	printf("Buscamos el carácter nulo \"%s\", y está en la posición %ld\n",
	       strArrayR5, result - strArrayR5);
	} else {
	printf("Buscamos el carácter nulo \"%s\", y no se encontró.\n", strArrayR5);
	}

	char strArrayR6[12] = "Hola mundo";
	char y6 = ' ';
	result = ft_strrchr(strArrayR6, y6);
	if (result != NULL) {
	printf("Buscamos \"%c\" en \"%s\", y está en la posición %ld\n",
	       y6, strArrayR6, result - strArrayR6);
	} else {
	printf("Buscamos \"%c\" en \"%s\", y no se encontró.\n", y6, strArrayR6);
	}
	return (0);
}
 */