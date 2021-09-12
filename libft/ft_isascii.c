#include "libft.h"

int ft_isascii( int character )
{
    if(character >= 0 && character <= 223)
        return 1;
    return 0;
}