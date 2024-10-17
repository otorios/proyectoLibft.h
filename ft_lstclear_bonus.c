/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:00:27 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/17 19:27:21 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Función que libera el contenido del nodo (en este caso, un entero)
void	del(void *content)
{
	free (content);
}

// Función que libera los nodos de una lista enlazada
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/* 
#include <stdio.h>
int main()
{
    t_list *head = ft_lstnew(malloc(sizeof(int))); // Crear el primer nodo
    if (!head) return 1; // Verificar error de malloc
    *(int *)(head->content) = 1; // Asignar contenido al primer nodo

    head->next = ft_lstnew(malloc(sizeof(int))); // Crear segundo nodo
    if (!head->next) return 1; // Verificar error de malloc
    *(int *)(head->next->content) = 2; // Asignar contenido al segundo nodo

    head->next->next = ft_lstnew(malloc(sizeof(int))); // Crear tercer nodo
    if (!head->next->next) return 1; // Verificar error de malloc
    *(int *)(head->next->next->content) = 3; // Asignar contenido al tercer nodo

    // Llamar a la función para limpiar la lista
    ft_lstclear(&head, del); 

    // Comprobar si la lista está vacía
    if (head == NULL)
        printf("La lista ha sido limpiada y está vacía.\n");

    return (0); // Fin del programa
} */
