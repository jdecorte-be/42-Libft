#include "libft.h"

void *ft_calloc( size_t elementCount, size_t elementSize )
{
    char *mall = malloc(elementSize * elementCount);
    if(!mall)
        return 0;
    return mall;
}
