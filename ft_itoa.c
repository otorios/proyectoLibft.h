/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:21:18 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/22 18:15:32 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*print_int_min(void)
{
	char	*min_int;
	char	*min_str;
	int		i;

	min_str = "-2147483648";
	i = 0;
	min_int = (char *)ft_calloc(12, sizeof(char));
	if (!min_int)
		return (NULL);
	while (min_str[i] != '\0')
	{
		min_int[i] = min_str[i];
		i++;
	}
	min_int[i] = '\0';
	return (min_int);
}

static int	num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length++;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;

	if (n == -2147483648)
		return (print_int_min());
	length = num_length(n);
	str = (char *)ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	else if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (n > 0)
	{
		str[--length] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
/*//#include <stdio.h>
int main() 
{
	printf("\nTest ft_itoa()\n");

	// Test 1: Número positivo
	int num1 = 1234;
	char *result1 = ft_itoa(num1);
	printf("ft_itoa(%d) = %s\n", num1, result1); 
	// Resultado esperado: ft_itoa(1234) = 1234
	free(result1); // Liberar memoria

	// Test 2: Número negativo
	int num2 = -5678;
	char *result2 = ft_itoa(num2);
	printf("ft_itoa(%d) = %s\n", num2, result2); 
	// Resultado esperado: ft_itoa(-5678) = -5678
	free(result2); // Liberar memoria

	// Test 3: Número cero
	int num3 = 0;
	char *result3 = ft_itoa(num3);
	printf("ft_itoa(%d) = %s\n", num3, result3); 
	// Resultado esperado: ft_itoa(0) = 0
	free(result3); // Liberar memoria

	// Test 4: Número negativo cero
	int num4 = -0; // Esto debería ser equivalente a 0
	char *result4 = ft_itoa(num4);
	printf("ft_itoa(%d) = %s\n", num4, result4); 
	// Resultado esperado: ft_itoa(-0) = 0
	free(result4); // Liberar memoria

	// Test 5: El valor mínimo para un int
	int num5 = -2147483648;
	char *result5 = ft_itoa(num5);
	printf("ft_itoa(%d) = %s\n", num5, result5); 
	// Resultado esperado: ft_itoa(-2147483648) = -2147483648
	free(result5); // Liberar memoria

	return 0;
}
*/