/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:16:51 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/10 18:16:55 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int value;
			
	printf("\nTest de ft_isprint()\n");
	
	// Test 1: Valor fuera del rango imprimible (antes del espacio)
	// Esperado: 0 (no es un carácter imprimible)
	value = 31; // No es imprimible
	printf("Test 1 - valor = %d (antes del espacio):\n", value);
	printf("%d (no es un carácter imprimible)\n", ft_isprint(value));
	printf("\n");
	
	// Test 2: Primer carácter imprimible (espacio)
	// Esperado: 1 (es un carácter imprimible)
	value = 32; // Espacio
	printf("Test 2 - valor = %d (espacio):\n", value);
	printf("%d (es un carácter imprimible)\n", ft_isprint(value));
	printf("\n");
	
	// Test 3: Carácter imprimible (signo de exclamación)
	// Esperado: 1 (es un carácter imprimible)
	value = 33; // '!'
	printf("Test 3 - valor = %d ('!'):\n", value);
	printf("%d (es un carácter imprimible)\n", ft_isprint(value));
	printf("\n");

	// Test 4: Carácter imprimible (arroba)
	// Esperado: 1 (es un carácter imprimible)
	value = 64; // '@'
	printf("Test 4 - valor = %d ('@'):\n", value);
	printf("%d (es un carácter imprimible)\n", ft_isprint(value));
	printf("\n");
	
	// Test 5: Carácter imprimible (letra A)
	// Esperado: 1 (es un carácter imprimible)
	value = 65; // 'A'
	printf("Test 5 - valor = %d ('A')\n", value);
	printf("%d (es un carácter imprimible)\n", ft_isprint(value));
	printf("\n");
	
	// Test 6: Último carácter imprimible (tilde)
	// Esperado: 1 (es un carácter imprimible)
	value = 126; // '~'
	printf("Test 6 - valor = %d ('~')\n", value);
	printf("%d (es un carácter imprimible)\n", ft_isprint(value));
	printf("\n");
	
	// Test 7: Valor fuera del rango imprimible (después del tilde)
	// Esperado: 0 (no es un carácter imprimible)
	value = 127; // No imprimible
	printf("Test 7 - valor = %d (después del tilde)\n", value);
	printf("%d (no es un carácter imprimible)\n", ft_isprint(value));
	printf("\n");
	
	// Test 8: Valor mucho mayor (fuera del rango imprimible)
	// Esperado: 0 (no es un carácter imprimible)
	value = 128; // Fuera del rango imprimible
	printf("Test 8 - valor = %d (fuera del rango imprimible)\n", value);
	printf("%d (no es un carácter imprimible)\n", ft_isprint(value));
	printf("\n");
	
	// Test 9: Valor fuera del rango imprimible (mayor aún)
	// Esperado: 0 (no es un carácter imprimible)
	value = 255; // Fuera del rango imprimible
	printf("Test 9 - valor = %d (fuera del rango imprimible)\n", value);
	printf("%d (no es un carácter imprimible)\n", ft_isprint(value));
	printf("\n");

	return (0);
}
*/