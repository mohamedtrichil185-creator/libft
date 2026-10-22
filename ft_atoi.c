/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <mtraichl@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:11:06 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/22 09:11:09 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_result(unsigned long long re, int sign)
{
	if (sign == -1 && re == 9223372036854775807)
		return (1);
	return ((int)(re * sign));
}

static int	skip_and_get_sign(int *sign, const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int							i;
	int							sign;
	unsigned long long			result;

	sign = 1;
	result = 0;
	i = skip_and_get_sign(&sign, str);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result >= 9223372036854775807)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (check_result(result, sign));
}
