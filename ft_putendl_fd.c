/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:20:40 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/06 11:20:42 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
//#include <fcntl.h>
//#include <stdio.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
int main()
{
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd == -1)
		return (1);

	ft_putendl_fd("Hola, mundo!", fd);
	close(fd);
	return (0);
}
*/