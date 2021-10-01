/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdecorte <jdecorte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:18:35 by jdecorte          #+#    #+#             */
/*   Updated: 2021/10/01 12:18:35 by jdecorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*mall;
	int		i;

	mall = malloc(sizeof(char) * ft_strlen(source));
	i = 0;
	while (source[i] != 0)
	{
		mall[i] = source[i];
		i++;
	}
	mall[i] = 0;
	return (mall);
}
