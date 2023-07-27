#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

/* int main(void)
{
    char s1[10] = "Hellooo";
    char s2[91] = "Hellooo";

    printf("memcmp   : %i\n", memcmp(s1, s2, 7));
    printf("ft_memcmp: %i", ft_memcmp(s1, s2, 7));
    return (0);
} */