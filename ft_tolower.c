#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}

/*int main(void){
    char st1[10] = "HOLA";
    char st2[10] = "HOLA";
    char st1mod = tolower(st1[0]);
    char st2mod = ft_tolower(st2[0]);

    printf("Tolower letra original     : %c\n", st1[0]);
    printf("Tolower letra modificada   : %c\n\n", st1mod);
    printf("ft_tolower letra original  : %c\n", st2[0]);
    printf("ft_tolower letra modificada: %c\n", st2mod);
}*/