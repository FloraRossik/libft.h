#include "libft.h"

int    ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t      i;
    unsigned char *ptr;
    unsigned char *ptr1;

    if (s1 == s2 || n == 0)
        return (0);
    
    ptr = (unsigned char *)s1;
    ptr1 = (unsigned char *)s2;
    i = 0;

    while(i < n)
    {
        if (ptr[i] != ptr1[i])
            return ((unsigned char)ptr[i] - (unsigned char)ptr1[i]);
        i++;
    }
        return (0);
}