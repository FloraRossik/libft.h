#include "libft.h"

int     ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
         return ((unsigned char)(c + 32));
    return (c);
}