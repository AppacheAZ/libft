#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!*str++)
			return (NULL);
	}
	return ((char *)str);
}

/*int main()
{
    char *str1 = "Hello World!";
    char *ptr1;
    char *ptr2;

    ptr1 = strchr(str1, 'W');
    ptr2 = ft_strchr(str1, 'W');
    printf("Strchr, the string after 'W' is   : %s\n", ptr1);
    printf("ft_strchr, the string after 'W' is: %s\n", ptr2);
    return (0);
}*/