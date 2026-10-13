#include "libft.h"

int	is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

int	count_word(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && is_sep(*s, c))
			s++;
		if (*s)
		{
			count++;
			while (*s && !is_sep(*s, c))
				s++;
		}
	}
	return (count);
}

int	count_char(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s && is_sep(*s, c))
		s++;
	while (*s && !is_sep(*s, c))
	{
		count++;
		s++;
	}
	return (count);
}

void	CopyWordFromArr(char *s, char const **as,char c)
{
	while (**as && is_sep(**as, c))
		(*as)++;
	while (**as && !is_sep(**as, c))
	{
		*s++ = **as;
		(*as)++;
	}
	*s = '\0';
}

char	**ft_split(char const *s, char c)
{
	size_t		word_len;
	size_t		char_len;
	char		**p;
	size_t		i;
	char const	*x;

	if (!s)
		return (NULL);
	x = s;
	char_len = 0;
	word_len = count_word(x, c);
	p = (char **)malloc(sizeof(char *) * (word_len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		char_len = count_char(x, c);
		p[i] = (char *)malloc(char_len + 1);
		if (!p[i])
		{
			while (i > 0)
			{
				i--;
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
		CopyWordFromArr(p[i] ,&x, c);
		i++;
	}
	p[i] = NULL;
	return (p);
}
