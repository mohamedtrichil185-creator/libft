#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char	*p;
	size_t	i;
	size_t	len_s;

	if (!s || !f)
		return (NULL);
	len_s = 0;
	while (s[len_s])
		len_s++;
	p = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
