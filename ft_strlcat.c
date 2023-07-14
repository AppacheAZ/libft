#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize){
    size_t i;
    size_t aux;
    size_t aux2;
    i = 0;
    aux = dstsize - ft_strlen(dst) - 1;
    aux2 = ft_strlen(dst);
    if (dstsize == 0)
        return ft_strlen(dst);
    else {
        for (i = 0; i < aux && src[i] != '\0'; i++)
            dst[aux2 + i] = src[i];
        dst[aux2 + i] = '\0';
    }
    return aux2 + ft_strlen(src);
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