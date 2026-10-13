#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i])
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return (dest);
}
