#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	unsigned int		i;

	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n && p1[i] == p2[i])
		i++;
	if (n == i)
		return (0);
	return (p1[i] - p2[i]);
}
