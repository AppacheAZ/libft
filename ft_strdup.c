#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	n;

	n = ft_strlen(s);
	ptr = (char *)malloc(n + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, n + 1);
	return (ptr);
}

/*int main(void)
{
	char *s = "Hello";
	char *ptr = ft_strdup(s);
	char *ptr2 = strdup(s);

	printf("ft_strdup: %s\n", ptr);
	printf("strdup   : %s\n", ptr2);
	return (0);
}*/