#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *destmov = (char *)dest;
    char *srcmov = (char *)src;

    size_t i = 0;
    if (destmov > srcmov)
		while (n-- > 0)
			destmov[n] = srcmov[n];
    else
    {
        while(i < n)
        {
            destmov[i] = srcmov[i];
            i++;
        }
    }
    return destmov;
}