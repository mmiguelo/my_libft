<a id="readme-top"></a>

<div align="center">

# 📚 my_libft

### A custom C standard library — built from scratch at 42

[![42 School](https://img.shields.io/badge/42-School-000000?style=for-the-badge&logo=42&logoColor=white)](https://42.fr)
[![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)](LICENSE)
[![Norminette](https://img.shields.io/badge/Norminette-Passing-brightgreen?style=for-the-badge)](https://github.com/42School/norminette)

*A comprehensive reimplementation of essential C library functions, extended with linked list operations, `ft_printf`, and `get_next_line`.*

---

</div>

## 🗂️ Table of Contents

- [About](#about)
- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Function Reference](#function-reference)
- [Project Structure](#project-structure)
- [Author](#author)

---

## 📖 About

**my_libft** is a personal C library developed as part of the [42 School](https://42.fr) curriculum. It serves as a foundational toolkit that reimplements standard C library functions alongside bonus utilities like linked list management, a custom `printf`, and a line-reading function (`get_next_line`).

This library is designed to be reused across future 42 projects, providing reliable, well-tested, and norminette-compliant utility functions.

---

## ✨ Features

- 🔧 **Standard libc reimplementations** — `ft_strlen`, `ft_memcpy`, `ft_calloc`, `ft_atoi`, and more
- 🔗 **Linked list operations** — Full suite including `ft_lstnew`, `ft_lstmap`, `ft_lstadd_back`, etc.
- 🖨️ **ft_printf** — Custom implementation of `printf` with support for common format specifiers
- 📖 **get_next_line** — Read a file line by line from any file descriptor
- ✅ **42 Norminette compliant**
- 📦 **Compiled as a static library** (`libft.a`) for easy linking

---

## 🚀 Getting Started

### Prerequisites

- **GCC** or **CC** compiler
- **Make**
- A Unix-like operating system (Linux / macOS)

### Installation

```bash
# Clone the repository
git clone https://github.com/mmiguelo/my_libft.git

# Navigate into the project directory
cd my_libft

# Compile the library
make
```

This will generate the `libft.a` static library file in the project root.

---

## 🔨 Usage

Include the header in your C files and link the library at compile time:

```c
#include "libft.h"

int main(void)
{
    char *str = ft_strdup("Hello, 42!");
    ft_putendl_fd(str, 1);
    free(str);
    return (0);
}
```

Compile with:

```bash
cc main.c -L. -lft -I./includes -o my_program
```

---

## 📋 Function Reference

### Checkers

| Function | Description |
|:---------|:------------|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is in the ASCII table |
| `ft_isprint` | Checks if a character is printable |

### Converters

| Function | Description |
|:---------|:------------|
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_atoi` | Converts a string to an `int` |
| `ft_atol` | Converts a string to a `long` |
| `ft_atoll` | Converts a string to a `long long` |
| `ft_atof` | Converts a string to a `float`/`double` |
| `ft_itoa` | Converts an `int` to a string |

### String Manipulation

| Function | Description |
|:---------|:------------|
| `ft_strlen` | Returns the length of a string |
| `ft_strlcpy` | Copies a string with size limit |
| `ft_strlcat` | Concatenates strings with size limit |
| `ft_strchr` | Locates the first occurrence of a character |
| `ft_strrchr` | Locates the last occurrence of a character |
| `ft_strcmp` | Compares two strings |
| `ft_strncmp` | Compares two strings up to `n` characters |
| `ft_strnstr` | Locates a substring within a bounded string |
| `ft_strdup` | Duplicates a string (heap-allocated) |
| `ft_strjoin` | Joins two strings into a new one |
| `ft_strtrim` | Trims leading/trailing characters from a string |
| `ft_substr` | Extracts a substring from a string |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_strmapi` | Applies a function to each character (new string) |
| `ft_striteri` | Applies a function to each character (in-place) |

### Memory

| Function | Description |
|:---------|:------------|
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Zeros out a block of memory |
| `ft_memcpy` | Copies memory area |
| `ft_memmove` | Copies memory area (overlap-safe) |
| `ft_memchr` | Scans memory for a byte |
| `ft_memcmp` | Compares memory areas |
| `ft_calloc` | Allocates zero-initialized memory |

### File Descriptor Output

| Function | Description |
|:---------|:------------|
| `ft_putchar_fd` | Outputs a character to a file descriptor |
| `ft_putstr_fd` | Outputs a string to a file descriptor |
| `ft_putendl_fd` | Outputs a string followed by a newline |
| `ft_putnbr_fd` | Outputs an integer to a file descriptor |

### Linked Lists

| Function | Description |
|:---------|:------------|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning |
| `ft_lstadd_back` | Adds a node at the end |
| `ft_lstsize` | Counts the number of nodes |
| `ft_lstlast` | Returns the last node |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes and frees all nodes |
| `ft_lstiter` | Iterates and applies a function to each node |
| `ft_lstmap` | Maps a function over a list into a new list |

### Extras

| Function | Description |
|:---------|:------------|
| `ft_printf` | Custom implementation of `printf` |
| `get_next_line` | Reads a line from a file descriptor |
| `ft_array_len` | Returns the length of a `NULL`-terminated array |

---

## 🏗️ Project Structure

```
my_libft/
├── Makefile
├── README.md
├── includes/
│   └── libft.h
└── src/
    ├── ft_*.c              # Core library functions
    ├── ft_printf/          # ft_printf implementation
    │   ├── ft_printf.c
    │   ├── ft_printf.h
    │   └── ...
    └── get_next_line/      # get_next_line implementation
        ├── get_next_line.c
        ├── get_next_line.h
        └── ...
```

### Makefile Targets

| Command | Description |
|:--------|:------------|
| `make` | Compiles the library (`libft.a`) |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and the library |
| `make re` | Full recompile |

---

## 👤 Author

**mmiguelo** — 42 Student

[![GitHub](https://img.shields.io/badge/GitHub-mmiguelo-181717?style=flat-square&logo=github)](https://github.com/mmiguelo)

---

<div align="center">

*Made with ❤️ at 42*

<p>(<a href="#readme-top">back to top</a>)</p>

</div>
