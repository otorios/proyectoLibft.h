/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:20:20 by olalsanc          #+#    #+#             */
/*   Updated: 2024/10/06 11:20:22 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if (s == NULL) return;
    
    while (*s) 
    {
        write(fd, s, 1);
        s++;
    }
}
/*#include <stdio.h>
int main() 
{
    printf ("Test ft_putstr_fd\n");

    ft_putstr_fd("Hola, mundo!\n", 1);
    return 0;
}
*/