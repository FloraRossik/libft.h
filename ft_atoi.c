#include "libft.h"

static int ft_isspace(int c)
{
	return (c == ' ' || (c > 8 && c < 14));
}

int ft_atoi(const char *nptr)
{
    int     i;
    unsigned long long    sum;
	int    sign;

    i = 0;
    sum = 0;
    sign = 1;
	while (ft_isspace(nptr[i]))
		i++;
    if (nptr[i] == '-' || nptr[i] == '+')
    {
        if(nptr[i] == '-')
            sign = -1;
        i++;
    }
    while (ft_isdigit(nptr[i]))
    {
        sum = sum * 10 + nptr[i] - 48;
        i++;
		if (sum > 9223372036854775806L)
		{
			if (sign == 1)
				return (-1);
			if (sum > 9223372036854775807L)
				return (0);
			return (1);
		}
    }
        return ((int)(sum * sign));
}
