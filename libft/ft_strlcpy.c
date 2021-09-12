#include "libft.h"

size_t ft_strlcpy( char *dst, const char *src, size_t size)
{

    size_t i = 0;
    int res = ft_strlen(src);
    if(size == 0)
        return res;
    while(i < size-1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }

    if(size > i)
        dst[i] = 0;

    return res;
}
