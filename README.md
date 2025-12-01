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

## VS Code: Norminate extension

This repository now includes a tiny developer VS Code extension named **Norminate** that helps you run *norminette* from inside VS Code and apply a few small automatic fixes (tabs → spaces, trim trailing whitespace, ensure final newline).

How to try it locally:

1. Open this folder in VS Code
2. Open Run and Debug → "Launch Extension" then press F5. A new Extension Development Host window opens.
3. Open a C file in the extension host and run commands from the Command Palette:
	- `Norminate: Run Norminette` — runs norminette and shows problems in the Problems view
	- `Norminate: Apply Quick Fixes` — automatically converts tabs to 4 spaces, trims trailing whitespace, and ensures a final newline

Settings:
- `norminate.norminettePath` — override path or command for the norminette executable (default: `norminette`).

Note: norminette must be installed separately and available in PATH (or you can set a full path in the setting above).