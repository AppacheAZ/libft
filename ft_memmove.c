#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len){
    size_t i;
    char *d;
    char *s;
    i = 0;
    d = (char *)dst;
    s = (char *)src;

    if(dst == src)
    {
        return (dst);
    }
    else if(dst < src)
    {
        while(i < len){
            d[i] = s[i];
            i ++;
        }
    }
    else
    {
        while(len > 0){
        d[len - 1] = s[len - 1];
        len --;
    }
    }
    return (dst);
}

/* int main(){
    char ex1[100] = "Example of memmove, mas texto a ver si hay cambios de algo weeeeee";
    char ex2[100] = "Example of memmove, mas texto a ver si hay cambios de algo weeeeee";
    
    ft_memmove(ex1 + 10, ex1, 10);
    memmove(ex2 + 10, ex2, 10);

    printf("ft_memmove: %p | ex1: %s\n", ex1, ex1);
    printf("memmove   : %p | ex2: %s", ex2, ex2);

    return 0;
} */