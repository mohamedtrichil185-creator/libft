#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*p;
	const unsigned char	*p1;

	p = (unsigned char *)dest;
	p1 = (const unsigned char *)src;
	while (n--)
	{
		*p = *p1++;
		if (*p++ == (unsigned char)c)
			return (p);
	}
	return (NULL);
}
