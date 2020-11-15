#include "libft.h"

void    *ft_memcpy(void *dest, void *src, size_t len)
{
    size_t      i;

    i = -1;
    if (!(dest) && !(src))
         return (dest);
    while (++i < len)
        ((char *)dest)[i] = ((char *)src)[i];
    return (dest);
}