#include "libft.h"

int is_white_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i = 0;
    int y = 0;
    int x = 0;
    int max = ft_strlen(s1);

    char *res = malloc(sizeof(char) * ft_strlen(s1));
    while(is_white_space(s1[i]) == 1)
        i++;
    while(is_white_space(s1[max-1]) == 1)
        max--;
    while(i < max)
    {
        if(is_white_space(res[i]) == 1)
        {
            y = 0;
            while(set[y])
            {
                res[x] = set[y];
                x++;
                y++;
            }
        }
        else
            res[x] = s1[i];

        x++;
        i++;
    }
    return res;
}