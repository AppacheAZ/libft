#include "libft.h"

int	ft_wordlen(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_free(char **result, int co)
{
	int	f;

	f = 0;
	while (f < co)
	{
		free(result[f]);
		f++;
	}
	free(result);
	return (NULL);
}

int	ft_words(char const *s, char c)
{
	int	co;
	int	i;

	co = 0;
	i = 0;
	if (s[i] != c && s[i])
		co++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			co++;
		i++;
	}
	return (co);
}

char	**ft_copy(char **result, char const *s, char c)
{
	int	i;
	int	j;
	int	co;

	i = 0;
	co = 0;
	while (s[i] && co < ft_words(s, c))
	{
		j = 0;
		while (s[i] == c)
			i++;
		result[co] = (char *)malloc(sizeof(char) * (ft_wordlen(s, c, i) + 1));
		if (!result[co])
			return (ft_free(result, co));
		while (s[i] != c && s[i])
			result[co][j++] = s[i++];
		result[co][j++] = '\0';
		co++;
	}
	result[co] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s != NULL)
		result = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1));
	if (!s || (s && result == NULL))
		return (NULL);
	return (ft_copy(result, s, c));
}

/*int main() {
    const char *s = "Hola,42,como,estas,?";
    char **result = ft_split(s, ',');
	int i = -1;
    
    if (result) 
	{
        while (s[++i]) 
		{
            printf("Subcadena %d: %s\n", i, result[i]);
            free(result[i]); // Liberar la memoria de cada subcadena
        }
        free(result); // Liberar la memoria del arreglo de punteros
    }
    return 0;
}*/
