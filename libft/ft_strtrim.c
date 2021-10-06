/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdecorte <jdecorte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:19:35 by jdecorte          #+#    #+#             */
/*   Updated: 2021/10/06 14:35:37 by jdecorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_white_space(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		y;
	int		x;
	int		max;
	char	*res;

	i = 0;
	y = 0;
	x = 0;
	res = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!res)
		return (NULL);
	max = ft_strlen(s1);
	while (is_white_space(s1[i], set) == 1)
		i++;
	while (is_white_space(s1[max - 1], set) == 1)
		max--;
	while (i < max)
		res[x++] = s1[i++];
	res[x] = '\0';
	return (res);
}
