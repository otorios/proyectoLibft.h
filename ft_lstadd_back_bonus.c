/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:59:47 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/21 19:08:29 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->next = NULL;
}
/* #include <stdio.h>

int main(void)
{
    t_list *lista;      // Declaramos una lista enlazada
    t_list *nuevo_nodo; // Declaramos un nuevo nodo

    // Creamos el primer nodo con contenido "primer"
    lista = ft_lstnew("primer");

    // Creamos un nuevo nodo con contenido "segundo"
    nuevo_nodo = ft_lstnew("segundo");

    // Añadimos el nuevo nodo al final de la lista
    ft_lstadd_back(&lista, nuevo_nodo);

    // Imprimimos el contenido de la lista para verificar
    t_list *temp = lista;
    while (temp)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    return (0);
} */
