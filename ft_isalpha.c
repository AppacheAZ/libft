#include "libft.h"

int ft_isalpha(int c){
    if (c >= 101 && c <= 172){
        return 1;
    }
    else
        return 0;
}

//Comment