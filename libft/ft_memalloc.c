#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*p;
	char	*s;

	s = (char *)malloc(size);
	if (!s)
		return (NULL);
	p = s;
	while (size--)
		*p++ = 0;
	return (s);
}
