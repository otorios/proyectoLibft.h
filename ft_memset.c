/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:41:49 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/10 18:41:51 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(char *x, int value, size_t varsize)
{
	unsigned char	*varbuffer;
	unsigned char	value_to_fill;

	varbuffer = (unsigned char *) x;
	value_to_fill = (unsigned char) value;
	while (varsize--)
		*varbuffer++ = value_to_fill;
}
/*#include <stdio.h>
int	main(void)
{
	size_t i;
	size_t buffer_size = 10;  // Definir tamaño del buffer
	size_t varsize = 5;       // Número de bytes a rellenar
	unsigned char buffer[buffer_size];  // Declaración del buffer

	// Inicializar el buffer con valores arbitrarios para probar
	i = 0;
	while (i < buffer_size) 
	{
		buffer[i] = i + 1;  // Llenar con valores 1, 2, 3, ..., 10
		i++;
	}

	// Mostrar el buffer antes de llamar a ft_memset
	printf("Buffer antes de ft_memset: ");
	i = 0;
	while (i < buffer_size) 
	{
		printf("%d ", buffer[i]);
		i++;
	}
	printf("\n");

	// Llamada a ft_memset, rellena los primeros `varsize` bytes con el valor 8
	ft_memset((char *)buffer, 8, varsize);

	// Mostrar el buffer después de llamar a ft_memset
	printf("Buffer después de ft_memset: ");
	i = 0;
	while (i < buffer_size) 
	{
		printf("%d ", buffer[i]);
		i++;
	}
	printf("\n");

	return (0);
}
*/