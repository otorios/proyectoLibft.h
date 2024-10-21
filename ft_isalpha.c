/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:54:46 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/21 18:46:31 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (1);
	return (0);
}
/* 
#include <stdio.h>
int	main(void)
{
	char	str;
	
	printf("\nTest de ft_isalpha()\n");
	
	// Test 1: Comprobando con un número
	// Esperado: 0 (no es una letra)
	str = '4';
	printf("Test 1 - str = '4': %d\n", ft_isalpha(str)); 

	// Test 2: Comprobando con una letra mayúscula
	// Esperado: 1 (es una letra)
	str = 'A';
	printf("Test 2 - str = 'A': %d\n", ft_isalpha(str)); 

	// Test 3: Comprobando con una letra minúscula
	// Esperado: 1 (es una letra)
	str = 'z';
	printf("Test 3 - str = 'z': %d\n", ft_isalpha(str)); 

	// Test 4: Comprobando con un símbolo
	// Esperado: 0 (no es una letra)
	str = '!';
	printf("Test 4 - str = '!': %d\n", ft_isalpha(str)); 

	// Test 5: Comprobando con un espacio en blanco
	// Esperado: 0 (no es una letra)
	str = ' ';
	printf("Test 5 - str = ' ': %d\n", ft_isalpha(str)); 
	
	return (0);
}
 */