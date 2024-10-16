/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:58:34 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/16 15:58:37 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:03:27 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/14 18:03:29 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>//malloc
#include "libft.h" 
//#include <stdio.h>

// Función para añadir un nodo al principio de la lista
void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
// Función para imprimir la lista
void print_list(t_list *lst)
{
	while (lst != NULL)
	{ // Mientras haya nodos en la lista
		printf("%d -> ",*(int *) lst->content);// Imprimimos el nodo actual
		lst = lst->next; // Pasamos al siguiente nodo
	}
	printf("NULL\n"); // Imprimimos NULL al final de la lista
}

int main()
{
	t_list *head = NULL; // Inicializamos el puntero a la lista en NULL
	t_list *new_node;

	// Creamos y añadimos nodos a la lista
	int *value1 = malloc(sizeof(int)); // Reserva memoria para un entero
	*value1 = 3; // Asigna el valor 3
	new_node = ft_lstnew(value1); // Pasa el puntero al contenido
	ft_lstadd_front(&head, new_node); // Añadimos 3 al principio

	int *value2 = malloc(sizeof(int)); // Reserva memoria para un entero
	*value2 = 5; // Asigna el valor 5
	new_node = ft_lstnew(value2); // Pasa el puntero al contenido
	ft_lstadd_front(&head, new_node); // Añadimos 5 al principio

	int *value3 = malloc(sizeof(int)); // Reserva memoria para un entero
	*value3 = 7; // Asigna el valor 7
	new_node = ft_lstnew(value3); // Pasa el puntero al contenido
	ft_lstadd_front(&head, new_node); // Añadimos 7 al principio

	// Imprimimos la lista
	print_list(head); // Debería imprimir: 7 -> 5 -> 3 -> NULL

	// Liberar la memoria (opcional)
	t_list *tmp;
	while (head != NULL) {
		tmp = head;          // Guardamos el nodo actual
		head = head->next;   // Pasamos al siguiente nodo
		free(tmp->content);  // Liberamos la memoria del contenido
		free(tmp);          // Liberamos la memoria del nodo
	}

	return 0; // Fin del programa
}
*/
