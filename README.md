# My own standard C library 🔧

When coding projects at 42, most standard functions are forbidden. C programming can be very tedious when you don't have access to those highly useful standard functions. The goal of this first project is therefore to code a C library regrouping usual functions. This library also includes my own version of printf and function get_next_line (returns a line read from a file descriptor).

I re-coded the following functions: memset, bzero, memcpy, memccpy, memmove, memchr, memcmp, strlen, strdup, strcpy, strncpy, strcat, strncat, strlcat, strchr, strrchr, strstr, strnstr, strcmp, strncmp, atoi, isalpha, isdigit, isalnum, isascii, isprint, toupper, tolower

I also coded a set of functions that are either not included in the libc, or included in a different form.

## Get_Next_Line

Function get_next_line allows you to read a line ending with a newline character from a file descriptor.

Calling function get_next_line in a loop will allow you to read the text available on a file descriptor one line at a time until the end of the text, no matter the size of either the text or one of its lines.

My get_next_line is coded with a single static variable and supports multiple file descriptor. For instance, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each descriptor.

## How to create the library libft.a
```console
git clone https://github.com/ekelkel/42-Libft.git && cd 42-Libft && make
```
