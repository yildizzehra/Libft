

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = ft_strlen(s);
	result = (char *)s;
	while (i >= 0)
	{
		if (result[i] == (char)c)
		{
			return (&result[i]);
		}
		i--;
	}
	return (0);
}
