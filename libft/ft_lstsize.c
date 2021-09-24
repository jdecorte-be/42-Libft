#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int len = 0;
    t_list *tmp = lst;

    if(tmp == NULL)
        return 0;
    while(tmp->next != 0)
    {
        tmp = tmp->next;
        len++;
    }
    if(tmp->next == 0)
        len++;
    return len;
}