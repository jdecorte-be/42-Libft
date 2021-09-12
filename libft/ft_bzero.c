#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char *str = (char *)s;
    size_t i = 0;
    while(i < n)
    {
        str[i] = '\0';
        i++;
    }
}

