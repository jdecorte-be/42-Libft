/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdecorte <jdecorte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:19:35 by jdecorte          #+#    #+#             */
/*   Updated: 2021/10/01 15:31:06 by jdecorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_white_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

void	ft_short(char const *set, int y, char *res, int x)
{
	y = 0;
	while (set[y])
		res[x++] = set[y++];
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
	res = malloc(sizeof(char) * ft_strlen(s1));
	max = ft_strlen(s1);
	while (is_white_space(s1[i]) == 1)
		i++;
	while (is_white_space(s1[max - 1]) == 1)
		max--;
	while (i < max)
	{
		if (is_white_space(res[i]) == 1)
			ft_short(set, y, res, x);
		else
			res[x++] = s1[i++];
	}
	res[x] = '\0';
	return (res);
}
