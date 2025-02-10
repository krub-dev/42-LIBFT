<h1 align="center">
  <img src="https://iili.io/2odSSRV.png" alt="libft krub" width="1200" height="auto" style="align: bottom;"> 
</h1>

## Descripción

Este proyecto consiste en desarrollar una librería en C, **LIBFT**, que proporciona una serie de funciones de utilidad para facilitar el desarrollo de programas en C. Estas funciones cubren una amplia gama de operaciones comunes, desde la manipulación de cadenas hasta la conversión de tipos de datos y la gestión de memoria. La librería está diseñada para ser modular y fácilmente integrable en proyectos de C, ofreciendo una alternativa robusta y extensible a las funciones estándar de la biblioteca C.

🇬🇧 [Read in English](README_EN.md)

## Características Principales

- **Manipulación de Cadenas**: Funciones para trabajar con cadenas de caracteres, incluyendo copias, concatenaciones, truncamientos y verificaciones de caracteres.
- **Conversión de Datos**: Funciones para convertir entre diferentes tipos de datos, como enteros a cadenas y viceversa.
- **Gestión de Memoria**: Funciones para gestionar dinámicamente la memoria, como asignaciones, liberaciones y copias de memoria.
- **Operaciones Básicas**: Funciones para operaciones básicas como la impresión de caracteres y cadenas en archivos y la consola.

## Funciones Clave

### Manipulación de Cadenas

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`: Verifican si un carácter pertenece a ciertos conjuntos de caracteres (alfabético, numérico, alfanumérico, imprimible, etc.).
- `ft_strlen`: Calcula la longitud de una cadena de caracteres.
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`: Operaciones de relleno y copia de memoria.
- `ft_strlcpy`, `ft_strlcat`: Copia y concatena cadenas de manera segura, evitando desbordamientos de buffer.
- `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`: Búsqueda y comparación de cadenas.
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`: Creación de subcadenas, concatenación, eliminación de caracteres y división de cadenas.

### Conversión de Datos

- `ft_atoi`: Convierte una cadena de caracteres que representa un número entero en su valor numérico correspondiente.
- `ft_itoa`: Genera una cadena que representa el valor entero recibido como argumento.

### Gestión de Memoria

- `ft_calloc`: Reserva un bloque de memoria de tamaño suficiente para almacenar un número específico de elementos de un tamaño determinado, inicializando todos los bytes reservados a cero.
- `ft_strdup`: Crea y devuelve una copia de la cadena dada.

### Operaciones Básicas

- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Envían caracteres, cadenas, saltos de línea y números a un descriptor de archivo especificado.

