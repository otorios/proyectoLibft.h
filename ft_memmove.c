/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:24:17 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/24 15:24:20 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h> // Para size_t

void *ft_memmove(void *dest, const void *src, size_t num) 
{
    const unsigned char *s = (const unsigned char *)src;
    unsigned char *d = (unsigned char *)dest;
    size_t i;

    if (s < d) { // Copia de atrás hacia adelante
        i = num;
        while (i > 0) {
            i--;//decrementamos primeo para asegurar una bena posición. si n es 4 tenemso que comenzar en el valor 3 para termianr en el 0 y que sean 4 posiciones reales.
            d[i] = s[i];
        }
    } else { // Copia de adelante hacia atrás
        i = 0;
        while (i < num) {
            d[i] = s[i];
            i++;
        }
    }

    return dest; // Retornamos el puntero original a dest
}

int main(void) 
{
    printf("Este es el test de la funcion ft_memmove:\n");

    char src1[] = "Hello, World!";
    char dest1[20];

    // Prueba de copiado sin superposición
    ft_memmove(dest1, src1, 13);
    printf("Copiado sin superposición: %s\n", dest1); // Debería imprimir "Hello, World!"

    // Prueba de copiado con superposición
    char src2[] = "Hello, World!";
    ft_memmove(src2 + 7, src2, 6); // Copia "Hello" a la posición de "World"
    printf("Copiado con superposición: %s\n", src2); // Debería imprimir "Hello, Hello!"

    return 0;
}

