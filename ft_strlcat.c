#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (++i < size && dest[i] != '\0')
		;
	if (i == size)
		return (i + (unsigned int)ft_strlen(src));
	j = -1;
	k = i;
	while (src[++j])
		if (j < size - 1 - i)
			dest[k++] = src[j];
	dest[k] = '\0';
	return (j + i);
}