#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newS;
	size_t		i;

	i = 0;

    if (s == NULL)
		return (NULL);
	while (*s  && start--)
		s++;
	if (len == 0 || *s == 0)
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	newS = malloc(sizeof(char ) * (len + 1));
	if (newS == NULL)
		return (NULL);
	while (*s && len--)
		newS[i++] = *s++;
	newS[i] = '\0';
	return (newS);
}
