

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*k;

	k = (char *)s;
	c = (char)c;
	i = 0;
	while (k[i])
	{
		if (k[i] == c)
			return (&k[i]);
		i++;
	}
	if (c == 0)
		return (&k[i]);
	return (0);
}
