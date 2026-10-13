#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	i;
	size_t	len_s;

	len_s = 0;
	if (!s || !f)
		return (NULL);
	while (s[len_s])
		len_s++;
	new = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
