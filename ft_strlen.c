#include "libft.h"

unsigned long ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

/* int main(){
    char *str = "Pruebita de strlen :)";
    printf("ft_strlen: %lu\n", ft_strlen(str));
    printf("strlen: %lu\n", strlen(str));
    return 0;
} */