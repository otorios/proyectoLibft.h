/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:23:49 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/06 11:23:50 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const	*s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s != '\0')
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*copy_word(char const	*s, int len)
{
	char	*word;
	int		i;

	word = (char *)malloc (sizeof (char) + (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const	*s, char c)
{
	int		i;
	int		word_len;
	int		word_count;
	char	**result;

	word_count = count_words(s, c);
	result = (char **)malloc(sizeof (char *) * (word_count +1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			word_len = 0;
			while (s[word_len] != '\0' && s[word_len] != c)
				word_len++;
			result[i++] = copy_word(s, word_len);
			s += word_len;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
/*#include <stdio.h>
int	main(void)
{
	printf("Test ft_split()\n");

	char const	*s = "Esto-es una-frase-que se rompe-con-guiones.";
	//char const *s = "----";
	//char const *s = "-Esto-es-otro----ejemplo";
	//char const *s = NULL;
	//char const *s = "-2-numeros---55-6";
	//char const *s = "";
	char	c = '-';

	printf("frase orginal: %s\n", s);
	char **result = ft_split(s, c);
	// Imprimir los resultados directamente en el main
    int i = 0;
    while (result[i]) 
	{ // Recorre el array hasta encontrar NULL
        printf("\"%s\"\n", result[i]); // Imprime cada substring entre comillas
        i++;
    }
    // Liberar memoria (asegúrate de que tu función ft_split también maneje esto)
    i = 0;
    while (result[i]) 
	{
        free(result[i]); // Libera cada palabra
        i++;
    }
    free(result); // Libera el array de punteros

    return 0;
}
*/