#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
	write (1, "\n", 1);
}
