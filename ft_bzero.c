/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:30:57 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/16 16:31:00 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//size_t: Es el tipo de datos utilizado para 
// especificar tamaños de objetos en bytes.
//Solo puede almacenar números positivos o cero. 
//unsigned char: Se usa para manipular datos a nivel de byte.
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = 0;
}
/*
#include <stdio.h>
int	main(void)
{
	size_t i;
	size_t buffer_size = 10;  // Tamaño del buffer

	unsigned char buffer[buffer_size];  // Declaración del buffer

	// Inicializar el buffer con valores arbitrarios para probar
	i = 0;
	while (i < buffer_size)
	{
		buffer[i] = i + 1;  // Llenar con valores 1, 2, 3, ..., 10
		i++;
	}

	// Mostrar el buffer antes de llamar a ft_bzero
	printf("Buffer antes de ft_bzero: ");
	i = 0;
	while (i < buffer_size)
	{
		printf("%d ", buffer[i]);
		i++;
	}
	printf("\n");

	// Llamada a ft_bzero para poner a cero los primeros 5 bytes
	ft_bzero(buffer, 5);

	// Mostrar el buffer después de llamar a ft_bzero
	printf("Buffer después de ft_bzero: ");
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