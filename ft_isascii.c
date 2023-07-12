#include "libft.h"

int ft_isascii(int c){
    if (c >= 0 && c <= 127){
        return 1;
    }
    else
        return 0;
}

/* int main(){
    printf("ft_isascii('a'): %d\n", ft_isascii('a'));
    printf("isascii('a'): %d\n", isascii('a'));

    printf("ft_isascii('4'): %d\n", ft_isascii('4'));
    printf("isascii('4'): %d\n", isascii('4'));

    printf("ft_isascii('!'): %d\n", ft_isascii('!'));
    printf("isascii('!'): %d\n", isascii('!'));
    return 0;
} */