#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long int	temp;

	temp = n;
	if (temp < 0)
	{
		temp = -temp;
		ft_putchar_fd('-', fd);
	}
	if (temp > 9)
	{
		ft_putnbr_fd(temp / 10, fd);
		ft_putnbr_fd(temp % 10, fd);
	}
	else
		ft_putchar_fd(temp + '0', fd);
}
