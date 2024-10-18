/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:01:11 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/18 17:07:33 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	f(void	*content)
{
	char	*str;

	str = (char *)content;
	if (str)
		str[0] = '-';
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
/* 
#include <stdio.h>
#include <string.h>

int main() 
{
    // Creamos contenido dinámico para los nodos
    char *str1 = malloc(7); // Asignamos memoria para "Nodo 1"
    char *str2 = malloc(7); // Asignamos memoria para "Nodo 2"
    char *str3 = malloc(7); // Asignamos memoria para "Nodo 3"
    
    // Copiamos las cadenas a la memoria asignada
    if (str1) ft_strlcpy(str1, "Nodo 1", 7);
    if (str2) ft_strlcpy(str2, "Nodo 2", 7);
    if (str3) ft_strlcpy(str3, "Nodo 3", 7);

    // Creamos nodos de la lista
    t_list *node1 = ft_lstnew(str1);
    t_list *node2 = ft_lstnew(str2);
    t_list *node3 = ft_lstnew(str3);

    // Enlazamos los nodos
    node1->next = node2;
    node2->next = node3;

    // Aplicamos ft_lstiter para reemplazar el primer carácter con '-'
    ft_lstiter(node1, f);

    // Imprimimos para verificar el resultado
    printf("Contenido nodo 1: %s\n", (char *)node1->content);
    printf("Contenido nodo 2: %s\n", (char *)node2->content);
    printf("Contenido nodo 3: %s\n", (char *)node3->content);

    // Liberamos la memoria asignada dinámicamente
    free(str1);
    free(str2);
    free(str3);

    return (0); // Fin del programa
} */
