#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*p1;

	p = (unsigned char *)dest;
	p1 = (const unsigned char *)src;
	while (n--)
		*p++ = *p1++;
	return (dest);
}
