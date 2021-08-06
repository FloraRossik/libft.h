#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
	char			*new_str;
	int		len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(sizeof(* new_str) * (len + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, s1);
	ft_strcat(new_str, s2);
	return (new_str);
}