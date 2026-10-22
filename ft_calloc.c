/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <mtraichl@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:12:33 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/22 09:12:35 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*This tells us that the largest safe number of elements max / nmemb*/
/*i meant nmemb > SIZE_MAX / size */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*s;
	unsigned char	*p;
	size_t			total_bytes;
	size_t			max;

	max = (size_t) - 1;
	if (!nmemb || !size)
	{
		s = (void *)malloc(1);
		if (!s)
			return (NULL);
		return (s);
	}
	if (nmemb > max / size)
		return (NULL);
	total_bytes = size * nmemb;
	s = (void *)malloc(total_bytes);
	if (!s)
		return (NULL);
	p = (unsigned char *)s;
	while (total_bytes--)
		*p++ = 0;
	return (s);
}
