#include "libft.h"

int     ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
            return ((unsigned char)(c - 32));
        return (c);
}