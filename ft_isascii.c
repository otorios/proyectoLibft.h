/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:57:59 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/10 17:58:03 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int value;
	
	
	printf("\nTest de ft_isascii()\n");

	// Test 1: Comprobando con un valor dentro del rango ASCII
	// Esperado: 1 (es un valor ASCII)
	value = 65; // 'A'
	printf("Test 1 - valor = %d ('A'): %d\n", value, ft_isascii(value)); 

	// Test 2: Comprobando con un valor límite inferior del rango ASCII
	// Esperado: 1 (es un valor ASCII)
	value = 0; // Carácter nulo
	printf("Test 2 - valor = %d (", value); 
	printf(" (carácter nulo): %d\n", ft_isascii(value));

	// Test 3: Comprobando con un valor límite superior del rango ASCII
	// Esperado: 1 (es un valor ASCII)
	value = 127; // Carácter de eliminación
	printf("Test 3 - valor = %d", value);
	printf(" (carácter de eliminación): %d\n", ft_isascii(value));  

	// Test 4: Comprobando con un valor fuera del rango ASCII
	//Esperado: 0 (no es un valor ASCII)
	value = 128; // Fuera del rango ASCII
	printf("Test 4 - valor = %d", value);
	printf(" (fuera del rango ASCII): %d\n", ft_isascii(value));
	
	// Test 5: Comprobando con un valor mucho mayor
	// Esperado: 0 (no es un valor ASCII)
	value = 255; // Fuera del rango ASCII
	printf("Test 5 - valor = %d", value); 
	printf(" (fuera del rango ASCII): %d\n", ft_isascii(value));

	return (0);
}
*/