/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olalsanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:11:38 by olalsanc          #+#    #+#             */
/*   Updated: 2024/09/11 17:12:17 by olalsanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

/*
int	main(void)
{
	int value;
	char    x;
	char	number;
	char	str;
	size_t buffer_size = 10;  // Tamaño del buffer
	size_t varsize = 5;       // Número de bytes a inicializar
	char varbuffer[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Buffer con valores iniciales
	size_t i;
	
	
	printf("\nTest de ft_isascii()\n");

	// Test 1: Comprobando con un valor dentro del rango ASCII
	// Esperado: 1 (es un valor ASCII)
	value = 65; // 'A'
	printf("Test 1 - valor = %d ('A'): %d\n", value, ft_isascii(value)); 

	// Test 2: Comprobando con un valor límite inferior del rango ASCII
	// Esperado: 1 (es un valor ASCII)
	value = 0; // Carácter nulo
	printf("Test 2 - valor = %d (carácter nulo): %d\n", value, ft_isascii(value)); 

	// Test 3: Comprobando con un valor límite superior del rango ASCII
	// Esperado: 1 (es un valor ASCII)
	value = 127; // Carácter de eliminación
	printf("Test 3 - valor = %d (carácter de eliminación): %d\n", value, ft_isascii(value)); 

	// Test 4: Comprobando con un valor fuera del rango ASCII
	//Esperado: 0 (no es un valor ASCII)
	value = 128; // Fuera del rango ASCII
	printf("Test 4 - valor = %d (fuera del rango ASCII): %d\n", value, ft_isascii(value));

	// Test 5: Comprobando con un valor mucho mayor
	// Esperado: 0 (no es un valor ASCII)
	value = 255; // Fuera del rango ASCII
	printf("Test 5 - valor = %d (fuera del rango ASCII): %d\n", value, ft_isascii(value)); 
	

	//***************************************************

	
	printf("\nTest de ft_toupper()\n");
	
	// Test 1: Letra minúscula
	x = 'a';
	printf("Test 1. x = %c, resultado: %c\n", x, ft_toupper(x));

	// Test 2: Letra minúscula
	x = 'z';
	printf("Test 2. x = %c, resultado: %c\n", x, ft_toupper(x));

	// Test 3: Letra mayúscula (sin cambio)
	x = 'A';
	printf("Test 3. x = %c, resultado: %c\n", x, ft_toupper(x));

	// Test 4: Número (sin cambio)
	x = '1';
	printf("Test 4. x = %c, resultado: %c\n", x, ft_toupper(x));

	// Test 5: Carácter especial (sin cambio)
	x = '$';
	printf("Test 5. x = %c, resultado: %c\n", x, ft_toupper(x));

	// Test 6: Letra minúscula intermedia
	x = 'm';
	printf("Test 6. x = %c, resultado: %c\n", x, ft_toupper(x));


	//***************************************************


	printf("\nTest de ft_tolower()\n");
	
	// Test 1: Letra minúscula
	x = 'a';
	printf("Test 1. x = %c, resultado: %c\n", x, ft_tolower(x));

	// Test 2: Letra minúscula
	x = 'z';
	printf("Test 2. x = %c, resultado: %c\n", x, ft_tolower(x));

	// Test 3: Letra mayúscula (sin cambio)
	x = 'A';
	printf("Test 3. x = %c, resultado: %c\n", x, ft_tolower(x));

	// Test 4: Número (sin cambio)
	x = '1';
	printf("Test 4. x = %c, resultado: %c\n", x, ft_tolower(x));

	// Test 5: Carácter especial (sin cambio)
	x = '$';
	printf("Test 5. x = %c, resultado: %c\n", x, ft_tolower(x));

	// Test 6: Letra minúscula intermedia
	x = 'm';
	printf("Test 6. x = %c, resultado: %c\n", x, ft_tolower(x));
	
	
	//***************************************************
	

	printf("\nTest de ft_isdigit()\n");
	
	// Test 1: Comprobando con un dígito
	// Esperado: 1 (es un dígito)
	number = '5';
	printf("Test 1 - number = '5': %d\n", ft_isdigit(number)); 

	// Test 2: Comprobando con otro dígito
	// Esperado: 1 (es un dígito)
	number = '0';
	printf("Test 2 - number = '0': %d\n", ft_isdigit(number)); 

	// Test 3: Comprobando con una letra
	// Esperado: 0 (no es un dígito)
	number = 'A';
	printf("Test 3 - number = 'A': %d\n", ft_isdigit(number)); 

	// Test 4: Comprobando con un símbolo
	// Esperado: 0 (no es un dígito)
	number = '#';
	printf("Test 4 - number = '#': %d\n", ft_isdigit(number)); 

	// Test 5: Comprobando con un espacio en blanco
	// Esperado: 0 (no es un dígito)
	number = ' ';
	printf("Test 5 - number = ' ': %d\n", ft_isdigit(number)); 
	
	
	//***************************************************
	

	printf("\nTest de ft_isalpha()\n");
	
	// Test 1: Comprobando con un número
	// Esperado: 0 (no es una letra)
	str = '4';
	printf("Test 1 - str = '4': %d\n", ft_isalpha(str)); 

	// Test 2: Comprobando con una letra mayúscula
	// Esperado: 1 (es una letra)
	str = 'A';
	printf("Test 2 - str = 'A': %d\n", ft_isalpha(str)); 

	// Test 3: Comprobando con una letra minúscula
	// Esperado: 1 (es una letra)
	str = 'z';
	printf("Test 3 - str = 'z': %d\n", ft_isalpha(str)); 

	// Test 4: Comprobando con un símbolo
	// Esperado: 0 (no es una letra)
	str = '!';
	printf("Test 4 - str = '!': %d\n", ft_isalpha(str)); 

	// Test 5: Comprobando con un espacio en blanco
	// Esperado: 0 (no es una letra)
	str = ' ';
	printf("Test 5 - str = ' ': %d\n", ft_isalpha(str)); 
	
	
	//***************************************************
		
		
	
	
	printf("\nTest de ft_isalnum()\n");
	
	// Test 1: Comprobando con un número
	// Esperado: 1 (es un número)
	x = '4';
	printf("Test 1 - str = '4': %d\n", ft_isalnum(x)); 
	
	// Test 2: Comprobando con una letra mayúscula
	// Esperado: 1 (es una letra)
	x = 'A';
	printf("Test 2 - str = 'A': %d\n", ft_isalnum(x)); 
	
	// Test 3: Comprobando con una letra minúscula
	// Esperado: 1 (es una letra)
	x = 'z';
	printf("Test 3 - str = 'z': %d\n", ft_isalnum(x)); 
	
	// Test 4: Comprobando con un símbolo
	// Esperado: 0 (no es una letra ni un número)
	x = '!';
	printf("Test 4 - str = '!': %d\n", ft_isalnum(x));  
	
	// Test 5: Comprobando con un espacio en blanco
	// Esperado: 0 (no es una letra ni un número)
	x = ' ';
	printf("Test 5 - str = ' ': %d\n", ft_isalnum(x)); 
	
	
	//***************************************************
	
		
	printf("\nTest de ft_isprint()\n");

	// Test 1: Valor fuera del rango imprimible (antes del espacio)
	// Esperado: 0 (no es un carácter imprimible)
	value = 31; // No es imprimible
	printf("Test 1 - valor = %d (antes del espacio): %d (no es un carácter imprimible)\n", value, ft_isprint(value));

	// Test 2: Primer carácter imprimible (espacio)
	// Esperado: 1 (es un carácter imprimible)
	value = 32; // Espacio
	printf("Test 2 - valor = %d (espacio): %d (es un carácter imprimible)\n", value, ft_isprint(value));

	// Test 3: Carácter imprimible (signo de exclamación)
	// Esperado: 1 (es un carácter imprimible)
	value = 33; // '!'
	printf("Test 3 - valor = %d ('!'): %d (es un carácter imprimible)\n", value, ft_isprint(value));

	// Test 4: Carácter imprimible (arroba)
	// Esperado: 1 (es un carácter imprimible)
	value = 64; // '@'
	printf("Test 4 - valor = %d ('@'): %d (es un carácter imprimible)\n", value, ft_isprint(value));

	// Test 5: Carácter imprimible (letra A)
	// Esperado: 1 (es un carácter imprimible)
	value = 65; // 'A'
	printf("Test 5 - valor = %d ('A'): %d (es un carácter imprimible)\n", value, ft_isprint(value));

	// Test 6: Último carácter imprimible (tilde)
	// Esperado: 1 (es un carácter imprimible)
	value = 126; // '~'
	printf("Test 6 - valor = %d ('~'): %d (es un carácter imprimible)\n", value, ft_isprint(value));

	// Test 7: Valor fuera del rango imprimible (después del tilde)
	value = 127; // No imprimible
	printf("Test 7 - valor = %d (después del tilde): %d (no es un carácter imprimible)\n", value, ft_isprint(value));

	// Test 8: Valor mucho mayor (fuera del rango imprimible)
	// Esperado: 0 (no es un carácter imprimible)
	value = 128; // Fuera del rango imprimible
	printf("Test 8 - valor = %d (fuera del rango imprimible): %d (no es un carácter imprimible)\n", value, ft_isprint(value));

	// Test 9: Valor fuera del rango imprimible (mayor aún)
	// Esperado: 0 (no es un carácter imprimible)
	value = 255; // Fuera del rango imprimible
	printf("Test 9 - valor = %d (fuera del rango imprimible): %d (no es un carácter imprimible)\n", value, ft_isprint(value));
		
	
	//***************************************************
	

	printf("\nTest de ft_strlen()\n");
	
	// Test 1: Cadena general
	// Esperado: 13 (longitud de "Hello, World!")
	char *str1 = "Hello, World!";
	printf("Test 1 - str = \"%s\": %zu\n", str1, ft_strlen(str1));

	// Test 2: Cadena vacía
	// Esperado: 0 (longitud de "")
	char *str2 = "";
	printf("Test 2 - str = \"\": %zu\n", ft_strlen(str2));

	// Test 3: Cadena con un solo carácter
	// Esperado: 1 (longitud de "a")
	char *str3 = "a";
	printf("Test 3 - str = \"a\": %zu\n", ft_strlen(str3));

	// Test 4: Cadena corta
	// Esperado: 5 (longitud de "Libft")
	char *str4 = "Libft";
	printf("Test 4 - str = \"Libft\": %zu\n", ft_strlen(str4));

	// Test 5: Cadena larga
	// Esperado: 45 (longitud de "Esta es una cadena más larga para probar.")
	char *str5 = "Esta es una cadena más larga para probar.";
	printf("Test 5 - str = \"Esta es una cadena más larga para probar.\": %zu\n", ft_strlen(str5));

	// Test 6: Cadena con carácter nulo al principio
	// Esperado:  (longitud de "Hello", ignorando el nulo al principio)
	char *str6 = "\0Hello";
	printf("Test 6 - str = \"\\0Hello\": %zu\n", ft_strlen(str6));
	
		
	//***************************************************
	
	
	printf("\nTest de ft_bzero()\n");
	
	i = 0;
	// Mostrar el buffer antes de llamar a ft_bzero
	printf("Buffer antes de ft_bzero: ");
	while (i < buffer_size) 
	{
		printf("%d ", (unsigned char)varbuffer[i]);
		i++;
	}
	printf("\n");

	// Llamada a ft_bzero
	ft_bzero(varbuffer, varsize, buffer_size);

	// Mostrar el buffer después de llamar a ft_bzero
	printf("Buffer después de ft_bzero: ");
	i = 0;  // Reiniciar el índice
	while (i < buffer_size) 
	{
		printf("%d ", (unsigned char)varbuffer[i]);
		i++;
	}
	printf("\n");


	//***************************************************


	printf("\nTest de ft_memset()\n");
	
	i = 0;
	// Mostrar el buffer antes de llamar a ft_memset
	printf("Buffer antes de ft_memset: ");
	
	i = 0;
	while (i < buffer_size) 
	{
		printf("%d ", (unsigned char)varbuffer[i]);
		i++;
	}
	printf("\n");

	// Llamada a ft_memset
	ft_memset(varbuffer, 8, varsize, buffer_size);

	// Mostrar el buffer después de llamar a ft_memset
	printf("Buffer después de ft_memset: ");
	i = 0;  // Reiniciar el índice
	while (i < buffer_size) 
	{
		printf("%d ", (unsigned char)varbuffer[i]);
		i++;
	}
	printf("\n");

    
	//***************************************************
	
	
	printf("\nTest de ft_memcpy()\n");
	
	//Cuando trabajas con cadenas de caracteres en C y utilizas funciones como printf con el formato %s, el formato %s está diseñado específicamente para trabajar con cadenas de caracteres (arrays de char) que están terminadas en un carácter nulo ('\0'). 
	//La función printf reconoce automáticamente el carácter nulo para saber dónde termina la cadena y por lo tanto, no necesitas un bucle explícito para imprimir cada carácter.
	
	char	source[6] = "Mundo";
	char	dest[6] = "Hola";// que teng el espacio para la palabra que queremos meter, ene ste caso mundo
	size_t	num;
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
	size_t num_ints = 5 * sizeof(int); // Número de bytes a copiar (5 enteros);
	//El valor 5 que estás pasando a ft_memcpy solo indica el número de enteros, no el número total de bytes. 
	//Dado que cada entero puede ser de 4 bytes en la mayoría de las plataformas, estás copiando solo 5 bytes, lo cual no es suficiente para copiar todos los enteros.

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


	//***************************************************


	// Test de ft_strchr()
	printf("\nTest de ft_strchr()\n");

	char strArray[6] = "Hola";
	x = 'l';
	printf("Buscamos \"%c\" en la palabra \"%s\", y está en la posición %ld\n", x, strArray, ft_strchr(strArray, x) - strArray);

	char strArray2[6] = "Hola";
	char x2 = 'z';
	printf("Buscamos \"%c\" en la palabra \"%s\", y está en la posición %ld\n", x2, strArray2, ft_strchr(strArray2, x2) - strArray2);

	char strArray3[6] = "Hola";
	char x3 = '8';
	printf("Buscamos \"%c\" en la palabra \"%s\", y está en la posición %ld\n", x3, strArray3, ft_strchr(strArray3, x3) - strArray3);

	char strArray4[6] = "Hola";
	char x4 = 'H';
	printf("Buscamos \"%c\" en la palabra \"%s\", y está en la posición %ld\n", x4, strArray4, ft_strchr(strArray4, x4) - strArray4);

	char strArray5[6] = "Hola";
	char x5 = '\0';
	printf("Buscamos \"%c\" en la palabra \"%s\", y está en la posición %ld\n", x5, strArray5, ft_strchr(strArray5, x5) - strArray5);

	char strArray6[12] = "Hola mundo";
	char x6 = ' ';
	printf("Buscamos \"%c\" en la palabra \"%s\", y está en la posición %ld\n", x6, strArray6, ft_strchr(strArray6, x6) - strArray6);


    
	return (0);
}
*/

