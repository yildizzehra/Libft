

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;
	int		k;

	i = 0;
	k = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (k + 1));
	if (!str)
		return (NULL);
	while (i < k)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
