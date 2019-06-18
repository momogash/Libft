/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:51:53 by momogash          #+#    #+#             */
/*   Updated: 2019/06/18 16:27:47 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			if (s[i] == c)
				return ((char *)s + i);
			i++;
		}
		if (!c && s[i] == '\0')
			return ((char *)s + i);
		return (NULL);
	}
	return (NULL);
}
