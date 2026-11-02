/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <mtraichl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:15:13 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/27 08:36:00 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size_of_number(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;
	long	nb;

	nb = n;
	len = get_size_of_number(n);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	if (nb < 0)
	{
		nb = -nb;
		p[0] = '-';
	}
	p[len--] = '\0';
	if (nb == 0)
		p[0] = '0';
	while (nb && len >= 0)
	{
		p[len] = ((nb % 10) + 48);
		nb /= 10;
		len--;
	}
	return (p);
}
