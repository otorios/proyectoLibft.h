/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:53:23 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/17 15:53:28 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convierte a solo lectura sin modificar el contenido
//const unsigned char *sour = (const unsigned char *)source;
//es un tipo de datos de tamaño 1 byte,
//lo que te permite trabajar a nivel de byte, lo cual es necesario 
//para copiar bloques de memoria.
//unsigned char *des = (unsigned char *)dest;
//if(! source || ! dest) Comprueba si los punteros son nulos

#include "libft.h"

void	*ft_memcpy(const void	*source, void	*dest, size_t	num)
{
	const unsigned char	*sour;
	unsigned char		*des;

	if (!source || !dest)
		return (NULL);
	sour = (const unsigned char *) source;
	des = (unsigned char *) dest;
	while (num--)
		*des++ = *sour++;
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	printf("\nTest de ft_memcpy()\n");
	
	//Cuando trabajas con cadenas de caracteres en C y utilizas funciones
	//como printfcon el formato %s, el formato %s está diseñado específicamente
	//para trabajar con cadenas de caracteres (arrays de char) que están 
	//terminadas en un carácter nulo ('\0')
	//La función printf reconoce automáticamente el carácter nulo para saber 
	//dónde termina la cadena y por lo tanto, no necesitas un bucle explícito 
	//para imprimir cada carácter.
	
	char	source[6] = "Mundo";
	char	dest[6] = "Hola";
	// que teng el espacio para la palabra que queremos meter, 
	//en este caso "Mundo"
	size_t	num;
	int i;
	num = 5;
	
	printf("Valor de dest antes de concatenar 5 posiciones: '%s'\n", dest);
	ft_memcpy(source, dest,	num);	
	printf("Valor de dest despues de concatenar 5 posiciones: '%s'\n", dest);
	
	char	source2[6] = "Mundo";
	char	dest2[6] = "Hola";
	num = 2;

	printf("Valor de dest antes de concatenar 2 posiciones: '%s'\n", dest2);
	ft_memcpy(source2, dest2, num);	
	printf("Valor de dest despues de concatenar 2 posiciones: '%s'\n", dest2);

	int source_ints[5] = {1, 2, 3, 4, 5}; // Array de enteros de origen
	int dest_ints[5] = {0}; // Array de enteros de destino, inicializado a 0
	size_t num_ints = 5 * sizeof(int); 
	//Número de bytes a copiar (5 enteros);
	//El valor 5 que estás pasando a ft_memcpy solo indica el número de enteros,
	//no el número total de bytes. 
	//Dado que cada entero puede ser de 4 bytes en la mayoría de las plataformas,
	//estás copiando solo 5 bytes, lo cual no es suficiente para copiar todos 
	//los enteros.

	printf("Valor de dest_ints antes de concatenar: ");
	i = 0;
	while (i < 5) 
	{
		printf("%d ", dest_ints[i]);
		i++;
	}
	printf("\n");
	ft_memcpy(source_ints, dest_ints, num_ints);	
	printf("Valor de dest_ints despues de concatenar: ");
	i = 0;
	while (i < 5) 
	{
		printf("%d ", dest_ints[i]);
		i++;
	}
    	printf("\n");
    	return (0);
}
*/