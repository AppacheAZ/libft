#include "libft.h"

void	*ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	if (!s || !f || !str)
		return (NULL);
	while (str[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	return (s);
}

/*void	ft_test(unsigned int i, char *c)
{
	c = c - 32;
}

int main(void)
{
    char *str1 = "loquesea42menosesto";
    char *str2 = ft_striteri(str1, ft_test);
    printf("ft_strmapi: %s\n", str2);
    return (0);
}*/