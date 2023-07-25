#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}

/*int main(void){
    char st1[10] = "hola";
    char st2[10] = "hola";
    char st1mod = toupper(st1[0]);
    char st2mod = ft_toupper(st2[0]);

    printf("Toupper letra original     : %c\n", st1[0]);
    printf("Toupper letra modificada   : %c\n\n", st1mod);
    printf("ft_toupper letra original  : %c\n", st2[0]);
    printf("ft_toupper letra modificada: %c\n", st2mod);
}*/