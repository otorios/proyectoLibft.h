/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:50:22 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/14 17:50:25 by olalsanc         ###   ########.fr       */
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
    
    return 0; // Salir con éxito
}
*/