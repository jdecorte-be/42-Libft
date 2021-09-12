#include "libft.h"

void *ft_memcpy(void *dest, const void * src, size_t n)
{
    char *destcpy = (char *)dest;
    char *srccpy = (char *)src;
    if(!dest && !src)
        return (NULL);
    size_t i = 0;
    while(i < n)
    {
        destcpy[i] = srccpy[i];
        i++;
    }
    return destcpy;
}
