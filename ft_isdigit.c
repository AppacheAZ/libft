#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* int main(){
    printf("ft_isdigit('a'): %d\n", ft_isdigit('a'));
    printf("isdigit('a'): %d\n", isdigit('a'));

    printf("ft_isdigit('4'): %d\n", ft_isdigit('4'));
    printf("isdigit('4'): %d\n", isdigit('4'));
    return 0;
} */