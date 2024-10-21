/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:01:33 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/21 19:03:15 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*next_node;
	void	*new_content;
	t_list	*new_node;

	if (!lst)
		return (NULL);
	next_node = ft_lstmap(lst->next, f, del);
	new_content = f(lst->content);
	new_node = ft_lstnew(new_content);
	if (!new_node)
	{
		del(new_content);
		return (NULL);
	}
	new_node->next = next_node;
	return (new_node);
}
/* 
#include <stdio.h>

void	*add_dash(void	*content)
{
	char	*str;
	char	*new_str;

	str = (char *)content;
	new_str = malloc(ft_strlen(str) + 2);
	if (new_str)
	{
		new_str[0] = '-';
		ft_strlcpy(new_str + 1, str, ft_strlen(str) + 1);
	}
	return (new_str);
}

void	del_content(void *content)
{
	free(content);
}

//gcc -Wall -Wextra -Werror ft_lstmap_bonus.c ft_strlen.c ft_lstnew_bonus.c 
//ft_lstclear_bonus.c ft_strdup.c ft_memcpy.c ft_strlcpy.c 
int main()
{
    // Creamos una lista simple
    t_list *original = ft_lstnew(ft_strdup("Hola"));
	// Usamos strdup para duplicar cadenas
    original->next = ft_lstnew(ft_strdup("Mundo"));
    original->next->next = ft_lstnew(ft_strdup("!"));

    // Imprimimos la lista original
    printf("Lista original:\n");
    t_list *temp = original;
    while (temp)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Aplicamos ft_lstmap
    t_list *modified = ft_lstmap(original, add_dash, del_content);

    // Imprimimos la lista modificada
    printf("\nLista modificada:\n");
    temp = modified;
    while (temp)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    // Liberamos memoria
    ft_lstclear(&original, del_content); // Liberamos la lista original
    ft_lstclear(&modified, del_content); // Liberamos la lista modificada

    return (0);
}
 */