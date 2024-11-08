/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <olalsanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:10:05 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/24 18:52:37 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[11];
	int		i;

	if (n == -2147483648)
		return ((void)write(fd, "-2147483648", 11));
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	i = 0;
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		write(fd, &buffer[--i], 1);
}
/* #include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	// Cambiado a O_APPEND
	if (fd == -1) {
		return (EXIT_FAILURE); // Manejo de error al abrir el archivo
	}

	ft_putnbr_fd(12345, fd);
	ft_putnbr_fd(-6789, fd);
	ft_putnbr_fd(0, fd);
	ft_putnbr_fd(-2147483648, fd);

	close(fd); // Cierra el archivo
	return (EXIT_SUCCESS);
} */