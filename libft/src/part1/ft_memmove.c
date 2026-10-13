#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*p1;

	p = (unsigned char *)dest;
	p1 = (const unsigned char *)src;
	if (p > p1)
	{
		while (n--)
			*(p + n) = *(p1 + n);
	}
	else
	{
		while (n--)
			*p++ = *p1++;
	}
	return (dest);
}
