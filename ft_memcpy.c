/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 15:15:17 by momogash          #+#    #+#             */
/*   Updated: 2019/06/18 11:53:17 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	d = (char *)dst;
	s = (char *)src;
	if (n == 0 || s == d)
		return (d);
	i = 0;
	if (dst && src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}
