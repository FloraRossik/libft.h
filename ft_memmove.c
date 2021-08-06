#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    char *pp = (char *)src;
    char *pp2 = (char *)dest;

	if (dest == NULL && src == NULL)
		return (NULL);
    if(pp2 > pp)
    {
        while (n-- > 0)
            pp2[n] = pp[n];
    }   
    else
    {
        while (0 < n)
        {
        *pp2 = *pp;
        pp++;
        pp2++;
        n--;
        }
    }
        return (dest);
}