/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:23:27 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/10 17:23:32 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(char x)
{
	if (ft_isalpha(x) || ft_isdigit(x))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char    x;
	
	printf("\nTest de ft_isalnum()\n");
	
	// Test 1: Comprobando con un número
	// Esperado: 1 (es un número)
	x = '4';
	printf("Test 1 - str = '4': %d\n", ft_isalnum(x)); 
	
	// Test 2: Comprobando con una letra mayúscula
	// Esperado: 1 (es una letra)
	x = 'A';
	printf("Test 2 - str = 'A': %d\n", ft_isalnum(x)); 
	
	// Test 3: Comprobando con una letra minúscula
	// Esperado: 1 (es una letra)
	x = 'z';
	printf("Test 3 - str = 'z': %d\n", ft_isalnum(x)); 
	
	// Test 4: Comprobando con un símbolo
	// Esperado: 0 (no es una letra ni un número)
	x = '!';
	printf("Test 4 - str = '!': %d\n", ft_isalnum(x));  
	
	// Test 5: Comprobando con un espacio en blanco
	// Esperado: 0 (no es una letra ni un número)
	x = ' ';
	printf("Test 5 - str = ' ': %d\n", ft_isalnum(x)); 
	
	return (0);
}
*/