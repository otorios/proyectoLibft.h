/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:00:05 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/17 18:27:25 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  // Asumiendo que aquí está definida t_list

void	del(void	*content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
/* int main()
{
    // Crear un nuevo nodo con contenido dinámico
    char *data = malloc(20);
    t_list *node = ft_lstnew(data); // Suponiendo que ft_lstnew está definida

    // Ahora eliminamos el nodo
    ft_lstdelone(node, del); // Llama a la función para eliminar el nodo

    return (0); // Finaliza el programa
} */
