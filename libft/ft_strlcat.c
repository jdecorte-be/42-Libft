#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t j = 0;
    size_t i = 0;
    int totallen;
    size_t lendst = ft_strlen(dst);
    size_t lensrc = ft_strlen(src);
    if(size > lendst)
        totallen = lendst + lensrc;
    else
        totallen = lensrc + size;
    j = lendst;
    while(src[i] && j + 1 < size)
    {
        dst[j] = src[i];
        j++;
        i++;
    }
    dst[j] = 0;
    return totallen;
}