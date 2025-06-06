

#include "libft.h"

int	ft_num(long int nb, int *check)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		*check += 1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;
	int		ctr;

	num = n;
	ctr = 0;
	len = ft_num(num, &ctr);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (ctr)
	{
		str[0] = '-';
		num *= -1;
	}
	while (--len >= ctr)
	{
		str[len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
