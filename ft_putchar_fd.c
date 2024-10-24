/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:20:00 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/24 19:07:30 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*#include <stdio.h>
int main() 
{
	printf ("Test ft_putchar_fd\n");
	ft_putchar_fd('H', 1); // Escribe 'H' en la salida estándar
	ft_putchar_fd('i', 1); // Escribe 'i' en la salida estándar
	ft_putchar_fd('\n', 1); // Nueva línea
	return (0);
}
*/