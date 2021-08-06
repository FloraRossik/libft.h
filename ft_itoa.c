#include "libft.h"

int		ft_numb_str(long n)
{
	int		str_len;

	str_len = 0;

	if (n < 0)
	{
		n *= -1;
		str_len++;
	}
	while (n > 0)
	{
		n /= 10;
		str_len++;
	}
	return (str_len);
}

char	*ft_itoa(int n)
{
	char		*alloc_str;
	int			str;
	long		nbr;

	nbr = n;
	str = ft_numb_str(nbr);
	alloc_str = malloc(sizeof(char ) * (str + 1));
	if (alloc_str == NULL)
		return (NULL);

	alloc_str[str--] = '\0';
	if (nbr == 0)
	{
		alloc_str[0] = '0';
		return  (alloc_str);
	}
	if (nbr < 0)
	{
		alloc_str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		alloc_str[str--] = nbr % 10 + '0';
		n /= 10;
	}
	return (alloc_str);
}
