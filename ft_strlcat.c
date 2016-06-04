/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:23:00 by opichou           #+#    #+#             */
/*   Updated: 2015/12/30 20:25:20 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libftprintf.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;

	i = ft_strlen(dst);
	if (size < i)
		return (size + ft_strlen(src));
	while (i < size - 1 && *src != '\0')
	{
		dst[i] = *src;
		++i;
		src++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
