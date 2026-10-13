#include "libft.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int number)
{
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}

	if (number < 0)
	{
		write(1, "-", 1);
		number *= -1;
	}

	if (number > 9)
		ft_putnbr(number / 10);
	ft_putchar((number % 10) + '0');
}
