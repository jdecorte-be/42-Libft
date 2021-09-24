#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	char	*res;

	res = malloc(elementSize * elementCount);
	if (!res)
		return (0);
	return (res);
}
