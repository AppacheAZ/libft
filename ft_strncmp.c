#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n){
    size_t i;

    i = 0;
    while (i < n && s1[i] && s2[i] && s1[i] == s2[i]){
        i++;
    }
    if (i == n){
        return (0);
    }
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void)
{
    const char *s1 = "Hello";
    const char *s2 = "Hllo 42";

    int result1 = strncmp(s1, s2, 4);
    int result2 = ft_strncmp(s1, s2, 4);

    printf("strncmp   : %d\n", result1);
    printf("ft_strncmp: %d\n", result2);
    return (0);
}*/

