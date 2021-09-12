#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *nbr = ft_itoa(n);
    ft_putstr_fd(nbr,fd);
}