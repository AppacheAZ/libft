#include "libft.h"

void *ft_memset(void *b, int c, size_t len){
    unsigned long i;
    i = 0;

    char *ptrchar;

    ptrchar = (char *)b;

    while(i != len){
        ptrchar[i] = c;
        i ++;
    }
    return(b);
}

/* int main(){
    char str[50];
    char str2[50];

    strcpy(str, "Example of memset");
    strcpy(str2, "Example of memset");
    puts(str);

    printf("ft_memset:\n");
    ft_memset(str, '$', 7);
    puts(str);

    printf("\nmemset:\n");
    memset(str2, '$', 7);
    puts(str2);

    return 0;
} */