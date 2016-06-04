/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:29:48 by opichou           #+#    #+#             */
/*   Updated: 2016/01/06 23:01:27 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (((char *)src)[i] != c && i != (int)n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	if (((char *)src)[i] == c)
	{
		((char *)dst)[i] = ((char *)src)[i];
		return (dst + i + 1);
	}
	else
	{
		return (NULL);
	}
}
