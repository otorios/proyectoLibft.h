# libft - Tu primera librería

---

## Índice

1. [Descripción del Proyecto y Círculo de Proyectos - Primer Círculo (Pace)](#descripción-del-proyecto-y-círculo-de-proyectos---primer-círculo-pace)
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
### 1. `ft_isascii`
   - **Definición:** Verifica si un carácter es un carácter ASCII válido.
   - **Prototipo estándar:** `int isascii(int c);`
   - **Usos en otras funciones:** No se utiliza directamente en otras funciones, aunque es útil en funciones como `ft_isalpha`, `ft_isalnum`, etc.

---

### 2. `ft_toupper`
   - **Definición:** Convierte un carácter a mayúsculas.
   - **Prototipo estándar:** `int toupper(int c);`
   - **Usos en otras funciones:** Puede ser utilizada dentro de la función `ft_striteri` para modificar los caracteres de una cadena.

---

### 3. `ft_tolower`
   - **Definición:** Convierte un carácter a minúsculas.
   - **Prototipo estándar:** `int tolower(int c);`
   - **Usos en otras funciones:** Similar a `ft_toupper`, puede ser utilizada dentro de funciones como `ft_striteri` para modificar los caracteres de una cadena.

---

### 4. `ft_isdigit`
   - **Definición:** Verifica si un carácter es un dígito.
   - **Prototipo estándar:** `int isdigit(int c);`
   - **Usos en otras funciones:** Puede ser utilizada en funciones como `ft_isalnum` para comprobar si un carácter es alfanumérico.

---

### 5. `ft_isalpha`
   - **Definición:** Verifica si un carácter es alfabético.
   - **Prototipo estándar:** `int isalpha(int c);`
   - **Usos en otras funciones:** Puede ser utilizada en funciones como `ft_isalnum` y `ft_isprint`.

---

### 6. `ft_isalnum`
   - **Definición:** Verifica si un carácter es alfabético o un dígito.
   - **Prototipo estándar:** `int isalnum(int c);`
   - **Usos en otras funciones:** Puede ser utilizada en funciones como `ft_isalpha` y `ft_isdigit` para verificar caracteres.

---

### 7. `ft_isprint`
   - **Definición:** Verifica si un carácter es un carácter imprimible.
   - **Prototipo estándar:** `int isprint(int c);`
   - **Usos en otras funciones:** Puede usarse en funciones que requieren verificar la imprimibilidad de un carácter, como en `ft_striteri`.

---

### 8. `ft_strlen`
   - **Definición:** Devuelve la longitud de una cadena.
   - **Prototipo estándar:** `size_t strlen(const char *s);`
   - **Usos en otras funciones:** Se utiliza en funciones como `ft_memset`, `ft_bzero`, `ft_strlcpy`, etc.

---

### 9. `ft_bzero`
   - **Definición:** Establece a cero una porción de memoria.
   - **Prototipo estándar:** `void bzero(void *s, size_t len);`
   - **Usos en otras funciones:** Puede ser utilizada en `ft_memset` para inicializar bloques de memoria a cero.

---

### 10. `ft_memset`
   - **Definición:** Establece un valor específico en una porción de memoria.
   - **Prototipo estándar:** `void *memset(void *s, int c, size_t len);`
   - **Usos en otras funciones:** Se utiliza en funciones como `ft_bzero`, `ft_memmove`, `ft_strlcpy`, etc.

---

### 11. `ft_memcpy`
   - **Definición:** Copia una porción de memoria de un lugar a otro.
   - **Prototipo estándar:** `void *memcpy(void *dest, const void *src, size_t n);`
   - **Usos en otras funciones:** Puede usarse en otras funciones que requieren copiar memoria, como `ft_memmove`.

---

### 12. `ft_strchr`
   - **Definición:** Devuelve un puntero a la primera aparición de un carácter en una cadena.
   - **Prototipo estándar:** `char *strchr(const char *s, int c);`
   - **Usos en otras funciones:** Puede ser utilizada dentro de `ft_strrchr` y `ft_strnstr` para buscar caracteres en cadenas.

---

### 13. `ft_strrchr`
   - **Definición:** Devuelve un puntero a la última aparición de un carácter en una cadena.
   - **Prototipo estándar:** `char *strrchr(const char *s, int c);`
   - **Usos en otras funciones:** Utiliza `ft_strchr` para buscar desde el final hacia el principio de la cadena.

---

### 14. `ft_memchr`
   - **Definición:** Busca un carácter en una porción de memoria.
   - **Prototipo estándar:** `void *memchr(const void *s, int c, size_t n);`
   - **Usos en otras funciones:** Puede ser utilizada para buscar en bloques de memoria como en `ft_memcmp`.

---

### 15. `ft_memcmp`
   - **Definición:** Compara dos bloques de memoria.
   - **Prototipo estándar:** `int memcmp(const void *s1, const void *s2, size_t n);`
   - **Usos en otras funciones:** Puede ser utilizada para comparar bloques de memoria, como en `ft_memchr`.

---

### 16. `ft_strncmp`
   - **Definición:** Compara dos cadenas, hasta un número dado de caracteres.
   - **Prototipo estándar:** `int strncmp(const char *s1, const char *s2, size_t n);`
   - **Usos en otras funciones:** Puede ser utilizada dentro de `ft_strnstr` para comparar cadenas con límite de longitud.

---

### 17. `ft_atoi`
   - **Definición:** Convierte una cadena de caracteres a un número entero.
   - **Prototipo estándar:** `int atoi(const char *str);`
   - **Usos en otras funciones:** Puede usarse para convertir cadenas a enteros en el proceso de análisis de datos.

---

### 18. `ft_memmove`
   - **Definición:** Copia una porción de memoria, manejando correctamente el solapamiento de bloques de memoria.
   - **Prototipo estándar:** `void *memmove(void *dest, const void *src, size_t len);`
   - **Usos en otras funciones:** Se puede usar para mover bloques de memoria en funciones como `ft_memcpy` y `ft_memset`.

---

### 19. `ft_strlcpy`
   - **Definición:** Copia una cadena asegurando no sobrepasar el límite de longitud.
   - **Prototipo estándar:** `size_t strlcpy(char *dest, const char *src, size_t size);`
   - **Usos en otras funciones:** Puede ser utilizada en funciones como `ft_strlcat` para concatenar de manera segura cadenas.

---

### 20. `ft_strlcat`
   - **Definición:** Concatenación de cadenas asegurando no sobrepasar el límite de longitud.
   - **Prototipo estándar:** `size_t strlcat(char *dest, const char *src, size_t size);`
   - **Usos en otras funciones:** Puede usarse en la manipulación de cadenas, especialmente en funciones que concatenan cadenas como `ft_strlcpy`.

---

### 21. `ft_strnstr`
   - **Definición:** Busca una subcadena dentro de una cadena, con una longitud máxima.
   - **Prototipo estándar:** `char *strnstr(const char *haystack, const char *needle, size_t len);`
   - **Usos en otras funciones:** Puede ser utilizada para buscar una subcadena dentro de una cadena de forma eficiente.

---

### 22. `ft_calloc`
   - **Definición:** Asigna memoria y la inicializa a cero.
   - **Prototipo estándar:** `void *calloc(size_t nmemb, size_t size);`
   - **Usos en otras funciones:** Se puede usar para inicializar memoria a cero, comúnmente en `ft_strdup`.

---

### 23. `ft_strdup`
   - **Definición:** Duplica una cadena, asignando memoria dinámicamente.
   - **Prototipo estándar:** `char *strdup(const char *s);`
   - **Usos en otras funciones:** Puede ser utilizada en varias funciones para duplicar cadenas, por ejemplo, en `ft_split`.

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
