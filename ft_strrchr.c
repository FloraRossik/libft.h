#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	char		*save;
   	char		*s1;

	s1 = (char *)s;
	save = NULL;

    while (*s1 != '\0')
    	{ 
        	if (*s1 == ((char )c))
            	save = s1;
        	s1++;
    	}
		if (c == '\0')
			return (s1);
    	return (save);
}