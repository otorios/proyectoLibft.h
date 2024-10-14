/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:14:23 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/24 17:14:26 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>  // Para malloc y NULL
#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t	num_elements, size_t	element_size)
{
	void	*ptr;

	if (num_elements * element_size == 0)
		return (NULL);
	ptr = malloc(num_elements * element_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num_elements * element_size);
	return (ptr);
}
/*
int main(void) 
{
	printf("Test ft_calloc\n");

	// Prueba 1: Reservar espacio para 5 elementos de 4 bytes (int)
	int *arr1 = (int *)ft_calloc(5, sizeof(int));

	// Resultado esperado: Cada valor en el arreglo debe ser 0
	int expected_arr1[5] = {0, 0, 0, 0, 0};

	// Comparamos los resultados de ft_calloc con el resultado esperado
	if (arr1 == NULL)
		printf("Error: ft_calloc devolvió NULL cuando no debía.\n");
	else if (ft_memcmp(arr1, expected_arr1, 5 * sizeof(int)) == 0)
		printf("Test 1 aprobado: Espacio correctamente inicializado a 0.\n");
	else
		printf("Test 1 fallido: Valores no inicializados correctamente a 0.\n");
	free(arr1);  // Liberar memoria reservada

	// Prueba 2: Pasar tamaño 0 como entrada
	void *arr2 = ft_calloc(0, sizeof(int));

	// Resultado esperado: Debe devolver NULL o un puntero válido
	if (arr2 == NULL)
		printf("Test 2 aprobado: ft_calloc devolvió NULL y el tamaño 0.\n");
	else
		printf("Test 2 fallido: ft_calloc no devolvió NULL y el tamaño es 0.\n");
	free(arr2);  // Liberar memoria solo si no devolvió NULL

	return 0;
}
*/