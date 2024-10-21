/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:30:03 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/21 18:49:06 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int x)
{
	if (x >= 'a' && x <= 'z')
		x -= 32;
	return (x);
}
/*
#include <stdio.h>

int	main(void)
{
	char    x;	
	
	
	printf("\nTest de ft_toupper()\n");
	
	// Test 1: Letra minúscula
	x = 'a';
	printf("Test 1. x = %c, resultado: %c\n", x, ft_toupper(x));

	// Test 2: Letra minúscula
	x = 'z';
	printf("Test 2. x = %c, resultado: %c\n", x, ft_toupper(x));

	// Test 3: Letra mayúscula (sin cambio)
	x = 'A';
	printf("Test 3. x = %c, resultado: %c\n", x, ft_toupper(x));

	// Test 4: Número (sin cambio)
	x = '1';
	printf("Test 4. x = %c, resultado: %c\n", x, ft_toupper(x));

	// Test 5: Carácter especial (sin cambio)
	x = '$';
	printf("Test 5. x = %c, resultado: %c\n", x, ft_toupper(x));

	// Test 6: Letra minúscula intermedia
	x = 'm';
	printf("Test 6. x = %c, resultado: %c\n", x, ft_toupper(x));
	
	return (0);
}
*/