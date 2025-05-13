

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	c;

	if (!s1 || !set)
		return (0);
	c = 0;
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	c = ft_strlen(s1);
	while (c && ft_strchr(set, s1[c]))
		c--;
	return (ft_substr(s1, 0, c + 1));
}
