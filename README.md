# libft

`libft` is a library of basic functions used in C programming. It includes implementations of standard library functions and additional utility functions. This library is designed to provide functionality similar to the C standard library but with custom implementations for educational purposes or specific needs.

## Table of Contents

- [Overview](#overview)
- [Functions](#functions)
  - [Character Checks](#character-checks)
  - [String Manipulation](#string-manipulation)
  - [Memory Management](#memory-management)
  - [Linked Lists](#linked-lists)
- [Usage](#usage)
- [License](#license)

## Overview

The `libft` library provides implementations of various C standard library functions, as well as some additional utility functions. The functions are grouped by category for better organization. Each category is implemented in a separate file within the `srcs` directory.

## Functions

### Character Checks

- [ft_isalpha](srcs/charChecksAndConvert/ft_isalpha.c): Checks if a character is an alphabetic letter.
- [ft_isdigit](srcs/charChecksAndConvert/ft_isdigit.c): Checks if a character is a digit.
- [ft_isalnum](srcs/charChecksAndConvert/ft_isalnum.c): Checks if a character is alphanumeric.
- [ft_isascii](srcs/charChecksAndConvert/ft_isascii.c): Checks if a character is an ASCII character.
- [ft_isprint](srcs/charChecksAndConvert/ft_isprint.c): Checks if a character is printable.

### String Manipulation

- **`ft_strlen`**: Computes the length of a string. [Source](srcs/ft_strlen.c)
- **`ft_memset`**: Fills a block of memory with a specific value. [Source](srcs/ft_memset.c)
- **`ft_bzero`**: Sets a block of memory to zero. [Source](srcs/ft_bzero.c)
- **`ft_memcpy`**: Copies a block of memory from one location to another. [Source](srcs/ft_memcpy.c)
- **`ft_memmove`**: Moves a block of memory from one location to another, handling overlap. [Source](srcs/ft_memmove.c)
- **`ft_strlcpy`**: Copies a string to a destination with size limitation. [Source](srcs/ft_strlcpy.c)
- **`ft_strlcat`**: Concatenates strings with size limitation. [Source](srcs/ft_strlcat.c)
- **`ft_toupper`**: Converts a character to uppercase. [Source](srcs/ft_toupper.c)
- **`ft_tolower`**: Converts a character to lowercase. [Source](srcs/ft_tolower.c)
- **`ft_strchr`**: Finds the first occurrence of a character in a string. [Source](srcs/ft_strchr.c)
- **`ft_strrchr`**: Finds the last occurrence of a character in a string. [Source](srcs/ft_strrchr.c)
- **`ft_strncmp`**: Compares a certain number of characters from two strings. [Source](srcs/ft_strncmp.c)
- **`ft_memchr`**: Finds the first occurrence of a character in a block of memory. [Source](srcs/ft_memchr.c)
- **`ft_memcmp`**: Compares two blocks of memory. [Source](srcs/ft_memcmp.c)
- **`ft_strnstr`**: Finds the first occurrence of a substring in a string. [Source](srcs/ft_strnstr.c)
- **`ft_atoi`**: Converts a string to an integer. [Source](srcs/ft_atoi.c)
- **`ft_calloc`**: Allocates memory for an array and initializes it to zero. [Source](srcs/ft_calloc.c)
- **`ft_strdup`**: Duplicates a string. [Source](srcs/ft_strdup.c)
- **`ft_substr`**: Extracts a substring from a string. [Source](srcs/ft_substr.c)
- **`ft_strjoin`**: Concatenates two strings. [Source](srcs/ft_strjoin.c)
- **`ft_strtrim`**: Trims characters from the start and end of a string. [Source](srcs/ft_strtrim.c)
- **`ft_split`**: Splits a string into an array of strings. [Source](srcs/ft_split.c)
- **`ft_itoa`**: Converts an integer to a string. [Source](srcs/ft_itoa.c)
- **`ft_strmapi`**: Applies a function to each character of a string and returns a new string. [Source](srcs/ft_strmapi.c)
- **`ft_striteri`**: Applies a function to each character of a string with its index. [Source](srcs/ft_striteri.c)
- **`ft_putchar_fd`**: Writes a character to a file descriptor. [Source](srcs/ft_putchar_fd.c)
- **`ft_putstr_fd`**: Writes a string to a file descriptor. [Source](srcs/ft_putstr_fd.c)
- **`ft_putendl_fd`**: Writes a string followed by a newline to a file descriptor. [Source](srcs/ft_putendl_fd.c)
- **`ft_putnbr_fd`**: Writes an integer to a file descriptor. [Source](srcs/ft_putnbr_fd.c)

### Memory Management

- **`ft_lstnew`**: Creates a new list element. [Source](srcs/ft_lstnew.c)
- **`ft_lstadd_front`**: Adds an element to the beginning of a list. [Source](srcs/ft_lstadd_front.c)
- **`ft_lstsize`**: Counts the number of elements in a list. [Source](srcs/ft_lstsize.c)
- **`ft_lstlast`**: Returns the last element of a list. [Source](srcs/ft_lstlast.c)
- **`ft_lstadd_back`**: Adds an element to the end of a list. [Source](srcs/ft_lstadd_back.c)
- **`ft_lstdelone`**: Deletes a single element from a list. [Source](srcs/ft_lstdelone.c)
- **`ft_lstclear`**: Deletes all elements in a list. [Source](srcs/ft_lstclear.c)
- **`ft_lstiter`**: Iterates over a list and applies a function to each element. [Source](srcs/ft_lstiter.c)
- **`ft_lstmap`**: Applies a function to each element of a list and creates a new list from the results. [Source](srcs/ft_lstmap.c)

## Usage

To compile the library, run:

```sh
make
```

To clean the object files and the archive, run:

```sh
make fclean
```

To remove all generated files and rebuild the library, run:

```sh
make && make fclean
```
