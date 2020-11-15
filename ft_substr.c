#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char             *res;
    unsigned int     i;

    if (!(res = malloc(sizeof(char) * (len + 1))) || !s)
        return (NULL);
    if (start >= ft_strlen(s))
        return (res);
    i = -1;
    while (++i < start && *s)
        ;
    i = 0;
    while (*s && i < len) 
        res[i++] = s[start++];
    res[i] = '\0';
    return (res);
}
