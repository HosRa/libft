/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:41:33 by thallard          #+#    #+#             */
/*   Updated: 2020/11/24 12:23:12 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_get_words(char *str, char c)
{
	int		i;
	int		nb;

	nb = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			nb++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (nb);
}

char		*ft_create_word(char *str, char c)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!(word = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char		**ft_split(char *str, char c)
{
	int		i;
	char	**res;
	int		j;

	if (!(res = malloc(sizeof(char *) * (ft_get_words(str, c) + 1))) || !str)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			res[j++] = ft_create_word(&str[i], c);
			while (str[i] && str[i] != c)
				i++;
		}
	}
	res[j] = 0;
	return (res);
}
