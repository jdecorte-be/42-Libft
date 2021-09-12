#include "libft.h"

int ft_isprint(int character)
{
    if(character >= 32 && character < 127)
        return 1;
    return 0;
}
