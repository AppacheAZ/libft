#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		clip;
	int		return_value;
	int		i;

	clip = 1;
	return_value = 0;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-') 
	{
		clip = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9') 
	{
		return_value = return_value * 10 + (nptr[i] - '0');
		i++;
	}
	return (return_value * clip);
}

/* int main(void)
{
    const char *string = "-2147483649";

    int result1 = atoi(string);
    int result2 = ft_atoi(string);

    printf("atoi   : %d\n", result1);
    printf("ft_atoi: %d\n", result2);
    printf("ejemplo powwer 10^1: %d\n", powwer(10, 1));
    return 0;
} */