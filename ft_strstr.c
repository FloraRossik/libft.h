#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{ 
	unsigned int i;
    unsigned int j;
	
	i = 0;
    if (*needle == '\0')
        return ((char *)haystack);

    while (haystack[i] != '\0')
    {
			j = 0;
			while (haystack [i + j] != '\0' && haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
				j++;
			}
			i++;
	}
        return (0);
}