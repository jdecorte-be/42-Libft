<br />
<p align="center">
  <a href="https://raw.githubusercontent.com/othneildrew/Best-README-Template/master/images/logo.png">
    <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/8/8d/42_Logo.svg/1200px-42_Logo.svg.png" alt="Logo" width="250" height="250">
  </a>

  <h3 align="center">42-Libft</h3>

  <p align="center">
    Projet libft of 42 school
    <br />
    <a href="https://github.com/JohnDbe/42-Libft/blob/master/README.md"><strong>Explore the docs »</strong></a>
    <br />
    <br />
  </p>
</p>


<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/jdecorte-be/42-Libft?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/jdecorte-be/42-Libft?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/jdecorte-be/42-Libft?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/jdecorte-be/42-Libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/jdecorte-be/42-Libft?color=green" />
</p>



# :pushpin: Index

* [What's this Repo?](#sparkles-What-is-Libft?)
* [List of Functions](#bookmark_tabs-List-of-Fucntions)
* [Technologies](#computer-Technologies)
* [How to Run](#construction_worker-How-to-Run)
* [Find a Bug? Or somenthing need to change?](#bug-Issues)

# :sparkles: What is Libft?

Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.

---

# :bookmark_tabs: List of Fucntions

## Functions from `<ctype.h>`

- [x] [`ft_isalpha`](Part1/ft_isalpha.c)	- checks for an alphabetic character.
- [x] [`ft_isdigit`](Part1/ft_isdigit.c)	- check for a digit (0 through 9).
- [x] [`ft_isalnum`](Part1/ft_isalnum.c)	- checks for an alphanumeric character.
- [x] [`ft_isascii`](Part1/ft_isascii.c)	- checks whether c fits into the ASCII character set.
- [x] [`ft_isprint`](Part1/ft_isprint.c)	- checks for any printable character.
- [x] [`ft_toupper`](Part1/ft_toupper.c)	- convert char to uppercase.
- [x] [`ft_tolower`](Part1/ft_tolower.c)	- convert char to lowercase.

## Functions from `<string.h>`

- [x] [`ft_strlen`](Part1/ft_strlen.c)	- calculate the length of a string.
- [x] [`ft_memset`](Part1/ft_memset.c)	- fill memory with a constant byte.
- [x] [`ft_bzero`](Part1/ft_bzero.c)	- zero a byte string.
- [x] [`ft_memcpy`](Part1/ft_memcpy.c)	- copy memory area.
- [x] [`ft_memmove`](Part1/ft_memmove.c)	- copy memory area.
- [x] [`ft_strlcpy`](Part1/ft_strlcpy.c)	- copy string to a specific size.
- [x] [`ft_strlcat`](Part1/ft_strlcat.c)	- concatenate a string to a specific size.
- [x] [`ft_strchr`](Part1/ft_strchr.c)	- locate character in a string.
- [x] [`ft_strrchr`](Part1/ft_strrchr.c)	- locate character in a string.
- [x] [`ft_strncmp`](Part1/ft_strncmp.c)	- compare two strings.
- [x] [`ft_memchr`](Part1/ft_memchr.c)	- scan memory for a character.
- [x] [`ft_memcmp`](Part1/ft_memcmp.c)	- compare memory areas.
- [x] [`ft_strnstr`](Part1/ft_strnstr.c)	- locate a substring in a string.
- [x] [`ft_strdup`](Part1/ft_strdup.c)	- creates a duplicate for the string passed as a parameter.

## Functions from `<stdlib.h>`
- [x] [`ft_atoi`](Part1/ft_atoi.c)	- convert a string to an integer.
- [x] [`ft_calloc`](Part1/ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

## Non-standard functions
- [x] [`ft_substr`](Part2/ft_substr.c)	- returns a substring from a string.
- [x] [`ft_strjoin`](Part2/ft_strjoin.c)	- concatenates two strings.
- [x] [`ft_strtrim`](Part2/ft_strtrim.c)	- trims the beginning and end of a string with a specific set of chars.
- [x] [`ft_split`](Part2/ft_split.c)	- splits a string using a char as parameter.
- [x] [`ft_itoa`](Part2/ft_itoa.c)	- converts a number into a string.
- [x] [`ft_strmapi`](Part2/ft_strmapi.c)	- applies a function to each character of a string.
- [x] [`ft_striteri`](Part2/ft_striteri.c)	- applies a function to each character of a string.
- [x] [`ft_putchar_fd`](Part2/ft_putchar_fd.c)	- output a char to a file descriptor.
- [x] [`ft_putstr_fd`](Part2/ft_putstr_fd.c)	- output a string to a file descriptor.
- [x] [`ft_putendl_fd`](Part2/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- [x] [`ft_putnbr_fd`](Part2/ft_putnbr_fd.c)	- output a number to a file descriptor.

## Linked list functions

- [x] [`ft_lstnew`](Bonus/ft_lstnew.c)	- creates a new list element.
- [x] [`ft_lstadd_front`](Bonus/ft_lstadd_front.c)	- adds an element at the beginning of a list.
- [x] [`ft_lstsize`](Bonus/ft_lstsize.c)	- counts the number of elements in a list.
- [x] [`ft_lstlast`](Bonus/ft_lstlast.c)	- returns the last element of the list.
- [x] [`ft_lstadd_back`](Bonus/ft_lstadd_back.c)	- adds an element at the end of a list.
- [x] [`ft_lstclear`](Bonus/ft_lstclear.c)	- deletes and free list.
- [x] [`ft_lstiter`](Bonus/ft_lstiter.c)	- applies a function to each element of a list.
- [x] [`ft_lstmap`](Bonus/ft_lstmap.c)	- applies a function to each element of a list.


## Functions of Others Projects

- [x] [`get_next_line`](https://github.com/luizlcezario/get_next_line)	- Funtions thats read the next line of a File Descriptor.
- [x] [`ft_printf`](https://github.com/Face-Tattoo/ft_printf)	- Function is a recreation of the original version of printf with some flags.
- [x] [`ft_strfstr`](Others/ft_strfstr.c)	- Function finds a first ocurrency of some letters from the second frase.
- [x] [`ft_itoa_base`](Others/ft_itoa_base.c)	- Function transform a number in base 10 to base thats was passed and then return in string version.

---

# :computer: Technologies

This Project was made with:

* [C](https://devdocs.io/)
* [Makefile](https://www.gnu.org/software/make/manual/make.html)
* [Shell](https://unixguide.readthedocs.io/en/latest/unixcheatsheet/)
* [gcc](https://terminaldeinformacao.com/2015/10/08/como-instalar-e-configurar-o-gcc-no-windows-mingw/)

# :construction_worker: How to Run
```bash
# *************COMMANDS************ #
# run - run compile all the libtest with the your libft and run the all tests
$ make all
# clean - remove the .o and .c files 
$ make clean
# fclean - remove the .o and .c files and the .a
$ make fclean
# re - remove all files and remake all
$ make re

# after run one time the the comand all 
# you can use compile others files .c using this lib 
# and using the function of then.
$ gcc main.c -L . -lft

```


# :bug: Issues

Please feel free **to create a new issue** with its title and description on the issues page of the [Libft](https://github.com/luizlcezario/Libft/issues) Repository. If you have already found the solution to the problem, **I would love to review your pull request**!


Give ⭐️ if you like this project, this will help me!
