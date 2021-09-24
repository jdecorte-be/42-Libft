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
