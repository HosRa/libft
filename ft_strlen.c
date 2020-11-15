#include "libft.h"

unsigned int     ft_strlen(const char *str)
{
    int     i;
    
    if (str[0] == '\0')
        return (0);
    i = 0;
    while (str[i])
        i++;
    return (i);
}