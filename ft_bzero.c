#include "libft.h"

void ft_bzero(void *s, size_t n){
    size_t i;
    unsigned char * c;

    c = (unsigned char * )s;

    i = 0;

    while(i < n){
        c[i] = '\0';
        i ++;
    }
}

/* int main(){
    char ex[100] = "Example of bzero, mas texto a ver si hay cambios de algo weeeeee";
    char ex2[100] = "Example of bzero, mas texto a ver si hay cambios de algo weeeeee";
    
    ft_bzero(ex, 1);
    bzero(ex2, 1);

    printf("ft_bzero: %p | ex: %s\n", ex, ex);
    printf("bzero: %p | ex2: %s", ex2, ex2);

    return 0;
} */