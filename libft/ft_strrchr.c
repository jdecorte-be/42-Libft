#include "libft.h"

char *ft_strrchr( const char *string, int searchedChar )
{
    int i;

    i = ft_strlen(string);
    while(i >= 0)
    {
        if(string[i] == searchedChar)
            return ((char*)string + i);
        i--;
    }
    return NULL;
}
