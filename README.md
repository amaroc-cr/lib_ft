*This project has been created as part of the 42 curriculum by yuhma*

# Description
Libft is a custom C library which re-implements a number of libc functions,
along with additional functions for strings, memory, and linked lists.
All functions are listed in the #Functions section.

# Instructions
## Compilation
```bash
make         # build static library libft.a
```
## Clean
```bash
make clean   # delete all object files
make fclean  # delete all object files and libft.a
make re      # rebuild everything (fclean + make)
```

# Functions
## Libc Functions
```bash
ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_strlen
ft_memset
ft_bzero
ft_memcpy
ft_memmove
ft_strlcpy
ft_strlcat
ft_toupper
ft_tolower
ft_strchr
ft_strrchr
ft_strncmp
ft_memchr
ft_memcmp
ft_strnstr
ft_atoi
ft_calloc
ft_strdup
```
## Additional Functions
```bash
ft_substr         # return substring from string
ft_strjoin        # join strings into one
ft_strtrim        # trim characters from string
ft_split          # return array of substrings by delimiter
ft_itoa           # convert integer to string
ft_strmapi        # apply function to each character in string for new string
ft_striteri       # apply function to each character in string
ft_putchar_fd     # write character to file
ft_putstr_fd      # write string to file
ft_putendl_fd     # write string to file with new line
ft_putnbr_fd      # write integer to file
```
## Linked List Functions
```bash
ft_lstnew         # create new node
ft_lstadd_front   # add node to front of list
ft_lstsize        # return size of list
ft_lstlast        # return end of list
ft_lstadd_back    # add node to end of list
ft_lstdelone      # delete one node in list
ft_lstclear       # delete all nodes in list
ft_lstiter        # apply function to each node in list
ft_lstmap         # apply function to each node in list for new list
```

# Resources
- Manual pages for all re-implemented libc functions.
- Makefile tutorial https://makefiletutorial.com/
- ChatGPT for clarifying some function behaviors,
  reviewing double pointers, and sometimes for
  shortening / optimizing code.