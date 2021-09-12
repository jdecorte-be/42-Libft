#include "libft.h"

void *ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
    unsigned char *strtosrc = (unsigned char *)memoryBlock;

    size_t i = 0;
    while(i < size)
    {
        if(*strtosrc == (unsigned char)searchedChar)
            return strtosrc;
        strtosrc++;
        i++;
    }
    return NULL;
}
