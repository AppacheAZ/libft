#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		aux;

	i = 0;
	aux = dstsize - 1;
	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize <= ft_strlen(src))
	{
		while (aux--)
		{
			dst[i] = src[i];
			i ++;
		}
	}
	else if (dstsize > ft_strlen(src))
	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i ++;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* int main(){
    char ex1d[15] = "klk tu quiereh";
    char ex1s[50] = "puede ser que entre";
    char ex2d[15] = "klk tu quiereh";
    char ex2s[50] = "puede ser que entre";
    unsigned long funcreturn1;
    unsigned long funcreturn2;

    printf("strlcpy string original  : %s\n", ex1d);
    funcreturn1 = strlcpy(ex1d, ex1s, 15);
    printf("strlcpy string modificado: %s | ex1s: %lu\n\n", ex1d, funcreturn1);

    printf("ft_strlcpy str original  : %s\n", ex2d);
    funcreturn2 = strlcpy(ex2d, ex2s, 15);
    printf("ft_strlcpy str modificado: %s | ex1s: %lu", ex2d, funcreturn2);
    return 0;
} */