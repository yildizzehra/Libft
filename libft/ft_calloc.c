
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	
	char		*ptr;

	
	ptr = (char *)malloc(sizeof(char) * (count * size));
	if (!ptr)
		return (NULL);
	return (ft_bzero (ptr, count * size), ptr);
}
