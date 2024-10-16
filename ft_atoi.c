/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:23:53 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/16 18:49:16 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
- Quitar espacios iniciales
- Mirar cuantos signos de menos tiene para saber si el numero sera 
positivo o negativo. Si el número de signos - es impar, el número resultante
será negativo; si es par o no hay signos -, el número será positivo.
- Recoger los primeros numeros hasta encontrarse on oto caracterno numerico.
- Detener la lectura cuando encuentres un carácter que no sea un dígito
- Aplica el signo - o + al número entero construido y devuelve este número.

Construcción del número: num = num * 10 + (*str - '0');
Considera que str apunta a la cadena "123":
Tercer carácter ('3'):
num = num * 10 + (*str - '0')
num = 12 * 10 + ('3' - '0')
num = 120 + 3
num = 123
str ahora apunta al siguiente carácter, que no es un dígito.

return (num * sign); se formula asi porque multiplicas el num por 1 o -1 
y hacer la conversion al signo que tiene que tener. 
Por ejemplo return 1234 * (-1); devolveria -1234

en la funcion is_space retorna true o false. el resultado de la comprobacion
*/

#include "libft.h"


int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f');
}

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}
/* #include <unistd.h>
#include <stdio.h>

int	main(void)
{
	printf("\nTest de ft_atoi()\n");

	char str1[] = "   42";
	char str2[] = "   -42";
	char str3[] = " +++42";
	char str4[] = " ---42";
	char str5[] = "123abc456";
	char str6[] = "abc123";
	char str7[] = "       ";
	char str8[] = "0";
	char str9[] = "2147483647";
	char str10[] = "-2147483648";

	// Pruebas individuales
	printf("Input: '%s' => Result: %d\n", str1, ft_atoi(str1)); // Debería imprimir: 42
	printf("Input: '%s' => Result: %d\n", str2, ft_atoi(str2)); // Debería imprimir: -42
	printf("Input: '%s' => Result: %d\n", str3, ft_atoi(str3)); // Debería imprimir: 42
	printf("Input: '%s' => Result: %d\n", str4, ft_atoi(str4)); // Debería imprimir: -42
	printf("Input: '%s' => Result: %d\n", str5, ft_atoi(str5)); // Debería imprimir: 123
	printf("Input: '%s' => Result: %d\n", str6, ft_atoi(str6)); // Debería imprimir: 0
	printf("Input: '%s' => Result: %d\n", str7, ft_atoi(str7)); // Debería imprimir: 0
	printf("Input: '%s' => Result: %d\n", str8, ft_atoi(str8)); // Debería imprimir: 0
	printf("Input: '%s' => Result: %d\n", str9, ft_atoi(str9)); // Debería imprimir: 2147483647
	printf("Input: '%s' => Result: %d\n", str10, ft_atoi(str10)); // Debería imprimir: -2147483648

	return (0);
} */
