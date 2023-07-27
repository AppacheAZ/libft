#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	i = 0;
	while (big[i] && i + little_len <= len)
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

/* int main(void)
{
	char *big = "4Where42Where";
	char *little = "42";

	char *result = ft_strnstr(big, little, 10);

	// printf("strnstr   : %s\n", strnstr(big, little, 10));
	printf("ft_strnstr: %s\n", result);
	return 0;
} */