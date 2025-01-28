# libft - Tu primera librería

---

## Índice

1. [Descripción del Proyecto y Círculo de Proyectos - Primer Círculo (Pace)](#Descripción-del-Proyecto-y-Círculo-de-Proyectos---Primer-Círculo-Pace)
2. [Propósito del Proyecto](#propósito-del-proyecto)
3. [Estructura del Proyecto](#estructura-del-proyecto)
4. [Parte Obligatoria](#parte-obligatoria)
   - [Funciones de la libc](#funciones-de-la-libc-a-implementar-y-sus-definiciones)
     | [ft_isalpha](#ft_isalpha)   | [ft_isdigit](#ft_isdigit)   | [ft_isalnum](#ft_isalnum)   | [ft_isascii](#ft_isascii)   |
     | --------------------------- | --------------------------- | --------------------------- | --------------------------- |
     | [ft_isprint](#ft_isprint)    | [ft_strlen](#ft_strlen)     | [ft_memset](#ft_memset)     | [ft_bzero](#ft_bzero)       |
     | [ft_memcpy](#ft_memcpy)      | [ft_memmove](#ft_memmove)   | [ft_strlcpy](#ft_strlcpy)   | [ft_strlcat](#ft_strlcat)   |
     | [ft_toupper](#ft_toupper)   | [ft_tolower](#ft_tolower)   | [ft_strchr](#ft_strchr)     | [ft_strrchr](#ft_strrchr)   |
     | [ft_strncmp](#ft_strncmp)   | [ft_memchr](#ft_memchr)     | [ft_memcmp](#ft_memcmp)     | [ft_strnstr](#ft_strnstr)   |
     | [ft_atoi](#ft_atoi)         | [ft_calloc](#ft_calloc)     | [ft_strdup](#ft_strdup)     |                           |
5. [Parte Bonus](#parte-bonus)
   - [Funciones adicionales para manipulación de listas](#funciones-adicionales-para-manipulación-de-listas-y-sus-definiciones)
     | [ft_lstnew](#ft_lstnew)    | [ft_lstadd_front](#ft_lstadd_front) | [ft_lstsize](#ft_lstsize) |
     | -------------------------- | --------------------------- | --------------------------- |
     | [ft_lstlast](#ft_lstlast)  | [ft_lstadd_back](#ft_lstadd_back) | [ft_lstdelone](#ft_lstdelone) |
     | [ft_lstclear](#ft_lstclear) | [ft_lstiter](#ft_lstiter)    | [ft_lstmap](#ft_lstmap)     |
6. [Cómo Compilar](#cómo-compilar)

---

## Descripción del Proyecto y Círculo de Proyectos - Primer Círculo (Pace)

`libft.a` es una librería personalizada creada como parte del **Primer Círculo de Proyectos** en la escuela 42. El "Círculo Pace" es el grupo inicial de proyectos que todo estudiante debe completar para comenzar a desarrollar su comprensión y habilidades en programación de manera práctica y autónoma, dentro de un entorno colaborativo.

En este proyecto, se implementan funciones básicas de la librería estándar de C (libc), así como funciones adicionales útiles para la manipulación de strings y memoria. El objetivo principal es crear una librería propia, `libft.a`, que te permitirá mejorar tus habilidades en programación en C, con énfasis en la gestión de memoria, manipulación de cadenas y diseño modular de funciones.

Este desafío no solo te familiariza con los conceptos fundamentales de programación, sino que también te ayuda a mejorar la eficiencia en la resolución de problemas y en la optimización de tu código.

La librería contiene funciones como `ft_strlen`, `ft_memset`, `ft_itoa`, entre otras, y también incluye una sección opcional (bonus) para trabajar con listas enlazadas.

Al finalizar este proyecto, habrás ganado una comprensión más profunda de la programación en C y habrás creado una herramienta útil que puedes seguir utilizando en proyectos futuros.


## Propósito del Proyecto

Este proyecto tiene como propósito:

- Implementar funciones fundamentales de la biblioteca estándar de C.  
- Desarrollar herramientas reutilizables para otros proyectos.  
- Practicar el uso de memoria dinámica y gestión de punteros.  

## Estructura del Proyecto

libft/ Makefile # Script de compilación libft.h # Archivo de cabecera con declaraciones de funciones y macros main.c # Programa principal de prueba ft_*.c # Archivos que implementan las funciones

## Parte Obligatoria

### Funciones de la libc a implementar y sus definiciones

1. **`ft_isalpha`**  
   - Verifica si un carácter es alfabético.
   
2. **`ft_isdigit`**  
   - Verifica si un carácter es un dígito.
   
3. **`ft_isalnum`**  
   - Verifica si un carácter es alfabético o un dígito.
   
4. **`ft_isascii`**  
   - Verifica si un carácter es un carácter ASCII válido.
   
5. **`ft_isprint`**  
   - Verifica si un carácter es un carácter imprimible.
   
6. **`ft_strlen`**  
   - Devuelve la longitud de una cadena.
   
7. **`ft_memset`**  
   - Establece un valor en una porción de memoria.
   
8. **`ft_bzero`**  
   - Establece a cero una porción de memoria.
   
9. **`ft_memcpy`**  
   - Copia una porción de memoria de un lugar a otro.
   
10. **`ft_memmove`**  
    - Copia una porción de memoria, manejando correctamente el solapamiento de bloques de memoria.
    
11. **`ft_strlcpy`**  
    - Copia una cadena asegurando no sobrepasar el límite de longitud.
    
12. **`ft_strlcat`**  
    - Concatenación de cadenas asegurando no sobrepasar el límite de longitud.
    
13. **`ft_toupper`**  
    - Convierte un carácter a mayúsculas.
    
14. **`ft_tolower`**  
    - Convierte un carácter a minúsculas.
    
15. **`ft_strchr`**  
    - Devuelve un puntero a la primera aparición de un carácter en una cadena.
    
16. **`ft_strrchr`**  
    - Devuelve un puntero a la última aparición de un carácter en una cadena.
    
17. **`ft_strncmp`**  
    - Compara dos cadenas, hasta un número dado de caracteres.
    
18. **`ft_memchr`**  
    - Busca un carácter en una porción de memoria.
    
19. **`ft_memcmp`**  
    - Compara dos bloques de memoria.
    
20. **`ft_strnstr`**  
    - Busca una subcadena dentro de una cadena, con una longitud máxima.
    
21. **`ft_atoi`**  
    - Convierte una cadena de caracteres a un número entero.
    
22. **`ft_calloc`**  
    - Asigna memoria y la inicializa a cero.
    
23. **`ft_strdup`**  
    - Duplica una cadena, asignando memoria dinámicamente.

## Parte Bonus

### Funciones adicionales para manipulación de listas y sus definiciónes:

1. **`ft_lstnew`**  
   - Crea un nuevo nodo en una lista enlazada.  
   - Parámetros: `void *content`  
   - Retorno: El nuevo nodo creado.

2. **`ft_lstadd_front`**  
   - Añade un nodo al principio de una lista enlazada.  
   - Parámetros: `t_list **lst`, `t_list *new`  
   - Retorno: Ninguno.

3. **`ft_lstsize`**  
   - Cuenta el número de nodos en una lista enlazada.  
   - Parámetros: `t_list *lst`  
   - Retorno: El número de nodos.

4. **`ft_lstlast`**  
   - Devuelve el último nodo de la lista.  
   - Parámetros: `t_list *lst`  
   - Retorno: El último nodo.

5. **`ft_lstadd_back`**  
   - Añade un nodo al final de una lista enlazada.  
   - Parámetros: `t_list **lst`, `t_list *new`  
   - Retorno: Ninguno.

6. **`ft_lstdelone`**  
   - Libera el nodo pasado como parámetro, y usa la función `del` para liberar su contenido.  
   - Parámetros: `t_list *lst`, `void (*del)(void *)`  
   - Retorno: Ninguno.

7. **`ft_lstclear`**  
   - Elimina y libera el nodo dado y todos los nodos consecutivos.  
   - Parámetros: `t_list **lst`, `void (*del)(void *)`  
   - Retorno: Ninguno.

8. **`ft_lstiter`**  
   - Itera sobre la lista y aplica la función `f` sobre cada nodo.  
   - Parámetros: `t_list *lst`, `void (*f)(void *)`  
   - Retorno: Ninguno.

9. **`ft_lstmap`**  
   - Aplica una función a cada nodo de la lista y devuelve una nueva lista con los resultados.  
   - Parámetros: `t_list *lst`, `void *(*f)(void *)`, `void (*del)(void *)`  
   - Retorno: La nueva lista.

## Cómo Compilar

1. Clona este repositorio en tu máquina local:
   
   ```bash
   git clone https://github.com/usuario/libft.git
Accede al directorio del proyecto: cd libft  
Para compilar el proyecto, simplemente ejecuta: make  
Para limpiar los archivos generados por la compilación, ejecuta: make clean  
Para eliminar los archivos objeto y la librería, ejecuta: make fclean  
Para volver a compilar el proyecto desde cero, ejecuta: make re  
