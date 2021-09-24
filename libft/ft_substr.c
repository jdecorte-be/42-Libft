#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;
	int		startnomod;

	res = malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);
	i = 0;
	startnomod = start;
	while (start < len + startnomod)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	return (res);
}
