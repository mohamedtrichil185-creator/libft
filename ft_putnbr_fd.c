/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtraichl <mtraichl@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:23:26 by mtraichl          #+#    #+#             */
/*   Updated: 2026/10/22 09:23:29 by mtraichl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int number, int fd)
{
	if (fd < 0)
		return ;
	if (number == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (number < 0)
	{
		write(fd, "-", 1);
		number *= -1;
	}
	if (number > 9)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd((number % 10) + '0', fd);
}
