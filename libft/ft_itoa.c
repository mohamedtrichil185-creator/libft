#include "libft.h"

int	get_size_of_number(int n)
{
	int	i;

	i = 0;
	if (n < 0)
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
	int	len;
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



/*int	main(void)
{
	int	nb1 = 0;
	int	nb2 = -2147483648;
	int	nb3 = 2147483647;

	printf("nb1: %d; length: %zu\n", nb1, ft_intlen(nb1));
	printf("nb2: %d; length: %zu\n", nb2, ft_intlen(nb2));
	printf("nb3: %d; length: %zu\n", nb3, ft_intlen(nb3));

	printf("string: %s\n",ft_itoa(nb1));
	printf("string: %s\n",ft_itoa(nb2));
	printf("string: %s\n",ft_itoa(nb3));
 }*/
