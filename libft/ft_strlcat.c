
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t sz)
{
	size_t	i;

	i = ft_strlen(dst) + ft_strlen(src);
	if (sz <= ft_strlen(dst))
		return (sz + ft_strlen(src));
	ft_strlcpy (dst + ft_strlen(dst), src, sz - ft_strlen(dst));
	return (i);
}
