#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
	int	end;
	int	start;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (ft_strlen(set) == 0)
		return (ft_strdup(""));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while(end > start && ft_strchr(set, s1[end - 1]))
		end--;
	if (end == start)
		return (ft_strdup(""));
	return(ft_substr(s1, start, end - start));
}
