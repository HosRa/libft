/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:34:52 by thallard          #+#    #+#             */
/*   Updated: 2020/11/23 16:36:11 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*res;
	unsigned int		i;

	if (start >= ft_strlen(s))
		return ("");
	if (!(res = malloc(sizeof(char) * (len + 1))) || !s)
		return (NULL);
	i = -1;
	while (++i < start && *s)
		;
	i = 0;
	while (*s && i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
