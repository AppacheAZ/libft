#include "libft.h"

int ft_isalpha(int c){
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
        return 1;
    }
    else
        return 0;
}

/* int main(){
    printf("ft_isalpha('a'): %d\n", ft_isalpha('Z'));
    printf("isalpha('a'): %d\n", isalpha('Z'));

    printf("ft_isalpha('4'): %d\n", ft_isalpha('4'));
    printf("isalpha('4'): %d\n", isalpha('4'));
    return 0;
} */