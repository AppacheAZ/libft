#include "libft.h"

int ft_isprint(int c){
    if (c >= 32 && c <= 126){
        return 1;
    }
    else
        return 0;
}

/* int main(){
    printf("ft_isprint('a'): %d\n", ft_isprint('a'));
    printf("isprint('a'): %d\n\n", isprint('a'));

    printf("ft_isprint('4'): %d\n", ft_isprint('4'));
    printf("isprint('4'): %d\n\n", isprint('4'));

    printf("ft_isprint('!'): %d\n", ft_isprint('!'));
    printf("isprint('!'): %d\n\n", isprint('!'));

    printf("ft_isprint(127): %d\n", ft_isprint(127));
    printf("isprint(127): %d\n", isprint(127));
    return 0;
} */