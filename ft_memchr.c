#include "libft.h"

void    *ft_memchr(const void *dest, int character, size_t len)
{
    char	*str;
    size_t  i;

    i = -1;
	str = (char *)dest;
	while (*str != (char)character && ++i <= len)
		if (*str++ == '\0')
			return (NULL);
    if (*str == (char)character)
        return (str);
	return (NULL);
}