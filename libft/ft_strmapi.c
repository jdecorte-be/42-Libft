#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = 0;
    char *res = malloc(ft_strlen(s));
    while(s[i] != 0)
    {
        res[i] = (*f)(i, s[i]);
        i++;
    }

    return res;
}