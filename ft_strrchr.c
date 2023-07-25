#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*match;

	match = NULL;
	while (*str)
	{
		if (*str == (char)c)
			match = (char *)str;
		str++;
	}
	if ((char)c == '\0')
		match = (char *)str;
	return (match);
}

/*int main()
{
    char *str1 = "Hello W World!";
    char *ptr1;
    char *ptr2;

    ptr1 = strrchr(str1, 'W');
    ptr2 = ft_strrchr(str1, 'W');
    printf("Strchr, the string after 'W' is   : %s\n", ptr1);
    printf("ft_strrchr, the string after 'W' is: %s\n", ptr2);
    return (0);
}*/