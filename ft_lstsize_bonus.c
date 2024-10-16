/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:58:53 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/16 15:58:56 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_lstsize(t_list	*lst)
{
	size_t	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* #include <stdio.h>
int main(void)
{
	printf("Test ft_lstsize\n");

	printf("3 nodos\n");
	//Creamos nodos
	t_list 	*nodo1 = ft_lstnew((void	*)1);
	t_list 	*nodo2 = ft_lstnew((void	*)2);
	t_list	*nodo3 = ft_lstnew((void	*)3);

	//Enlazamso nodos
	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;
	
	// Probar ft_lstsize con la lista formada
	int size = ft_lstsize(nodo1);

	// Imprimir el resultado del test
	printf("Tamaño de la lista: %d\n", size);// Debería imprimir 3

	printf("1 nodo\n");
	t_list 	*nodoSolitario = ft_lstnew((void	*)1);
	nodoSolitario->next = NULL;
	size = ft_lstsize(nodoSolitario);
	printf("Tamaño de la lista: %d\n", size);// Debería imprimir 1

	printf("Nodo NULL\n");
	t_list 	*nodoNull = ft_lstnew((void	*)NULL);
	nodoNull->next = NULL;
	size = ft_lstsize(nodoSolitario);
	printf("Tamaño de la lista: %d\n", size);// No debería imprimir nada


	return (0);
} */