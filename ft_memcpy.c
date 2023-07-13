#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n){
    size_t i;
    unsigned char * b;
    unsigned char * a;

    if(dst == src)
        return (NULL);
    i = 0;
    b = (unsigned char *)dst;
    a = (unsigned char *)src;
    while(i < n){
        b[i] = a[i];
        i ++;
    }
    return (b);
}

/* int main(){
    char ex1a[100] = "klk tu quien ereh";
    char ex1b[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaa";

    char ex2a[100] = "klk tu quien ereh";
    char ex2b[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaa";

    ft_memcpy(ex1b, ex1a, 12);
    memcpy(ex2b, ex2a, 12);

    printf("ft_memcpy: %s\n", ex1b);
    printf("memcpy   : %s\n", ex2b);
    return 0;
} */