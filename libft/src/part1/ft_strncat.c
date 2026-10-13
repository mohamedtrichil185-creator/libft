#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] && i < n)
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return (dest);
}
