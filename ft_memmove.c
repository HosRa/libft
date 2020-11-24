/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thallard <thallard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 15:53:44 by thallard          #+#    #+#             */
/*   Updated: 2020/11/23 15:53:45 by thallard         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*s;
	unsigned char			*d;
	size_t					i;

	i = 0;
	if (!(dest) && !(src))
		return (NULL);
	s = (const unsigned char*)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		while (n--)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
