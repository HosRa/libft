#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*str;
	long	i;

	str = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (src[++i])
		str[i] = src[i];
	str[i] = '\0';
	return (str);
}