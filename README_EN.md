<h1 align="center">
  <img src="https://iili.io/2odSSRV.png" alt="libft krub" width="1200" height="auto" style="align: bottom;"> 
</h1>

## Description

This project consists of developing a C library, **LIBFT**, which provides a set of utility functions to simplify the development of C programs. These functions cover a wide range of common operations, from string manipulation to data type conversion and memory management. The library is designed to be modular and easily integrable into C projects, offering a robust and extensible alternative to the standard C library functions.

🇬🇧 [Read in Spanish](README.md)

## Key Features

- **String Manipulation**: Functions for working with strings, including copying, concatenation, truncation, and character checks.
- **Data Conversion**: Functions for converting between different data types, such as integers to strings and vice versa.
- **Memory Management**: Functions for dynamically managing memory, such as allocations, deallocations, and memory copying.
- **Basic Operations**: Functions for basic operations like printing characters and strings to files and the console.

## Key Functions

### String Manipulation

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`: Check if a character belongs to certain character sets (alphabetic, numeric, alphanumeric, printable, etc.).
- `ft_strlen`: Calculates the length of a string.
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`: Memory filling and copying operations.
- `ft_strlcpy`, `ft_strlcat`: Safely copy and concatenate strings, preventing buffer overflows.
- `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`: String searching and comparison.
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`: Create substrings, concatenate, trim characters, and split strings.

### Data Conversion

- `ft_atoi`: Converts a string representing an integer to its corresponding numerical value.
- `ft_itoa`: Generates a string representing the integer value passed as an argument.

### Memory Management

- `ft_calloc`: Allocates a memory block large enough to store a specified number of elements of a given size, initializing all allocated bytes to zero.
- `ft_strdup`: Creates and returns a copy of the given string.

### Basic Operations

- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`: Send characters, strings, newlines, and numbers to a specified file descriptor.

