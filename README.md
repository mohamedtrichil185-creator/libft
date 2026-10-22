*This project has been created as part of the 42 curriculum by mtraichl.*

# Libft

## Description

Libft is a project from the 42 curriculum. The goal is to create my own C library by writing functions that work like some standard C library functions.

This project helps me understand how C works, especially pointers, strings, memory management, and linked lists.

The library can be used in other C projects, so I can reuse my functions instead of writing them again.

## Instructions

### Requirements

To compile this library, you need:

- A C compiler, such as `cc`.
- `make`.
- A Unix-like operating system.

### Compilation

Clone the repository and enter the project directory:

```bash
git clone YOUR_REPOSITORY_URL
cd libft
```

Compile the library:

```bash
make
```

This creates a static library called `libft.a`.

### Makefile Commands

- `make`: Compile the library.
- `make clean`: Remove the object files.
- `make fclean`: Remove the object files and the library.
- `make re`: Clean and compile the library again.

### How to Use the Library

First, include the header file in your C program:

```c
#include "libft.h"
```

Then compile your program with the library:

```bash
cc main.c -L. -lft -I. -o program
```

Run the program:

```bash
./program
```

## Library Functions

The library contains different groups of functions.

### 1. Character Functions

These functions check characters or change their case.

Examples:

- `ft_isalpha`: Check if a character is a letter.
- `ft_isdigit`: Check if a character is a digit.
- `ft_isalnum`: Check if a character is a letter or a digit.
- `ft_toupper`: Convert a lowercase letter to uppercase.
- `ft_tolower`: Convert an uppercase letter to lowercase.

### 2. String Functions

These functions work with strings.

Examples:

- `ft_strlen`: Calculate the length of a string.
- `ft_strlcpy`: Copy a string with a size limit.
- `ft_strncmp`: Compare two strings.
- `ft_strchr`: Find a character in a string.
- `ft_strdup`: Create a copy of a string.
- `ft_substr`: Create a part of a string.
- `ft_strjoin`: Join two strings.
- `ft_split`: Split a string using a separator.

### 3. Memory Functions

These functions work directly with memory.

Examples:

- `ft_memset`: Fill a memory area with a value.
- `ft_bzero`: Set a memory area to zero.
- `ft_memcpy`: Copy bytes from one memory area to another.
- `ft_memmove`: Copy bytes safely when memory areas overlap.
- `ft_memchr`: Search for a byte in a memory area.
- `ft_memcmp`: Compare two memory areas.
- `ft_calloc`: Allocate memory and initialize it to zero.

### 4. Conversion and Output Functions

These functions convert values or write data.

Examples:

- `ft_atoi`: Convert a string to an integer.
- `ft_itoa`: Convert an integer to a string.
- `ft_putchar_fd`: Write a character to a file descriptor.
- `ft_putstr_fd`: Write a string to a file descriptor.
- `ft_putendl_fd`: Write a string followed by a newline.
- `ft_putnbr_fd`: Write an integer to a file descriptor.

### 5. Linked-List Functions

These functions help create and manage linked lists.

Examples:

- `ft_lstnew`: Create a new node.
- `ft_lstadd_front`: Add a node at the beginning.
- `ft_lstadd_back`: Add a node at the end.
- `ft_lstsize`: Count the nodes.
- `ft_lstlast`: Find the last node.
- `ft_lstdelone`: Delete one node and its content.
- `ft_lstclear`: Delete a list and its content.
- `ft_lstiter`: Apply a function to each node.
- `ft_lstmap`: Create a new list by applying a function to each node.

*Note: This list must match the functions actually implemented in my library.*

## Learning Approach

My main way of learning during this project is peer learning. I learn by discussing problems with other students, sharing ideas, explaining my code, and learning from their approaches.

I also use documentation and manual pages to understand how functions work.

When I have difficulty understanding a concept, I use AI as an additional tool to get explanations, understand errors, and explore examples. My goal is to understand the logic and write code that I can explain myself.

## Resources

- C documentation: https://en.cppreference.com/w/c
- Linux manual pages: https://man7.org/linux/man-pages/
- GNU Make documentation: https://www.gnu.org/software/make/manual/
- 42 School: https://42.fr/

## Author

- **Login:** mtraichl
- **School:** 1337
- **Project:** Libft
