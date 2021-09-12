#include "libft.h"

int ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
    const unsigned char *ptr1 = (const unsigned char *)pointer1;
    const unsigned char *ptr2 = (const unsigned char *)pointer2; 
    while(size--)
    {
        if(*ptr1 != *ptr2)
            return *ptr1 - *ptr2;
        ptr1++;
        ptr2++;
    }
    return 0;
}
