#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	size;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	if (!str)
		return (NULL);
	while (*s1)
	{
		str[i++] = *s1;
		++s1;
	}
	while (*s2)
	{
		str[i++] = *s2;
		++s2;
	}
	str[i] = '\0';
	return (str);
}

/*int main(void)
{
    char *str1 = "Cadena1";
    char *str2 = "Cadena2";
    char *str3 = ft_strjoin(str1, str2);
    printf("%s\n", str3);
    free(str3);
    return (0);
}*/