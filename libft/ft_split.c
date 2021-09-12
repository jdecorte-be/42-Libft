
#include <stdlib.h>

static int		unleah(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

static int		count_words(const char *str, char charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0') == 1
				&& (str[i] == charset || str[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}

static void		write_word(char *dest, const char *from, char charset)
{
	int	i;

	i = 0;
	while ((from[i] == charset || from[i] == '\0') == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static int		write_split(char **split, const char *str, char charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == charset || str[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == charset || str[i + j] == '\0') == 0)
				j++;
			if ((split[word] = (char*)malloc(sizeof(char) * (j + 1))) == NULL)
				return (unleah(split, word - 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
	return (0);
}

char			**ft_split(const char *str, char c)
{
	char	**res;
	int		words;

	words = count_words(str, c);
	if ((res = (char**)malloc(sizeof(char*) * (words + 1))) == NULL)
		return (NULL);
	res[words] = 0;
	if (write_split(res, str, c) == -1)
		return (NULL);
	return (res);
}
