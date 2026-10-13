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

char	*ft_strdup(const char *s)
{
	size_t	src_len;
	char	*arr;

	src_len = 0;
	while (s[src_len])
		src_len++;
	src_len++;
	arr = (char *)malloc(sizeof(char) * src_len);
	if (!arr)
		return (0);
	arr = ft_strcpy(arr, s);
	return (arr);
}
