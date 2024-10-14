/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:30:03 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/16 16:30:08 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_toupper(char x)
{
	if (x >= 'a' && x <= 'z')
		x -= 32;
	return (x);
}
/*
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