#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*s;
	size_t		ret;
	size_t		dst_len;
	size_t		i;

	s = (char *)src;
	dst_len = ft_strlen(dst);
	ret = 0;
	i = 0;
	if (dstsize > dst_len)
		ret = ft_strlen(s) + dst_len;
	else
		ret = ft_strlen(s) + dstsize;
	while (s[i] && (dst_len + 1) < dstsize)
	{
		dst[dst_len] = s[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (ret);
}

/* int main(){
    char ex1d[50] = "Fiestas de burgos";
    char ex1s[50] = "Y de mi pueblo";
    char ex2d[50] = "Fiestas de burgos";
    char ex2s[50] = "Y de mi pueblo";
    printf("strlcat:    %s | ex1d: %lu\n", ex1d, strlcat(ex1d, ex1s, 50));
    printf("ft_strlcat: %s | ex2d: %lu", ex2d, ft_strlcat(ex2d, ex2s, 50));
    return 0;
} */