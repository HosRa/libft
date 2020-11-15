#include "libft.h"

int			ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f')
		return (0);
	else if (c == '\r')
		return (0);
	return (1);
}

int			ft_str_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int			ft_atoi(const char *str)
{
	int		nb;
	int		signe;
	int		i;

	i = 0;
	nb = 0;
	signe = 1;
	while (!ft_is_whitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			signe = -signe;
	while (ft_str_is_numeric(str[i]))
		nb = nb * 10 + (str[i++] - '0');
	if (i > 20)
		return ((signe < 0) ? 0 : - 1);
	return (signe * nb);
}

