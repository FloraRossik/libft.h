#include "libft.h"

char    *ft_strdup(const char *s1)
{
    size_t  len;
    char    *str;
    char    *tmp;

    len = ft_strlen((char *)s1);
    str = malloc(len+1);
    if (str == NULL)
            return (NULL);
    tmp = str;
    while(*s1 != '\0')
    {
		*str++ = *s1++;    
    }
    *str = '\0';
    return (tmp);
}
