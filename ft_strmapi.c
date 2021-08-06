#include "libft.h"

char    *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	size_t		len;
    char	*new_str;
	size_t		i;

	i = 0;

    if (s == NULL || f == NULL)
		return (NULL);

	len = ft_strlen(s);

	new_str = malloc(sizeof(char ) * (len + 1));
	if (new_str == NULL)
		return (NULL);	

    while (i < len)
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = 0;
    return (new_str);
}