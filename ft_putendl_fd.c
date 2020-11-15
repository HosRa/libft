#include "libft.h"

void ft_putendl_fd(const char *s, int fd)
{
    if (!s)
    {
         write(fd, "\n", 1);
         return ;
    }
    while (*s)
        write(fd, s++, 1);
    write(fd, "\n", 1);
}