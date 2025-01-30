# libft - Tu primera librería

---

## Índice

1. [Descripción del Proyecto y Círculo de Proyectos - Primer Círculo (Pace)](#descripción-del-proyecto-y-círculo-de-proyectos---primer-círculo-pace)
2. [Propósito del Proyecto](#propósito-del-proyecto)
3. [Estructura del Proyecto](#estructura-del-proyecto)
4. [Parte Obligatoria](#parte-obligatoria)
   - [Funciones de la libc a implementar y sus definiciones](#funciones-de-la-libc-a-implementar-y-sus-definiciones)
   - [Parte Obligatoria 1](#parte-obligatoria-1)
     | N°  | Función          | N°  | Función          | N°  | Función          | N°  | Función          |
     |---- |---------------- |---- |---------------- |---- |---------------- |---- |---------------- |
     | 1   | [ft_isascii](#ft_isascii)   | 6   | [ft_isalnum](#ft_isalnum)   | 11  | [ft_memcpy](#ft_memcpy)     | 16  | [ft_strrchr](#ft_strrchr)   |
     | 2   | [ft_toupper](#ft_toupper)   | 7   | [ft_isprint](#ft_isprint)   | 12  | [ft_memmove](#ft_memmove)   | 17  | [ft_memchr](#ft_memchr)     |
     | 3   | [ft_tolower](#ft_tolower)   | 8   | [ft_strlen](#ft_strlen)     | 13  | [ft_strlcpy](#ft_strlcpy)   | 18  | [ft_memcmp](#ft_memcmp)     |
     | 4   | [ft_isdigit](#ft_isdigit)   | 9   | [ft_bzero](#ft_bzero)       | 14  | [ft_strlcat](#ft_strlcat)   | 19  | [ft_strncmp](#ft_strncmp)   |
     | 5   | [ft_isalpha](#ft_isalpha)   | 10  | [ft_memset](#ft_memset)     | 15  | [ft_strchr](#ft_strchr)     | 20  | [ft_strnstr](#ft_strnstr)   |
     | 21  | [ft_atoi](#ft_atoi)         | 22  | [ft_calloc](#ft_calloc)     | 23  | [ft_strdup](#ft_strdup)     |     |                            |
   - [Parte Obligatoria 2](#parte-obligatoria-2)
     | N°  | Función          | N°  | Función          | N°  | Función          | N°  | Función          |
     |---- |---------------- |---- |---------------- |---- |---------------- |---- |---------------- |
     | 1  | [ft_putchar_fd](#ft_putchar_fd) | 4  | [ft_putnbr_fd](#ft_putnbr_fd) | 7  | [ft_strtrim](#ft_strtrim) | 10  | [ft_strjoin](#ft_strjoin) |
     | 2  | [ft_putstr_fd](#ft_putstr_fd) | 5  | [ft_itoa](#ft_itoa) | 8  | [ft_striteri](#ft_striteri) | 11  | [ft_split](#ft_split) |
     | 3  | [ft_putendl_fd](#ft_putendl_fd) | 6  | [ft_substr](#ft_substr) | 9  | [ft_strmapi](#ft_strmapi) |     |                            |
5. [Parte Bonus](#parte-bonus)
     | N°  | Función          | N°  | Función          | N°  | Función          | N°  | Función          |
     |---- |---------------- |---- |---------------- |---- |---------------- |---- |---------------- |
     | 1  | [ft_lstnew](#ft_lstnew) | 5  | [ft_lstadd_back](#ft_lstadd_back) | 9  | [ft_lstmap](#ft_lstmap) |     |                            |
     | 2  | [ft_lstadd_front](#ft_lstadd_front) | 6  | [ft_lstdelone](#ft_lstdelone) |     |                            |     |                            |
     | 3  | [ft_lstsize](#ft_lstsize) | 7  | [ft_lstclear](#ft_lstclear) |     |                            |     |                            |
     | 4  | [ft_lstlast](#ft_lstlast) | 8  | [ft_lstiter](#ft_lstiter) |     |                            |     |                            |
7. [Cómo Compilar](#cómo-compilar)

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

### Funciones de la libc a implementar y sus definiciones.

## Parte Obligatoria 1

1. **`ft_isascii`**  
   - Verifica si un carácter es un carácter ASCII válido.  
   - **Prototipo:** `int ft_isascii(int c);`  
   - **Usos en otras funciones:** No se utiliza directamente en otras funciones, aunque es útil en funciones como `ft_isalpha`, `ft_isalnum`, etc.

2. **`ft_toupper`**  
   - Convierte un carácter a mayúsculas.  
   - **Prototipo:** `int ft_tolower(int c);`  
   - **Usos en otras funciones:** Puede ser utilizada dentro de la función `ft_striteri` para modificar los caracteres de una cadena.

3. **`ft_tolower`**  
   - Convierte un carácter a minúsculas.  
   - **Prototipo:** `int tolower(int c);`  
   - **Usos en otras funciones:** Similar a `ft_toupper`, puede ser utilizada dentro de funciones como `ft_striteri` para modificar los caracteres de una cadena.

4. **`ft_isdigit`**  
   - Verifica si un carácter es un dígito.  
   - **Prototipo:** `int ft_isdigit(int number);`  
   - **Usos en otras funciones:** Puede ser utilizada en funciones como `ft_isalnum` para comprobar si un carácter es alfanumérico.

5. **`ft_isalpha`**  
   - Verifica si un carácter es alfabético.  
   - **Prototipo:** `int ft_isalpha(int c);`  
   - **Usos en otras funciones:** Puede ser utilizada en funciones como `ft_isalnum` y `ft_isprint`.

6. **`ft_isalnum`**  
   - Verifica si un carácter es alfabético o un dígito.  
   - **Prototipo:** `int ft_isalnum(int c);`  
   - **Usos en otras funciones:** Puede ser utilizada en funciones como `ft_isalpha` y `ft_isdigit` para verificar caracteres.

7. **`ft_isprint`**  
   - Verifica si un carácter es un carácter imprimible.  
   - **Prototipo:** `int ft_isprint(int c);`  
   - **Usos en otras funciones:** Puede usarse en funciones que requieren verificar la imprimibilidad de un carácter, como en `ft_striteri`.

8. **`ft_strlen`**  
   - Devuelve la longitud de una cadena.  
   - **Prototipo:** `size_t ft_strlen(const char *s);`  
   - **Usos en otras funciones:** Se utiliza en funciones como `ft_memset`, `ft_bzero`, `ft_strlcpy`, etc.

9. **`ft_bzero`**  
   - Establece a cero una porción de memoria.  
   - **Prototipo:** `void ft_bzero(void *s, size_t len);`  
   - **Usos en otras funciones:** Puede ser utilizada en `ft_memset` para inicializar bloques de memoria a cero.

10. **`ft_memset`**  
    - Establece un valor específico en una porción de memoria.  
    - **Prototipo:** `void *ft_memset(void *s, int c, size_t n);`  
    - **Usos en otras funciones:** Se utiliza en funciones como `ft_bzero`, `ft_memmove`, `ft_strlcpy`, etc.

11. **`ft_memcpy`**  
    - Copia una porción de memoria de un lugar a otro.  
    - **Prototipo:** `void *ft_memcpy(void *dest, const void *src, size_t n);`  
    - **Usos en otras funciones:** Puede usarse en otras funciones que requieren copiar memoria, como `ft_memmove`.

12. **`ft_strchr`**  
    - Devuelve un puntero a la primera aparición de un carácter en una cadena.  
    - **Prototipo:** `char *ft_strchr(const char *s, int c);`  
    - **Usos en otras funciones:** Puede ser utilizada dentro de `ft_strrchr` y `ft_strnstr` para buscar caracteres en cadenas.

13. **`ft_strrchr`**  
    - Devuelve un puntero a la última aparición de un carácter en una cadena.  
    - **Prototipo:** `char *ft_ft_strrchr(const char *big, const char *little, size_t len);`  
    - **Usos en otras funciones:** Utiliza `ft_strchr` para buscar desde el final hacia el principio de la cadena.

14. **`ft_memchr`**  
    - Busca un carácter en una porción de memoria.  
    - **Prototipo:** `void *ft_memchr(const void *s, int c, size_t n);`  
    - **Usos en otras funciones:** Puede ser utilizada para buscar en bloques de memoria como en `ft_memcmp`.

15. **`ft_memcmp`**  
    - Compara dos bloques de memoria.  
    - **Prototipo:** `int ft_memcmp(const void *s1, const void *s2, size_t n);`  
    - **Usos en otras funciones:** Puede ser utilizada para comparar bloques de memoria, como en `ft_memchr`.

16. **`ft_strncmp`**  
    - Compara dos cadenas, hasta un número dado de caracteres.  
    - **Prototipo:** `int ft_strncmp(const char *s1, const char *s2, size_t n);`  
    - **Usos en otras funciones:** Puede ser utilizada dentro de `ft_strnstr` para comparar cadenas con límite de longitud.

17. **`ft_atoi`**  
    - Convierte una cadena de caracteres a un número entero.  
    - **Prototipo:** `int ft_atoi(const char *str);`  
    - **Usos en otras funciones:** Puede usarse para convertir cadenas a enteros en el proceso de análisis de datos.

18. **`ft_memmove`**  
    - Copia una porción de memoria, manejando correctamente el solapamiento de bloques de memoria.  
    - **Prototipo:** `void *ft_memmove(void *dest, const void *src, size_t n);`  
    - **Usos en otras funciones:** Se puede usar para mover bloques de memoria en funciones como `ft_memcpy` y `ft_memset`.

19. **`ft_strlcpy`**  
    - Copia una cadena asegurando no sobrepasar el límite de longitud.  
    - **Prototipo:** `size_t ft_strlcpy(char *dest, const char *src, size_t size);`  
    - **Usos en otras funciones:** Puede ser utilizada en funciones como `ft_strlcat` para concatenar de manera segura cadenas.

20. **`ft_strlcat`**  
    - Concatenación de cadenas asegurando no sobrepasar el límite de longitud.  
    - **Prototipo:** `size_t ft_strlcat(char *dest, const char *src, size_t size);`  
    - **Usos en otras funciones:** Puede usarse en la manipulación de cadenas, especialmente en funciones que concatenan cadenas como `ft_strlcpy`.

21. **`ft_strnstr`**  
    - Busca una subcadena dentro de una cadena, con una longitud máxima.  
    - **Prototipo:** `char *strnstr(const char *haystack, const char *needle, size_t len);`  
    - **Usos en otras funciones:** Puede ser utilizada para buscar una subcadena dentro de una cadena de forma eficiente.

22. **`ft_calloc`**  
    - Asigna memoria y la inicializa a cero.  
    - **Prototipo:** `void *ft_calloc(size_t num_elements, size_t element_size);`  
    - **Usos en otras funciones:** Se puede usar para inicializar memoria a cero, comúnmente en `ft_strdup`.

23. **`ft_strdup`**  
    - Duplica una cadena, asignando memoria dinámicamente.  
    - **Prototipo:** `char *ft_strdup(const char *s);`  
    - **Usos en otras funciones:** Puede ser utilizada en varias funciones para duplicar cadenas, por ejemplo, en `ft_split`.

## Parte Obligatoria 2

1. **`ft_putchar_fd`**  
   - Escribe un carácter en un descriptor de archivo.  
   - **Prototipo:** `void ft_putchar_fd(char c, int fd);`  
   - **Usos en otras funciones:** Puede ser utilizada en la salida de caracteres de manera más personalizada.

2. **`ft_putstr_fd`**  
   - Escribe una cadena en un descriptor de archivo.  
   - **Prototipo:** `void ft_putstr_fd(char *s, int fd);`  
   - **Usos en otras funciones:** Utilizada para la salida de cadenas, puede ser usada por otras funciones para escribir cadenas en un archivo o salida estándar.

3. **`ft_putendl_fd`**  
   - Escribe una cadena seguida de un salto de línea en un descriptor de archivo.  
   - **Prototipo:** `void ft_putendl_fd(char *s, int fd);`  
   - **Usos en otras funciones:** Similar a `ft_putstr_fd`, pero con salto de línea añadido al final.

4. **`ft_putnbr_fd`**  
   - Escribe un número entero en un descriptor de archivo.  
   - **Prototipo:** `void ft_putnbr_fd(int n, int fd);`  
   - **Usos en otras funciones:** Puede ser utilizada para la salida de números enteros en funciones que requieren impresión personalizada.

5. **`ft_itoa`**  
   - Convierte un número entero a su representación en cadena.  
   - **Prototipo:** `char *ft_itoa(int n);`  
   - **Usos en otras funciones:** Puede ser utilizada cuando sea necesario convertir enteros a cadenas.

6. **`ft_substr`**  
   - Extrae una subcadena de una cadena dada.  
   - **Prototipo:** `char *ft_substr(const char *s, unsigned int start, size_t len);`  
   - **Usos en otras funciones:** Puede ser utilizada en funciones que necesiten manipular partes específicas de cadenas.

7. **`ft_strtrim`**  
   - Elimina los caracteres especificados de los extremos de una cadena.  
   - **Prototipo:** `char *ft_strtrim(char const *s1, char const *set);`  
   - **Usos en otras funciones:** Puede ser utilizada en funciones que necesitan limpiar las cadenas antes de procesarlas.

8. **`ft_striteri`**  
   - Aplica una función a cada carácter de una cadena, permitiendo modificar la cadena.  
   - **Prototipo:** `void ft_striteri(char *s, void (*f)(unsigned int, char*));`  
   - **Usos en otras funciones:** Se utiliza cuando es necesario modificar una cadena aplicando una función a cada uno de sus caracteres.

9. **`ft_strmapi`**  
   - Aplica una función a cada carácter de una cadena, con su índice, y devuelve una nueva cadena.  
   - **Prototipo:** `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`  
   - **Usos en otras funciones:** Puede ser utilizada para transformar cadenas de manera más compleja que `ft_striteri`.

10. **`ft_strjoin`**  
    - Une dos cadenas en una nueva cadena.  
    - **Prototipo:** `char *ft_strjoin(char const *s1, char const *s2);`  
    - **Usos en otras funciones:** Es utilizada para concatenar dos cadenas y puede ser usada en muchas funciones que requieren la unión de cadenas.

11. **`ft_split`**  
    - Divide una cadena en subcadenas, usando un delimitador.  
    - **Prototipo:** `char **ft_split(char const *s, char c);`  
    - **Usos en otras funciones:** Se puede usar cuando se necesita dividir una cadena en partes más pequeñas según un delimitador.

## Parte Bonus y sus definiciones.

1. **`ft_lstnew`**  
   - Crea un nuevo nodo para una lista enlazada.  
   - **Prototipo:** `t_list *ft_lstnew(void *content);`  
   - **Usos en otras funciones:** Fundamental para la creación de listas enlazadas.

2. **`ft_lstadd_front`**  
   - Añade un nodo al principio de la lista enlazada.  
   - **Prototipo:** `void ft_lstadd_front(t_list **lst, t_list *new);`  
   - **Usos en otras funciones:** Se utiliza para agregar nodos al principio de una lista.

3. **`ft_lstsize`**  
   - Devuelve el número de elementos en la lista enlazada.  
   - **Prototipo:** `int ft_lstsize(t_list *lst);`  
   - **Usos en otras funciones:** Permite obtener el tamaño de la lista.

4. **`ft_lstlast`**  
   - Devuelve el último nodo de la lista enlazada.  
   - **Prototipo:** `t_list *ft_lstlast(t_list *lst);`  
   - **Usos en otras funciones:** Se usa cuando es necesario acceder al último nodo de la lista.

5. **`ft_lstadd_back`**  
   - Añade un nodo al final de la lista enlazada.  
   - **Prototipo:** `void ft_lstadd_back(t_list **lst, t_list *new);`  
   - **Usos en otras funciones:** Agrega un nodo al final de la lista.

6. **`ft_lstdelone`**  
   - Elimina un nodo de la lista, liberando su memoria.  
   - **Prototipo:** `void ft_lstdelone(t_list *lst, void (*del)(void*));`  
   - **Usos en otras funciones:** Se usa para eliminar nodos de la lista de forma segura.

7. **`ft_lstiter`**  
   - Aplica una función a cada nodo de la lista.  
   - **Prototipo:** `void ft_lstiter(t_list *lst, void (*f)(void *));`  
   - **Usos en otras funciones:** Puede ser utilizada para iterar sobre cada nodo de la lista y realizar operaciones en ellos.

8. **`ft_lstclear`**  
   - Elimina todos los nodos de la lista y libera su memoria.  
   - **Prototipo:** `void ft_lstclear(t_list **lst, void (*del)(void*));`  
   - **Usos en otras funciones:** Se usa para eliminar toda la lista de forma segura.

9. **`ft_lstmap`**  
   - Crea una nueva lista aplicando una función a cada nodo de la lista original.  
   - **Prototipo:** `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`  
   - **Usos en otras funciones:** Se utiliza para transformar la lista original creando una nueva lista con los resultados de la función aplicada.

---

## Cómo Compilar

1. Clona este repositorio en tu máquina local:
   
   ```bash
   git clone https://github.com/usuario/libft.git
Accede al directorio del proyecto: cd libft  
Para compilar el proyecto, simplemente ejecuta: make  
Para limpiar los archivos generados por la compilación, ejecuta: make clean  
Para eliminar los archivos objeto y la librería, ejecuta: make fclean  
Para volver a compilar el proyecto desde cero, ejecuta: make re  
