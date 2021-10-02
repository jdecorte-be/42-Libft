/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdecorte <jdecorte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:17:59 by jdecorte          #+#    #+#             */
/*   Updated: 2021/10/02 14:00:57 by jdecorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*res;
	t_list	*fctres;

	if (!f || !del || !lst)
		return (NULL);
	while (lst)
	{
		fctres = ft_lstnew(f(lst->content));
		if (!(fctres))
			return (NULL);
		ft_lstadd_back(&res, fctres);
		lst = lst->next;
		free(fctres);
	}
	return (res);
}
