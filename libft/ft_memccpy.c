#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char unsigned *destcpy = (unsigned char *)dest;
    char unsigned *srccpy = (unsigned char *)src;
    size_t  i = 0;

    while(i < n)
    {
        destcpy[i] = srccpy[i];
        if(srccpy[i] == c)
            return ((void*)(destcpy + i + 1));
        i++;
    }
    return NULL;
}
