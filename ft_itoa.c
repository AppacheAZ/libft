#include "libft.h"

int	ft_size(int c)
{
	int	size;
	int	n;

	size = 0;
	if (c < 0)
	{
		if (c == -2147483648)
			return (11);
		c = -c;
		size += 1;
	}
	n = c;
	if (n == 0)
		size += 1;
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static int	ft_mod(int c)
{
	int	mod;
	int	len;

	if (c == 0)
		return (1);
	len = ft_size(c);
	if (c < 0)
		len -= 1;
	mod = 1;
	while (--len)
		mod *= 10;
	return (mod);
}

char	*ft_itoa(int n)
{
	size_t		mod;
	char		*str;
	int			i;
	long int	nb;

	i = 0;
	nb = (long int)n;
	mod = ft_mod(n);
	str = (char *)malloc(sizeof(char) * (ft_size(n) + 1));
	if (!str)
		return (NULL);
	else if (n < 0)
	{
		nb = -nb;
		str[i++] = '-';
	}
	while (mod > 0)
	{
		str[i++] = (nb / mod) + '0';
		nb %= mod;
		mod /= 10;
	}
	str[i] = '\0';
	return (str);
}

/*int main(void)
{
	int n = 1236;
	char *str = ft_itoa(-123);
	char str2[20];

	printf("ft_itoa: %s\n", str);
	sprintf(str2, "%i", n);
	printf("itoa   : %s\n", str2);
	printf("size   : %i\n", ft_size(n));
	printf("mod    : %i\n", ft_mod(n));
	free(str);
	return (0);
}*/