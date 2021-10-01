/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdecorte <jdecorte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:18:05 by jdecorte          #+#    #+#             */
/*   Updated: 2021/10/01 12:18:05 by jdecorte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char unsigned	*destcpy;
	unsigned char	*srccpy;
	size_t			i;

	destcpy = (unsigned char *)dest;
	srccpy = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destcpy[i] = srccpy[i];
		if (srccpy[i] == c)
			return ((void *)(destcpy + i + 1));
		i++;
	}
	return (NULL);
}
