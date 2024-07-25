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

### Character Checks and Converts

- [ft_isalnum](srcs/charChecksAndConvert/ft_isalnum.c): Checks if a character is alphanumeric.
- [ft_isalpha](srcs/charChecksAndConvert/ft_isalpha.c): Checks if a character is an alphabetic letter.
- [ft_isascii](srcs/charChecksAndConvert/ft_isascii.c): Checks if a character is an ASCII character.
- [ft_isdigit](srcs/charChecksAndConvert/ft_isdigit.c): Checks if a character is a digit.
- [ft_isprint](srcs/charChecksAndConvert/ft_isprint.c): Checks if a character is printable.
- [ft_tolower](srcs/charChecksAndConvert/ft_tolower.c): Converts a character to lowercase.
- [ft_toupper](srcs/charChecksAndConvert/ft_toupper.c): Converts a character to uppercase.

### Convert

- [ft_atoi](srcs/convert/ft_atoi.c): Converts a string to an integer.
- [ft_itoa](srcs/convert/ft_itoa.c): Converts an integer to a string.


### Input and Output

- [ft_putchar_fd](srcs/inOutPut/ft_putchar_fd.c): Writes a character to a file descriptor.
- [ft_putendl_fd](srcs/inOutPut/ft_putendl_fd.c): Writes a string followed by a newline to a file descriptor.
- [ft_putnbr_fd](srcs/inOutPut/ft_putnbr_fd.c): Writes an integer to a file descriptor.
- [ft_putstr_fd](srcs/inOutPut/ft_putstr_fd.c): Writes a string to a file descriptor.


### Linked Lists Operations

- [ft_lstadd_back](srcs/linkeListOperations/ft_lstadd_back.c): Adds an element to the end of a list.
- [ft_lstadd_front](srcs/linkeListOperations/ft_lstadd_front.c): Adds an element to the beginning of a list.
- [ft_lstclear](srcs/linkeListOperations/ft_lstclear.c): Deletes all elements in a list.
- [ft_lstdelone](srcs/linkeListOperations/ft_lstdelone.c): Deletes a single element from a list.
- [ft_lstiter](srcs/linkeListOperations/ft_lstiter.c): Iterates over a list and applies a function to each element.
- [ft_lstlast](srcs/linkeListOperations/ft_lstlast.c): Returns the last element of a list.
- [ft_lstmap](srcs/linkeListOperations/ft_lstmap.c): Applies a function to each element of a list and creates a new list from the results.
- [ft_lstnew](srcs/linkeListOperations/ft_lstnew.c): Creates a new list element.
- [ft_lstsize](srcs/linkeListOperations/ft_lstsize.c): Counts the number of elements in a list.


### Memory Management

- [ft_bzero](srcs/memoManagement/ft_bzero.c): Sets a block of memory to zero.
- [ft_calloc](srcs/memoManagement/ft_calloc.c): Allocates memory for an array and initializes it to zero.
- [ft_memchr](srcs/memoManagement/ft_memchr.c): Finds the first occurrence of a character in a block of memory.
- [ft_memcmp](srcs/memoManagement/ft_memcmp.c): Compares two blocks of memory.
- [ft_memcpy](srcs/memoManagement/ft_memcpy.c): Copies a block of memory from one location to another.
- [ft_memmove](srcs/memoManagement/ft_memmove.c): Moves a block of memory from one location to another, handling overlap.
- [ft_memset](srcs/memoManagement/ft_memset.c) Fills a block of memory with a specific value.
- [ft_strdup](srcs/memoManagement/ft_strdup.c): Duplicates a string.


### String Manipulation

- [ft_split](srcs/strManipulation/ft_split.c): Splits a string into an array of strings.
- [ft_strchr](srcs/strManipulation/ft_strchr.c): Finds the first occurrence of a character in a string.
- [ft_striteri](srcs/strManipulation/ft_striteri.c): Applies a function to each character of a string with its index.
- [ft_strjoin](srcs/strManipulation/ft_strjoin.c): Concatenates two strings.
- [ft_strlcat](srcs/strManipulation/ft_strlcat.c): Concatenates strings with size limitation.
- [ft_strlcpy](srcs/strManipulation/ft_strlcpy.c): Copies a string to a destination with size limitation.
- [ft_strlen](srcs/strManipulation/ft_strlen.c): Computes the length of a string.
- [ft_strmapi](srcs/strManipulation/ft_strmapi.c): Applies a function to each character of a string and returns a new string.
- [ft_strncmp](srcs/strManipulation/ft_strncmp.c): Compares a certain number of characters from two strings.
- [ft_strnstr](srcs/strManipulation/ft_strnstr.c): Finds the first occurrence of a substring in a string.
- [ft_strrchr](srcs/strManipulation/ft_strrchr.c): Finds the last occurrence of a character in a string.
- [ft_strtrim](srcs/strManipulation/ft_strtrim.c): Trims characters from the start and end of a string.
- [ft_substr](srcs/strManipulation/ft_substr.c): Extracts a substring from a string.

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
