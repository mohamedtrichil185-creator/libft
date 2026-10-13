#include <libft.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
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

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	while (*str)
		write(fd, str++, 1);
}

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

int	ft_atoi(char *str)
{
	int	i;
	int	signe;
	int	results;

	results = 0;
	signe = 1;
	i = 0;
	while((str[i]  == ' ' || (str[i] > 8 && str[i] < 14)))
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if (str[i] ==  '-')
			signe *= -1;
		i++;
	}
	while(str[i] && str[i] >= '0' && str[i] <= '9')
	{
		results = (results * 10) + (str[i] - '0');
		i++;
	}
	return (results * signe);
}

int	is_alpha(char c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}

int	is_uppercase(char c)
{
	if (!(c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}

int	is_lowercase(char c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

int	is_number(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

int	is_alphanumber(char c)
{
	if (is_alpha(c) || is_number(c))
		return (1);
	return (0);
}

int	str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(is_alpha(*str)))
			return (0);
		str++;
	}
	return (1);
}

int	str_is_number(char *str)
{
	while (*str)
	{
		if (!is_number(*str))
			return (0);
		str++;
	}
	return (1);
}

int	str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!is_uppercase(*str))
			return (0);
		str++;
	}
	return (1);
}

int	str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!is_lowercase(*str))
			return (0);
		str++;
	}
	return (1);
}

int	str_is_alphanumber(char *str)
{
	while (*str)
	{
		if (!is_alphanumber(*str))
			return (0);
		str++;
	}
	return (1);
}

char	to_uppercase(char c)
{
	return c - 32;
}

char	to_lowercase(char c)
{
	return c + 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] && !is_alpha(str[i]))
		i++;
	if (is_lowercase(str[i]))
		str[i] = to_uppercase(str[i]);
	i++;
	while (str[i])
	{
		if (is_lowercase(str[i]))
		{
			if (!is_alphanumber(str[i - 1]))
				str[i] = to_uppercase(str[i]);
		}

		else if (is_uppercase(str[i]))
		{
			if (!is_alpha(str[i - 1]))
				str[i] = to_lowercase(str[i]);
		}
		i++;
	}
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char *start;

	start = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);

	if (size > 0)
	{
		while (*src && i < size - 1)
			dest[i++] = *src++;
		dest[i] = '\0';
	}
	return (src_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = ft_strlen(dest);

	while(*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;
	unsigned int	dest_len_cpy;

	i = 0;
	dest_len_cpy = 0;
	dest_len = 0;
	src_len = ft_strlen(src);
	while (dest[dest_len] && size > dest_len)
		dest_len++;
	if (dest_len == size)
		return (src_len + dest_len);
	dest_len_cpy = dest_len;
	while (src[i] && dest_len < size - 1)
		dest[dest_len++] = src[i++];
	dest[dest_len] = '\0';
	return (dest_len_cpy + src_len);
}



int	is_sep(char c, char *sep)
{
	while (*sep)
	{
		if (*sep++ == c)
			return (1);
	}
	return (0);
}


int	count_word(char *str, char *sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(*str, sep))
			str++;
		if (*str)
		{
			count++;
			while (*str && !is_sep(*str, sep))
				str++;
		}
	}
	return (count);
}

int	count_char(char *str, char *sep)
{
	int	count;

	count = 0;
	while (*str && is_sep(*str, sep))
		str++;
	while (*str && !is_sep(*str, sep))
	{
		count++;
		str++;
	}
	return (count);
}

char	*cpy_word(char *arr, char **str, char *sep)
{
	char	*start;

	start = arr;
	while (**str && is_sep(**str, sep))
		(*str)++;
	while (**str && !is_sep(**str, sep))
	{
		*arr++ = **str;
		(*str)++;
	}
	*arr = '\0';
	return (start);
}

char	**ft_split(char *str, char *charset)
{
	char 	**arr;
	int	word_size;
	int	i;
	char	*tmp;
	int	len;

	tmp = str;
	i = 0;
	word_size = count_word(str, charset);
	arr = malloc(sizeof(char *) * word_size);
	if (!arr)
		return (NULL);
	while (i < word_size)
	{
		len = count_char(tmp, charset);
		arr[i] = malloc(sizeof(char) * len + 1);
		if (!arr[i])
		{
			while (i >= 0)
				free(arr[i--]);
			return (NULL);
		}
		cpy_word(arr[i], &tmp, charset);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	*ft_strdup(char *src)
{
	int	src_len;
	char	*arr;

	src_len = ft_strlen(src) + 1;
	arr = malloc(sizeof(char) * src_len);
	if (!arr)
		return (0);
	ft_strcpy(arr, src);
	return (arr);
}

int	check_baffer(int baffer)
{
	if (baffer <= 0)
		return (0);
	return (1);
}

int	read_positive_number(char *message)
{
	char	baffer[100];
	int	number;
	int	n;

	n = 0;
	number = 0;
	ft_putstr(message);
	n = read (0, baffer, sizeof(baffer) - 1);
	if (n > 0)
		baffer[n] = '\0';
	number = ft_atoi(baffer);
	if (!check_baffer(number))
	{
		system("clear");
		ft_putstr("please respect the message !! \n\n");
		return (read_positive_number(message));
	}
	return (number);
}

char	*read_string(char *message)
{
	char	*arr;
	char	c;
	int	i;
	char	*tmp;
	int	len;

	i = 0;
	len = 0;
	ft_putstr(message);
	arr = malloc(1);
	if (!arr)
		return (0);
	arr = '\0';
	tmp = arr;
	while (read (0, &c, 1) > 0 && c != '\n')
	{
		len += 2;
		tmp = realloc(tmp, len);
		if (!tmp)
			return (0);
		tmp[i] = c;
		i++;
	}
	tmp[i] = '\0';
	arr = tmp;
	return (arr);
}
