/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <mtraichl@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:27:59 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/22 09:28:01 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

/*get the bonds of the string*/

static void	g(char const *s, char const *set, size_t *start, size_t *end)
{
	*start = 0;
	while (s[*start] && is_inset(s[*start], set))
		(*start)++;
	*end = ft_strlen(s);
	while (*end > *start && is_inset(s[*end - 1], set))
		(*end)--;
}

static void	fill_string(size_t start, size_t end, char const *src, char *dst)
{
	size_t	i;

	i = 0;
	while (start < end)
		dst[i++] = src[start++];
	dst[i] = '\0';
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;
	char	*p;

	if (!s || !set)
		return (NULL);
	g(s, set, &start, &end);
	p = (char *)malloc(end - start + 1);
	if (!p)
		return (NULL);
	fill_string(start, end, s, p);
	return (p);
}
