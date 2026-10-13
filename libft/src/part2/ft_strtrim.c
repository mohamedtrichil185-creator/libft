#include "libft.h"

int	is_white(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*p;
	size_t	size;

	if (!s)
		return (NULL);
	i = 0;
	end = 0;
	start = 0;
	while (s[i] && is_white(s[i]))
		i++;
	start = i;
	if (!s[i])
	{
		p = (char *)malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	while (s[i])
		i++;
	i--;
	while (is_white(s[i]))
		i--;
	end = i + 1;
	size = end - start + 1;
	p = (char *)malloc(size);
	if (!p)
		return (NULL);
	i = 0;
	while (start < end && s[start])
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}
