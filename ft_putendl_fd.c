#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*int main(void)
{
    char *c = "aloc";
    ft_putendl_fd(c, 1);
    return (0);
}*/