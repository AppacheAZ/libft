#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char c;

    c = '0';
    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    else if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    if (n >= 0 && n <= 9)
    {
        c = n + '0';
        write(fd, &c, 1);
    }
    else
    {
        ft_putnbr_fd(n / 10, fd);
        c = (n % 10) + '0';
        write(fd, &c, 1);
    }
}

/*int main(void)
{
    int n = 2147483647;
    ft_putnbr_fd(n, 4);
    return (0);
}*/