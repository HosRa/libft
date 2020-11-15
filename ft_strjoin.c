#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *res;
    int     i;

    if (!s1 || !s2)
        return (NULL);
    i = -1;
    if (!(res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (NULL);
    while (*s1)
        res[++i] = *s1++;
    while (*s2)
        res[++i] = *s2++;
    res[i + 1] = '\0';
    return (res);
}