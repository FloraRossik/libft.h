#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	i = 0;

	if (dst == 0 && src == 0)
		return (0);

	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
    		dst[i] = src[i];
			i++;
		}
		if (i != size)
			dst[i] = '\0';
	}
	return (ft_strlen(src));
}