/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:01:33 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/18 18:09:56 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//gcc -Wall -Wextra -Werror ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstclear_bonus.c ft_lstadd_back_bonus.c ft_strlcpy.c ft_strlen


/* void	*f(void	*content)
{
	char	*str;

	str = (char *)content;
	if (str)
		str[0] = '-';
	return (str);
} */
void *f(void *content)
{
    char *str = (char *)content;
    if (!str)
        return NULL;

    // Crea una nueva cadena y copia el contenido
    char *new_str = malloc(ft_strlen(str) + 1); // Reserva memoria
    if (!new_str)
        return NULL; // Verifica la reserva

    ft_strlcpy(new_str, str, 3); // Copia el contenido
    new_str[0] = '-'; // Cambia el primer carácter

    return new_str; // Devuelve la nueva cadena
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst;  // Puntero a la nueva lista
    t_list *new_node; // Puntero para crear cada nuevo nodo

    if (!lst || !f)  // Verifica que la lista y la función no sean nulos
        return (NULL);

    new_lst = NULL;  // Inicializa la nueva lista en NULL

    // Mientras queden nodos en la lista original
    while (lst)
    {
        // Aplica la función 'f' al contenido del nodo actual y crea un nuevo nodo con ese contenido
        new_node = ft_lstnew(f(lst->content));

        // Si falla la creación del nuevo nodo, libera toda la memoria asignada hasta el momento
        if (!new_node)
        {
            ft_lstclear(&new_lst, del);  // Libera la memoria de la nueva lista
            return (NULL);
        }

        // Añade el nuevo nodo a la lista nueva
        ft_lstadd_back(&new_lst, new_node);

        // Avanza al siguiente nodo en la lista original
        lst = lst->next;
    }

    // Devuelve la nueva lista
    return (new_lst);
}
#include <stdio.h>

void *duplicate_content(void *content)
{
    int *new_content = malloc(sizeof(int));
    if (!new_content)
        return (NULL);
    *new_content = *(int *)content;  // Solo copia el valor, no lo duplica
    return (new_content);
}


// Función para liberar el contenido (simple para enteros)
void del_content(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    t_list *new_lst;
    *(int *)(lst->content) = 42; // Asignar un valor al contenido

    // Agregar más nodos a la lista original
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)(lst->next->content) = 21;

    // Llamar a ft_lstmap con la función que duplica el contenido
    new_lst = ft_lstmap(lst, duplicate_content, del_content);

    // Imprimir los valores de la nueva lista

	printf("Nueva lista:\n");
	while (new_lst)
	{
		printf("%d\n", *(int *)(new_lst->content));
		new_lst = new_lst->next;
	}

	// Imprimir los valores de la lista original
	printf("Lista original:\n");
	while (lst)
	{
		printf("%d\n", *(int *)(lst->content));
		lst = lst->next;
	}

    // Liberar memoria
    ft_lstclear(&lst, del_content);
    ft_lstclear(&new_lst, del_content);

    return (0);
}
