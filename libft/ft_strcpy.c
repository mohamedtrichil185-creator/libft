#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*start;

	start = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (start);
}
