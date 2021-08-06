#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t                  i;
    unsigned char   *str;
    unsigned char save_c;
    
    str = (unsigned char *)s;
    save_c = (unsigned char)c;
    i = 0;
    
    while(i < n)
    {
            if (*str == (unsigned char)save_c)
            {
                return (str);
            }
            str++;
            i++;
    }
    return(NULL);
}