/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdecorte <jdecorte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:19:33 by jdecorte          #+#    #+#             */
/*   Updated: 2021/10/01 12:19:33 by jdecorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr( const char *string, int searchedChar )
{
	int	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (string[i] == searchedChar)
			return ((char *)string + i);
		i--;
	}
	return (NULL);
}
