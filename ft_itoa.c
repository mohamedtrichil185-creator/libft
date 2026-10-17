/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 08:00:51 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/16 18:37:34 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_size_of_number(int n)
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