int	main(void)
{
	printf("\nTest de ft_strrchr()\n");

	char strArrayR[6] = "Hola";
	char y = 'l';
	char *result = ft_strrchr(strArrayR, y);
	if (result != NULL) {
	printf("Buscamos \"%c\" en la palabra \"%s\", y está en la posición %ld\n",
	       y, strArrayR, result - strArrayR);
	} else {
	printf("Buscamos \"%c\" en la palabra \"%s\", y no se encontró.\n", y, strArrayR);
	}

	char strArrayR2[6] = "Hola";
	char y2 = 'z';
	result = ft_strrchr(strArrayR2, y2);
	if (result != NULL) {
	printf("Buscamos \"%c\" en la palabra \"%s\", y está en la posición %ld\n",
	       y2, strArrayR2, result - strArrayR2);
	} else {
	printf("Buscamos \"%c\" en la palabra \"%s\", y no se encontró.\n", y2, strArrayR2);
	}

	char strArrayR3[6] = "Hola";
	char y3 = '8';
	result = ft_strrchr(strArrayR3, y3);
	if (result != NULL) {
	printf("Buscamos \"%c\" en la palabra \"%s\", y está en la posición %ld\n",
	       y3, strArrayR3, result - strArrayR3);
	} else {
	printf("Buscamos \"%c\" en la palabra \"%s\", y no se encontró.\n", y3, strArrayR3);
	}

	char strArrayR4[6] = "Hola";
	char y4 = 'H';
	result = ft_strrchr(strArrayR4, y4);
	if (result != NULL) {
	printf("Buscamos \"%c\" en la palabra \"%s\", y está en la posición %ld\n",
	       y4, strArrayR4, result - strArrayR4);
	} else {
	printf("Buscamos \"%c\" en la palabra \"%s\", y no se encontró.\n", y4, strArrayR4);
	}

	char strArrayR5[6] = "Hola";
	char y5 = '\0';
	result = ft_strrchr(strArrayR5, y5);
	if (result != NULL) {
	printf("Buscamos el carácter nulo en la palabra \"%s\", y está en la posición %ld\n",
	       strArrayR5, result - strArrayR5);
	} else {
	printf("Buscamos el carácter nulo en la palabra \"%s\", y no se encontró.\n", strArrayR5);
	}

	char strArrayR6[12] = "Hola mundo";
	char y6 = ' ';
	result = ft_strrchr(strArrayR6, y6);
	if (result != NULL) {
	printf("Buscamos \"%c\" en la palabra \"%s\", y está en la posición %ld\n",
	       y6, strArrayR6, result - strArrayR6);
	} else {
	printf("Buscamos \"%c\" en la palabra \"%s\", y no se encontró.\n", y6, strArrayR6);
	}
	retur (0);
}
 
 /*
int	main(void)
{
 	
 	printf("\nTest de ft_memchr()\n");

char strArray_memchr[10] = "Hola mundo";
char x_memchr = 'm';
printf("Buscamos \"%c\" en el bloque \"%s\", y está en la posición %ld\n",
       x_memchr, strArray_memchr, (char *)ft_memchr(strArray_memchr, x_memchr, sizeof(strArray_memchr)) - strArray_memchr);

char strArray2_memchr[10] = "Hola mundo";
char x2_memchr = 'z';
printf("Buscamos \"%c\" en el bloque \"%s\", y está en la posición %ld\n",
       x2_memchr, strArray2_memchr, (char *)ft_memchr(strArray2_memchr, x2_memchr, sizeof(strArray2_memchr)) - strArray2_memchr);

char strArray3_memchr[10] = "Hola mundo";
char x3_memchr = ' ';
printf("Buscamos \"%c\" en el bloque \"%s\", y está en la posición %ld\n",
       x3_memchr, strArray3_memchr, (char *)ft_memchr(strArray3_memchr, x3_memchr, sizeof(strArray3_memchr)) - strArray3_memchr);

char strArray4_memchr[10] = "Hola mundo";
char x4_memchr = 'H';
printf("Buscamos \"%c\" en el bloque \"%s\", y está en la posición %ld\n",
       x4_memchr, strArray4_memchr, (char *)ft_memchr(strArray4_memchr, x4_memchr, sizeof(strArray4_memchr)) - strArray4_memchr);

char strArray5_memchr[10] = "Hola mundo";
char x5_memchr = '\0';
printf("Buscamos \"%c\" en el bloque \"%s\", y está en la posición %ld\n",
       x5_memchr, strArray5_memchr, (char *)ft_memchr(strArray5_memchr, x5_memchr, sizeof(strArray5_memchr)) - strArray5_memchr);

char strArray6_memchr[10] = "Hola mundo";
char x6_memchr = 'd';
printf("Buscamos \"%c\" en el bloque \"%s\", y está en la posición %ld\n",
       x6_memchr, strArray6_memchr, (char *)ft_memchr(strArray6_memchr, x6_memchr, sizeof(strArray6_memchr)) - strArray6_memchr);
       
       return (0);
       }
       */
