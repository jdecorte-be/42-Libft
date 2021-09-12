#include "libft.h"

char *ft_strnstr(const char	*big, const char *little, size_t len)
{
    if(*big == 0 || *little == 0)
        return (char *)big;
    size_t i = 0;
    size_t j;
    while(i < len && big[i] != 0)
    {
        j = 0;
        while(big[i+j] == little[j] && i+j < len)
        {
            if(little[j + 1] == 0)
                return ((char *)big + i);
            j++;
        }

        i++;
    }
    return NULL;
}