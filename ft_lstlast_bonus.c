/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:59:15 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/25 17:48:01 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/* #include <stdio.h>
int main(void)
{
    // Crear tres nodos para la lista enlazada
    t_list *nodo1 = ft_lstnew("Primer nodo");
    t_list *nodo2 = ft_lstnew("Segundo nodo");
    t_list *nodo3 = ft_lstnew("Último nodo");

    // Enlazamos los nodos
    nodo1->next = nodo2;
    nodo2->next = nodo3;
    nodo3->next = NULL;  // El último nodo apunta a NULL

    // Llamamos a ft_lstlast para obtener el último nodo
    t_list *ultimo = ft_lstlast(nodo1);

    // Imprimimos el contenido del último nodo
    if (ultimo)
        printf("El contenido del último nodo es: %s\n", (char *)ultimo->content);
    else
        printf("La lista está vacía.\n");

    return (0);
} */
