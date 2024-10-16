/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:57:10 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/16 15:57:14 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>//malloc
#include "libft.h"
//#include <stdio.h>

t_list	*ft_lstnew(void	*content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int main()
{
    printf("Test ft_lstnew");

	// Ejemplo de contenido para el nuevo nodo
    char *content = "Hola, mundo!";
    
    // Crear un nuevo nodo utilizando ft_lstnew
    t_list *node = ft_lstnew(content);
    
    // Comprobar si el nodo fue creado correctamente
    if (node == NULL)
	{
        printf("Error al crear el nodo.\n");
        return 1; // Salir con error
    }
    
    // Mostrar el contenido del nodo
    printf("Contenido del nodo: %s\n", (char *)node->content);
    
    // Comprobar el puntero next
    if (node->next == NULL)
        printf("El puntero 'next' es NULL, como se esperaba.\n");
    else
        printf("El puntero 'next' no es NULL, hay un error.\n");
    
    // Liberar el nodo (opcional, pero recomendable)
    free(node);

    char *contentNull = NULL;
    t_list *nodeNull = ft_lstnew(contentNull);
    if (nodeNull == NULL)
	{
        printf("Error al crear el nodo.\n");
        return 1; // Salir con error
    }
    printf("Contenido del nodo: %s\n", (char *)nodeNull->content);
    if (nodeNull->next == NULL)
        printf("El puntero 'next' es NULL, como se esperaba.\n");
    else
        printf("El puntero 'next' no es NULL, hay un error.\n");
    free(nodeNull);
    
    return 0; // Salir con éxito
}
*/