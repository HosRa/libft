/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:38:17 by thallard          #+#    #+#             */
/*   Updated: 2020/11/24 15:49:50 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	int			size;
	char		*res;

	if (!str || !set)
		return (NULL);
	while (*str && ft_strchr(set, *str))
		str++;
	size = ft_strlen(str);
	while (size && ft_strchr(set, str[size]))
		size--;
	res = ft_substr((char *)str, 0, size + 1);
	if (!res)
		return (NULL);
	if (res[0] == '\0')
		return (ft_strdup(""));
	return (res);
}
