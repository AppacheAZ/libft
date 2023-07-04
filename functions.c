#include "libft.h"
#include <unistd.h>

int ft_isalpha(int c){
    if (c >= 101 && c <= 172){
        return 1;
    }
    else
        return 0;

}

int ft_isdigit(int c){
    if (c >= 48 && c <= 57){
        return 1;
    }
    else
        return 0;
}