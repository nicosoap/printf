/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 01:55:28 by opichou           #+#    #+#             */
/*   Updated: 2016/01/02 12:07:50 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libftprintf.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*dest;

	if (s)
	{
		i = 0;
		dest = ft_strnew(len);
		if (dest != NULL)
		{
			while (i < (int)len && s[i + start])
			{
				dest[i] = s[i + start];
				i++;
			}
			dest[i] = '\0';
		}
		return (dest);
	}
	return (NULL);
}
