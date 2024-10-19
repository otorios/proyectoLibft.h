/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:24:17 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/19 10:26:30 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (s < d)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/* #include <stdio.h>
int main(void) 
{
    printf("Este es el test de la funcion ft_memmove:\n");

    char src1[] = "Hello, World!";
    char dest1[20];

    // Prueba de copiado sin superposición
    ft_memmove(dest1, src1, 13);
    printf("Copiado sin superposición: %s\n", dest1);
    // Debería imprimir "Hello, World!"

    // Prueba de copiado con superposición
    char src2[] = "Hello, World!";
    ft_memmove(src2 + 7, src2, 6); // Copia "Hello" a la posición de "World"
    printf("Copiado con superposición: %s\n", src2);
    // Debería imprimir "Hello, Hello!"

    return 0;
} */
