/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:24:02 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/23 17:24:06 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//busca la primera aparición de un byte específico en un bloque de memoria. 
//Retorna un puntero a la primera aparición del byte buscado en el bloque de memoria. NULL si el byte no se encuentra en el bloque de memoria.

#include <stdio.h>

char    *ft_memchr (const char    *str, int  byte_x, size_t   byte_lenght)
{
    const unsigned char *p = (const unsigned char *)str; // Convertir a unsigned char para acceso byte a byte y const porque solo necesitamos leer
    unsigned char byte = (unsigned char)byte_x; // Convertir byte_x a unsigned char para que coincida con el tipo de los bytes en memoria

    while (byte_lenght--) 
    {
        if (*p == byte) 
            return (char *)p; // Retornar el puntero al byte encontrado REVISAR porque retoerna como char si es constante
        p++; // Avanzar al siguiente byte
    }
    return (NULL);

}

int main(void)
{
    printf("\nTest de ft_memchr()\n");

    char strArray[10] = "Hola mundo";
    char x = 'm';
    printf("\nEsperado: Encontrar '%c' en la posición 5\n", x);  // Mensaje de expectativa
    char *result = ft_memchr(strArray, x, sizeof(strArray));
    if (result != NULL)
        printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
    else
        printf("Resultado: No encontrado\n");

    char x2 = 'z';
    printf("\nEsperado: No encontrar '%c'\n", x2);  // Mensaje de expectativa
    result = ft_memchr(strArray, x2, sizeof(strArray));
    if (result != NULL)
        printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
    else
        printf("Resultado: No encontrado\n");

    char x3 = ' ';
    printf("\nEsperado: Encontrar espacio en la posición 4\n");  // Mensaje de expectativa
    result = ft_memchr(strArray, x3, sizeof(strArray));
    if (result != NULL)
        printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
    else
        printf("Resultado: No encontrado\n");

    char x4 = 'H';
    printf("\nEsperado: Encontrar '%c' en la posición 0\n", x4);  // Mensaje de expectativa
    result = ft_memchr(strArray, x4, sizeof(strArray));
    if (result != NULL)
        printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
    else
        printf("Resultado: No encontrado\n");

    char x5 = '\0';
    printf("\nEsperado: Encontrar '\\0' en la posición 9\n");  // Mensaje de expectativa
    result = ft_memchr(strArray, x5, sizeof(strArray));
    if (result != NULL)
        printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
    else
        printf("Resultado: No encontrado\n");

    char x6 = 'd';
    printf("\nEsperado: Encontrar '%c' en la posición 8\n", x6);  // Mensaje de expectativa
    result = ft_memchr(strArray, x6, sizeof(strArray));
    if (result != NULL)
        printf("Resultado: Encontrado en la posición %ld\n", result - strArray);
    else
        printf("Resultado: No encontrado\n");

    return 0;
    }
    
