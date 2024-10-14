/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:22:41 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/06 11:22:43 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//#include <stdio.h>
/*
void f(unsigned int i, char *str) 
{
    if (*str >= 'A' && *str <= 'Z')
        printf("Caracter en posicion %u ('%c') pasa a minuscula.\n", i, *str += 32);
}
*/
void	ft_striteri(char	*s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main(void)
{
    char str1[] = "Hola, Mundo! 123";
    char str2[] = "";
    char *str3 = NULL;

    printf("\nTest de ft_striteri()\n");

    // Test 1: Frase normal
    printf("\nTest 1: Frase normal\n");
    ft_striteri(str1, f); // Procesa cada carácter en la cadena

    // Test 2: Cadena vacía
    printf("\nTest 2: Cadena vacía\n");
    ft_striteri(str2, f); // No debería imprimir nada

    // Test 3: Puntero nulo
    printf("\nTest 3: Puntero nulo\n");
    ft_striteri(str3, f); // No debería causar fallos, no debería imprimir nada

    return (0);
}
*/