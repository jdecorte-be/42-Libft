#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    int i = 0;
    while(s[i])
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
    ft_putchar_fd('\n', fd);
}