#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t      i;
    unsigned char *ptr;
    unsigned char *ptr1;

	if (dest == NULL && src == NULL)
		return (NULL);
    ptr = (unsigned char *)src;
    ptr1 = (char unsigned *)dest;
    i = 0;
    while(i < n)
    {
        ptr1[i] = ptr[i];
        i++;
    }
    return (dest);
}