#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*str;

	i = 0;
	j = 0;
	size = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (size > i && ft_strchr(set, s1[size - 1]))
		size--;
	str = (char *)malloc(sizeof(char) * (size - i + 1));
	if (!str || !set || !s1)
		return (NULL);
	while (i < size)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*int main(void)
{
    char *str1 = "loquesea42menosesto";
    char *str2 = "loqueseamenosesto";
    char *str3 = ft_strtrim(str1, str2);
    printf("%s\n", str3);
    free(str3);
    return (0);
}*/