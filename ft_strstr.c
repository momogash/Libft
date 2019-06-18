/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:23:49 by momogash          #+#    #+#             */
/*   Updated: 2019/06/18 16:30:42 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (s1 && s2)
	{
		if (s1[0] == '\0' && s2[0] == '\0')
			return ((char *)s1);
		while (s1[i] != '\0')
		{
			j = 0;
			while (s2[j] != '\0' && s1[i + j] == s2[j])
				j++;
			if (s2[j] == '\0')
				return ((char *)s1 + i);
			i++;
		}
		return (NULL);
	}
	return (NULL);
}
