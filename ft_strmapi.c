#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str;
    unsigned int i;

    i = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!s || !f || !str)
        return (NULL);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

/*static char	ft_test(unsigned int i, char c)
{
	return (c - 32);
}

int main(void)
{
    char *str1 = "loquesea42menosesto";
    char *str2 = ft_strmapi(str1, ft_test);
    printf("ft_strmapi: %s\n", str2);
    free(str2);
    return (0);
}*/