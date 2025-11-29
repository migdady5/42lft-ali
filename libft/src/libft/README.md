# libft - A C Standard Library Implementation

## Overview
The `libft` project is a custom implementation of some standard C library functions. It includes various utility functions that are commonly used in C programming, such as string manipulation, memory management, and character classification.

## Features
- Implementation of essential functions like `ft_isalpha`, `ft_isdigit`, `ft_strlen`, `ft_memcpy`, `ft_atoi`, and `ft_strdup`.
- Header file `libft.h` containing function prototypes and necessary type definitions.
- Test files to validate the functionality of the implemented functions.

## Directory Structure
```
libft
├── src                # Source files for library functions
│   ├── ft_isalpha.c  # Checks if a character is an alphabetic letter
│   ├── ft_isdigit.c  # Checks if a character is a digit
│   ├── ft_strlen.c    # Calculates the length of a string
│   ├── ft_memcpy.c    # Copies bytes from one memory location to another
│   ├── ft_atoi.c      # Converts a string to an integer
│   └── ft_strdup.c     # Duplicates a string
├── include            # Header files
│   └── libft.h       # Function prototypes and type definitions
├── tests              # Test files
│   ├── test_main.c    # Main function for running tests
│   └── test_utils.c    # Utility functions for testing
├── Makefile           # Build instructions
└── .gitignore         # Files to ignore in Git
```

## Building the Library
To compile the library, navigate to the project directory and run the following command:

```
make
```

This will generate the static library `libft.a`.

## Running Tests
To run the tests, ensure that the library is built and then execute the test main file:

```
gcc -o test tests/test_main.c -L. -lft
./test
```

## Usage
Include the header file in your C programs to use the library functions:

```c
#include "libft/libft.h"
```

## License
This project is licensed under the MIT License. See the LICENSE file for more details.