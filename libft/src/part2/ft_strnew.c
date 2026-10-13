#include "libft.h"

char 	*ft_strnew(size_t size)
{
	char	*s;
	char	*p;

	s = (char *)malloc(size + 1);
	if (!s)
		return (NULL);
	p = s;
	while (size--)
		*s++ = 0;
	*s = '\0';
	return (p);
}

