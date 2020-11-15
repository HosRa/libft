#include "libft.h"

void    *ft_memset(void *pointer, int value, int size)
{
    int     i;

    i = -1;
    while (++i < size)
        ((char *) pointer)[i] = value;
    return (pointer);
}