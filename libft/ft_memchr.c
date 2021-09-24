#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	unsigned char	*strtosrc;
	size_t			i;

	strtosrc = (unsigned char *)memoryBlock;
	i = 0;
	while (i < size)
	{
		if (*strtosrc == (unsigned char)searchedChar)
			return (strtosrc);
		strtosrc++;
		i++;
	}
	return (NULL);
}
