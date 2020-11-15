#include "libft.h"

void    ft_bzero(void *pointer, int size)
{
    int     i;

    i = -1;
    if (size == 0)
        return ;
    while (++i < size)
        ((char *)pointer)[i] = '\0';
}
