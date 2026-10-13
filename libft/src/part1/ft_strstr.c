#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!to_find[0])
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] && to_find[j] == str[i + j])
				j++;
			if (!to_find[j])
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
