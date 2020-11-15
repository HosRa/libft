#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	char	*str;

	str = (char *)string;
	while (*str != searchedChar)
		if (*str++ == '\0')
			return (NULL);
	return (str);
}