#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	if (dst == src)
		return (dst);
	else if (dst < src)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len --;
		}
	}
	return (dst);
}

/* int main(){
    char ex1[100] = "Example of memmove, mas";
    char ex2[100] = "Example of memmove, mas";
    
    ft_memmove(ex1 + 10, ex1, 10);
    memmove(ex2 + 10, ex2, 10);

    printf("ft_memmove: %p | ex1: %s\n", ex1, ex1);
    printf("memmove   : %p | ex2: %s", ex2, ex2);

    return 0;
} */