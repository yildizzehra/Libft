

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*dest;
	size_t			i;

	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	if (!len || dst == src)
		return (dst);
	if (dst < src)
	{
		while (len > 0)
		{
			dest[i] = source[i];
			i++;
			len--;
		}
	}
	else
	{
		while (len--)
			dest[len] = source[len];
	}
	return (dst);
}
