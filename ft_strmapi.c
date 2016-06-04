/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 01:02:24 by opichou           #+#    #+#             */
/*   Updated: 2015/12/30 20:26:09 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (s && *f)
	{
		ptr = ft_strdup(s);
		if (ptr)
		{
			i = 0;
			while (i < (unsigned int)ft_strlen(s))
			{
				ptr[i] = f(i, s[i]);
				i++;
			}
			return (ptr);
		}
	}
	return (0);
}
