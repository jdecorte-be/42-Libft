#include "libft.h"

char *ft_strchr(const char *string, int searchedChar )
{
    char *str = (char *)string;

    while(*str != searchedChar && *str != 0)
        str++;

    if(*str == searchedChar)
        return str;
    else    
        return NULL;
}