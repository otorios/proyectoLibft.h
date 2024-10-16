/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:30:24 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/16 16:30:30 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_tolower(char x)
{
	if (x >= 'A' && x <= 'Z')
		x += 32;
	return (x);
}
/*
#include <stdio.h>

int	main(void)
{
	char    x;
	
	printf("\nTest de ft_tolower()\n");
	
	// Test 1: Letra minúscula
	x = 'a';
	printf("Test 1. x = %c, resultado: %c\n", x, ft_tolower(x));

	// Test 2: Letra minúscula
	x = 'z';
	printf("Test 2. x = %c, resultado: %c\n", x, ft_tolower(x));

	// Test 3: Letra mayúscula (sin cambio)
	x = 'A';
	printf("Test 3. x = %c, resultado: %c\n", x, ft_tolower(x));

	// Test 4: Número (sin cambio)
	x = '1';
	printf("Test 4. x = %c, resultado: %c\n", x, ft_tolower(x));

	return(0);

	// Test 5: Carácter especial (sin cambio)
	x = '$';
	printf("Test 5. x = %c, resultado: %c\n", x, ft_tolower(x));

	// Test 6: Letra minúscula intermedia
	x = 'm';
	printf("Test 6. x = %c, resultado: %c\n", x, ft_tolower(x));
}
*/