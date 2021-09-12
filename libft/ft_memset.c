#include "libft.h"

void *ft_memset(void *ptr, int value, size_t count)
{
    char *strptr = (char *)ptr;

    size_t i = 0;
    while(i < count)
    {
        strptr[i] = value;
        i++;
    }
    return ptr;
}
