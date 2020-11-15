#include "libft.h"

int		ft_is_separator(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

int		ft_get_words(char *str, char charset)
{
	int		i;
	int		nb;

	i = -1;
	nb = 0;
	while (str[++i])
		if (ft_is_separator(str[i], charset))
			nb++;
	return (nb + 2);
}

int		ft_fill_array(char *str, char ***res, int limit, char charset)
{
	char	*string;
	int		i;

	i = 0;
	if (!(string = malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (0);
	while (ft_is_separator(str[i], charset) == 0 && str[i] != '\0')
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	(*res)[limit] = string;
	return (i);
}

char	**ft_split(char *str, char c)
{
	char	**res;
	int		i;
	int		j;

	j = 0;
	i = -1;
	if (!str)
		return (NULL);
	if (!(res = malloc(sizeof(char *) * (ft_get_words(str, c) + 1))))
		return (NULL);
	while (str[++i] != '\0')
		if (!ft_is_separator(str[i], c))
			i += ft_fill_array(str + i, &res, j++, c);
	res[j] = 0;
	return (res);
}