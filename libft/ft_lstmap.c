/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdecorte <jdecorte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:17:59 by jdecorte          #+#    #+#             */
/*   Updated: 2021/10/06 14:13:24 by jdecorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*resfct;

	(void)del;
	if (!lst || !f)
		return (NULL);
	resfct = ft_lstnew(f(lst->content));
	if (!(resfct))
		return (NULL);
	res = resfct;
	lst = lst->next;
	while (lst)
	{
		resfct = ft_lstnew(f(lst->content));
		if (!(resfct))
		{
			ft_lstclear(&resfct, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&res, resfct);
	}
	return (res);
}
