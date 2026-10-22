/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <mtraichl@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:24:09 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/22 09:24:10 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sep(char c, char sep)
{
	if (c == sep)
		return (1);
	return (0);
}

static int	count_word(char const *s, char c)
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

static int	count_char(char const *s, char c)
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

static void	copy_word(char *s, char const **as, char c)
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
	char		**p;
	size_t		i;
	size_t		n;

	if (!s)
		return (NULL);
	p = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!p)
		return (NULL);
	i = 0;
	n = (size_t)count_word(s, c);
	while (i < n)
	{
		p[i] = (char *)malloc(count_char(s, c) + 1);
		if (!p[i])
		{
			while (i > 0)
				free(p[--i]);
			free(p);
			return (NULL);
		}
		copy_word(p[i++], &s, c);
	}
	p[i] = NULL;
	return (p);
}
