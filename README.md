# Libft

**My Libft project at 1337 Coding School | 42 Network**

## About the Project

Libft is a foundational project in the 1337 curriculum. The goal is to build a personal C library by reimplementing standard C library functions and creating useful additional functions.

This project helps develop a deeper understanding of C programming, pointers, memory management, strings, and data structures.

The library can also be reused in future projects throughout the 1337 curriculum.

## Learning Objectives

- Understand how standard C library functions work.
- Improve pointer manipulation and memory management skills.
- Work with strings, arrays, and dynamically allocated memory.
- Handle memory allocation and deallocation safely.
- Implement and manipulate linked lists.
- Write clean, readable, and reusable C code.
- Practice compilation and project management with a Makefile.

## Project Contents

The repository contains the following main components:

- **`libft.h`**: Header file containing function prototypes and required declarations.
- **`ft_*.c`**: Source files containing the implementations of library functions.
- **`Makefile`**: Rules for compiling the source files into a static library.

## Function Categories

The project covers several categories of C functions, depending on the implementations included in the repository.

### 1. Character Checking and Conversion
Functions for checking character types and converting letter case.

Examples: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_toupper`, `ft_tolower`.

### 2. Memory Management
Functions for manipulating memory and allocating memory dynamically.

Examples: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memcmp`, `ft_calloc`.

### 3. String Manipulation
Functions for measuring, searching, comparing, and modifying strings.

Examples: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strdup`, `ft_substr`, `ft_strjoin`.

### 4. Conversion and Output
Functions for converting values and writing characters, strings, and numbers.

Examples: `ft_atoi`, `ft_itoa`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putnbr_fd`.

### 5. Linked Lists
Additional functions for creating, traversing, and managing linked lists, when the bonus part is implemented.

Examples: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstclear`.

*Note: These are examples of common Libft functions, not a claim that every listed function is already implemented in this repository.*

## Compilation

Clone the repository:

```bash
git clone https://github.com/mohamedtrichil185-creator/libft.git
cd libft
```

Compile the library using the Makefile:

```bash
make
```

Common Makefile commands, if supported by the project:

```bash
make clean
make fclean
make re
```

- `make clean`: Removes object files.
- `make fclean`: Removes object files and the compiled library.
- `make re`: Rebuilds the library from scratch.

After a successful compilation, the static library is usually named `libft.a`.

## How to Use the Library

Include the header file in your C source code:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the program:

```bash
./program
```

## What I Learned

Through this project, I am developing my skills in:

- C programming fundamentals.
- Pointers and memory addresses.
- Dynamic memory allocation with `malloc` and `free`.
- String and memory manipulation.
- Debugging and handling edge cases.
- Creating reusable libraries and organizing code.

## Repository

GitHub: [mohamedtrichil185-creator/libft](https://github.com/mohamedtrichil185-creator/libft)

## Author

**Mohamed Traichil**

Student at 1337 Coding School, Morocco.

---

*This project is part of my journey to strengthen my C programming skills and build a solid foundation for future software engineering projects.*
