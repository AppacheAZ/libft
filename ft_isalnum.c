#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

/* int main(){
    printf("ft_isalnum('a'): %d\n", ft_isalnum('a'));
    printf("isalnum('a'): %d\n", isalnum('a'));

    printf("ft_isalnum('4'): %d\n", ft_isalnum('4'));
    printf("isalnum('4'): %d\n", isalnum('4'));

    printf("ft_isalnum('!'): %d\n", ft_isalnum('!'));
    printf("isalnum('!'): %d\n", isalnum('!'));
    return 0;
}  */