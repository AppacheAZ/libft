#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len){
    size_t i;
    unsigned char *d;
    unsigned char *s;
    i = 0;
    d = (unsigned char *)dst;
    s = (unsigned char *)src;

    if(dst == src)
    {
        return (dst);
    }
    if(src < dst)
    {
        while(len--){
            d[len] = s[len];
        }
    }
    else
    {
        while(len--){
        d[i] = s[i];
        i ++;
    }
    }
    return (dst);
}