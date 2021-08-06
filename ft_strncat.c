#include "libft.h"

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    int i;
    size_t j;

    i = 0;
    j = 0;
    if (dest == NULL && src == NULL)
        return (NULL);

while (dest[i] != '\0')
{
    i++;
}
    while (src[j] != '\0' && j < n)
{
    dest[i] = src[j];
    i++;
    j++;
}
    dest[i] = '\0';

        return (dest);
}