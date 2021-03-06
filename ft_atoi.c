/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 02:05:32 by thallard          #+#    #+#             */
/*   Updated: 2020/11/25 00:54:01 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f')
		return (0);
	else if (c == '\r')
		return (0);
	return (1);
}

static int			ft_str_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int					ft_atoi(const char *str)
{
	int		nb;
	int		signe;
	int		i;
	int		recur;

	recur = 0;
	i = 0;
	nb = 0;
	signe = 1;
	while (!ft_is_whitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			signe = -signe;
		recur++;
	}
	if (recur >= 2)
		return (0);
	while (ft_str_is_numeric(str[i]))
		nb = nb * 10 + (str[i++] - '0');
	return (nb * signe);
}
