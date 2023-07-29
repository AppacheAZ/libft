#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	n;
	int		i;

	n = ft_strlen(s);
	i = 0;
	while (n--)
		write(fd, &s[i++], 1);
}

/*int main(void)
{
    char *c = "aloc";
    ft_putstr_fd(c, 1);
    return (0);
}*/