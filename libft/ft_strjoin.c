#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int sizetotal = ft_strlen(s1) + ft_strlen(s2);
    char *res = malloc(sizeof(char) * sizetotal);
    if(res == NULL)
        return NULL;
    int i = 0;
    while(s1[i] != 0)
    {
        res[i] = s1[i];
        i++;
    }
    int j = 0;
    while(s2[j] != 0)
    {
        res[i] = s2[j];
        i++;
        j++;
    }
    return res;
}