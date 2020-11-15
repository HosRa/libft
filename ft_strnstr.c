#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int len)
{
	int		i;
	int		k;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		k = 0;
		while (str[i + k] == to_find[k] && i + k < len)
			if (to_find[k++ + 1] == '\0')
				return ((char *)str + i);
		i++;
	}
	return (0);
}