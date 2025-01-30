/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:23:53 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/24 17:53:14 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f');
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (*str == '-' || *str == '+')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}
/* #include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	printf("\nTest de ft_atoi()\n");

	char str1[] = "   42";
	char str2[] = "   -42";
	char str3[] = " +-42";
	char str4[] = " ---42";
	char str5[] = "123abc456";
	char str6[] = "abc123";
	char str7[] = "       ";
	char str8[] = "0";
	char str9[] = "2147483647";
	char str10[] = "-2147483648";

	// Pruebas individuales
	printf("Input: '%s' => Result: %d\n", str1, ft_atoi(str1));
	// Debería imprimir: 42
	printf("Input: '%s' => Result: %d\n", str2, ft_atoi(str2));
	// Debería imprimir: -42
	printf("Input: '%s' => Result: %d\n", str3, ft_atoi(str3)); 
	// Debería imprimir: 0
	printf("Input: '%s' => Result: %d\n", str4, ft_atoi(str4));
	// Debería imprimir: 0
	printf("Input: '%s' => Result: %d\n", str5, ft_atoi(str5));
	// Debería imprimir: 123
	printf("Input: '%s' => Result: %d\n", str6, ft_atoi(str6));
	// Debería imprimir: 0
	printf("Input: '%s' => Result: %d\n", str7, ft_atoi(str7));
	// Debería imprimir: 0
	printf("Input: '%s' => Result: %d\n", str8, ft_atoi(str8));
	// Debería imprimir: 0
	printf("Input: '%s' => Result: %d\n", str9, ft_atoi(str9));
	// Debería imprimir: 2147483647
	printf("Input: '%s' => Result: %d\n", str10, ft_atoi(str10));
	// Debería imprimir: -2147483648ç

	printf("Input: '%s' => Result: %d\n", str4, atoi(str4));

	return (0);
} */
