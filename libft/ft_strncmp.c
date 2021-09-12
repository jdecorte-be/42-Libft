#include "libft.h"

int ft_strncmp( const char * first, const char * second, size_t length )
{
    size_t i = 0;
    
    while(i < length)
    {
        if((unsigned char)first[i] != (unsigned char)second[i])
            return (unsigned char)first[i]  - (unsigned char)second[i];
        i++;
    }
    return 0;
}
