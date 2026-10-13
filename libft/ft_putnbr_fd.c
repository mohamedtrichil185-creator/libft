#include "libft.h"

void	ft_putnbr_fd(int number, int fd)
{
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
