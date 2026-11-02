/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <mtraichl@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:24:47 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/22 09:24:49 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	char	*start;

	if (!src)
		return (NULL);
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

	src_len = ft_strlen(s) + 1;
	arr = (char *)malloc(sizeof(char) * src_len);
	if (!arr)
		return (NULL);
	arr = ft_strcpy(arr, s);
	return (arr);
}
