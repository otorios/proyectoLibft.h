/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:53:23 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/24 14:41:47 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*sour;
	unsigned char		*des;

	sour = (const unsigned char *)src;
	des = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n--)
		*des++ = *sour++;
	return (dest);
}
/* #include <stdio.h>
int	main(void)
{
	printf("\nTest de ft_memcpy()\n");

	char	source[6] = "Mundo";
	char	dest[6] = "Hola";
	// que teng el espacio para la palabra que queremos meter,
	//en este caso "Mundo"
	size_t	num;
	int i;
	num = 5;

	printf("Valor de dest antes de concatenar 5 posiciones: '%s'\n", dest);
	ft_memcpy(dest, source,	num);
	printf("Valor de dest despues de concatenar 5 posiciones: '%s'\n", dest);

	char	source2[6] = "Mundo";
	char	dest2[6] = "Hola";
	num = 2;

	printf("Valor de dest antes de concatenar 2 posiciones: '%s'\n", dest2);
	ft_memcpy(dest2, source2, num);
	printf("Valor de dest despues de concatenar 2 posiciones: '%s'\n", dest2);

	int source_ints[5] = {1, 2, 3, 4, 5}; // Array de enteros de origen
	int dest_ints[5] = {0}; // Array de enteros de destino, inicializado a 0
	size_t num_ints = 5 * sizeof(int);

	printf("Valor de dest_ints antes de concatenar: ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", dest_ints[i]);
		i++;
	}
	printf("\n");
	ft_memcpy(source_ints, dest_ints, num_ints);
	printf("Valor de dest_ints despues de concatenar: ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", dest_ints[i]);
		i++;
	}
	printf("\n");

	printf("Pasando null:\n");
	ft_memcpy(NULL, "Mundo", 5);

	return (0);
} */