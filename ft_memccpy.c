#include "libft.h"

void     *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t      i;
    unsigned char *ptr;
    unsigned char *ptr1;
    
    ptr = (unsigned char *)src;
    ptr1 = (char unsigned *)dest;
    i = 0;

    while(i < n)
    {
            ptr1[i] = ptr[i];
            if (ptr1[i] == (unsigned char)c)
                return ((void *)(dest + i +1));
            i++;
    }
    return(NULL);
}
