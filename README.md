*This project has been created as part of the 42 curriculum by hamonajj.*

# libft

## Description

**libft** is the first project of the 42 common core. The goal is to write a C library of
general-purpose functions. Later projects use it, because most standard library functions
are not allowed in the 42 curriculum.

The library is compiled into a static archive, `libft.a`, and has three parts.

### Part 1 – libc functions
Reimplementations of standard C functions with the same behaviour as the originals:

| Category | Functions |
|---|---|
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Character conversion | `ft_toupper`, `ft_tolower` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi` |

### Part 2 – Additional functions
Functions that are not in libc, or that exist there in a different form:

| Function | Description |
|---|---|
| `ft_substr` | Returns a substring of a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Removes the characters of a set from both ends of a string |
| `ft_split` | Splits a string by a delimiter into an array of strings |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character and returns a new string |
| `ft_striteri` | Applies a function to each character in place |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Write a character, string, line or number to a file descriptor |

### Part 3 – Linked lists
Functions that work on the `t_list` structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`,
`ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

## Instructions

### Compilation
The library is built with `cc` and the flags `-Wall -Wextra -Werror`.

```sh
make          # builds libft.a (all three parts)
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # rebuilds everything from scratch
```

### Usage
Include the header in your code and link against the archive:

```c
#include "libft.h"
```

```sh
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

## Resources

- Linux manual pages: `man 3 strlcpy`, `man 3 memmove`, `man 3 strnstr`, etc.
- The 42 libft subject PDF
- [C reference – cppreference.com](https://en.cppreference.com/w/c)
- Peer discussions with other 42 students

### AI usage
I used an AI assistant (Claude) to **review** my finished implementations, not to write them.
It pointed out edge cases I had missed, for example the return value of `ft_strchr` with
`'\0'`, `ft_itoa(0)`, `ft_substr` when `start` is past the end of the string, unsigned
comparison in `ft_strncmp`, and the `len` limit in `ft_strnstr`. I then corrected those
cases myself, keeping my original logic. All the code was written, tested and understood by me.
