#include "libft.h"

int   ft_memcmp(const void *dest, const void *source, size_t len)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	dst = (unsigned char *)dest;
	src = (unsigned char *)source;
	i = -1;
	while (++i < len)
		if (dst[i] != src[i])
			return (dst[i] - src[i]);
	return (0);
}
