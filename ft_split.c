#include "libft.h"


static int		ft_word(char const *s, char k)
{
    int		count;

    count = 0;
    while (*s)
	{
		while (*s && *s == k)
			s++;
		if (*s)
		{
			count++;
			s++;
		}
		while (*s && *s != k)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int i;
	int w;
	char **out;
	
	if (s == NULL)
		return (NULL);
	out = malloc((ft_word(s, c) + 1) * sizeof(char *));
	if (out == NULL)
		return (NULL);
	w = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			i = 0;
			while (*s && *s != c && i++ > -1)
				s++;
			out[w] = malloc(i + 1);
			s -= i;
			i = 0;
			while (*s && *s != c)
				out[w][i++] = *s++;
			out[w++][i] = '\0';
		}
	}
	out[w] = 0;
	return (out);
}
