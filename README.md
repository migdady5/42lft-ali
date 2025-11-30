# libft

## Overview
The `libft` project is a custom implementation of the standard C library functions. It includes a variety of utility functions for string manipulation, memory management, and character classification.

## Features
- **Character Classification**: Functions to check if a character is an alphabetic letter, digit, alphanumeric, ASCII, or printable.
- **String Manipulation**: Functions to calculate string length, copy, concatenate, and locate characters or substrings.
- **Memory Management**: Functions to set, clear, copy, and compare memory blocks, as well as allocate memory for arrays.

## File Structure
```
libft
├── src
│   ├── ft_isalpha.c
│   ├── ft_isdigit.c
│   ├── ft_isalnum.c
│   ├── ft_isascii.c
│   ├── ft_isprint.c
│   ├── ft_strlen.c
│   ├── ft_memset.c
│   ├── ft_bzero.c
│   ├── ft_memcpy.c
│   ├── ft_memmove.c
│   ├── ft_memchr.c
│   ├── ft_memcmp.c
│   ├── ft_strlcpy.c
│   ├── ft_strlcat.c
│   ├── ft_strchr.c
│   ├── ft_strrchr.c
│   ├── ft_strncmp.c
│   ├── ft_strnstr.c
│   ├── ft_toupper.c
│   ├── ft_tolower.c
│   ├── ft_atoi.c
│   ├── ft_calloc.c
│   └── ft_strdup.c
├── include
│   └── libft.h
├── tests
│   └── test_main.c
├── Makefile
├── .gitignore
└── README.md
```

## Installation
To compile the library, navigate to the project directory and run the following command:

```
make
```

This will create the `libft.a` static library in the project directory.

## Usage
To use the library in your C projects, include the header file:

```c
#include "libft.h"
```

Link against the `libft.a` library during compilation:

```
gcc -o my_program my_program.c -L. -lft
```

## Testing
To run the tests provided in the `tests` directory, compile the `test_main.c` file:

```
gcc -o test tests/test_main.c -L. -lft
```

Then execute the test binary:

```
./test
```

## Contribution
Feel free to contribute to the project by submitting pull requests or reporting issues.