#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/*int main(void)
{
    const char *s1 = "Hello";
    int value = 'l';
    void *result1 = memchr(s1, value, 4);
    void *result2 = ft_memchr(s1, value, 4);

    printf("memchr   : %s\n", result1);
    printf("ft_memchr: %s\n", result2);
    return (0);
}*/