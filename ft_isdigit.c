/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:55:07 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/09 14:55:19 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_isdigit(char number)
{
	if (number >= '0' && number <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	number;

	printf("\nTest de ft_isdigit()\n");
	
	// Test 1: Comprobando con un dígito
	// Esperado: 1 (es un dígito)
	number = '5';
	printf("Test 1 - number = '5': %d\n", ft_isdigit(number)); 

	// Test 2: Comprobando con otro dígito
	// Esperado: 1 (es un dígito)
	number = '0';
	printf("Test 2 - number = '0': %d\n", ft_isdigit(number)); 

	// Test 3: Comprobando con una letra
	// Esperado: 0 (no es un dígito)
	number = 'A';
	printf("Test 3 - number = 'A': %d\n", ft_isdigit(number)); 

	// Test 4: Comprobando con un símbolo
	// Esperado: 0 (no es un dígito)
	number = '#';
	printf("Test 4 - number = '#': %d\n", ft_isdigit(number)); 

	// Test 5: Comprobando con un espacio en blanco
	// Esperado: 0 (no es un dígito)
	number = ' ';
	printf("Test 5 - number = ' ': %d\n", ft_isdigit(number)); 
	
	return (0);
}
*/