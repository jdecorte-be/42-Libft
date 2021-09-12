#include "libft.h"

char *ft_strdup( const char *source )
{
    char *mall = malloc(sizeof(char) * ft_strlen(source));
    int i = 0;
    while(source[i] != 0)
    {
        mall[i] = source[i];
        i++;
    }
    mall[i] = 0;
    return mall;
}
