/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:22:58 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/21 18:56:45 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	int		len;
	char	*new_str;
	int		i;

	if (!s)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	new_str = (char *)malloc(sizeof(char) + (len + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*#include <stdio.h>
int main(void)
{
    char str1[] = "Hola, Mundo! 123";
    char str2[] = "";
    char *str3 = NULL;

    printf("\nTest de ft_striteri()\n");

    // Test 1: Frase normal
    printf("\nTest 1: Frase transformada: %s\n", ft_strmapi(str1, f));

    // Test 2: Cadena vacía
    printf("\nTest 2: Cadena vacía : %s\n", ft_strmapi(str2, f));
    // No debería imprimir nada

    // Test 3: Puntero nulo
    printf("\nTest 3: Puntero nulo : %s\n", ft_strmapi(str3, f));
    // No debería causar fallos, no debería imprimir nada

    return (0);
}
*/