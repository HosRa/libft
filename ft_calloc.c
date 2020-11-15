#include "libft.h"

void    *ft_calloc(size_t len, size_t character)
{
    void    *ret;

    if (!(ret = malloc(len * character)))
        return (NULL);
    if (ret)  
        ft_memset(ret, 0, len * character);
    return (ret);

}