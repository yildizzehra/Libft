

#include "libft.h"

size_t	ft_strlcpy(char	*dest, const char	*src, size_t sz)
{
	size_t	i;

	i = 0;
	if (!sz)
		return (ft_strlen(src));
	while (src[i] && i < sz - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
