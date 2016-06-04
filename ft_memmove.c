/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 20:12:13 by opichou           #+#    #+#             */
/*   Updated: 2016/01/02 12:14:00 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libftprintf.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*srcbis;
	unsigned char		*dstbis;

	srcbis = (unsigned char *)src;
	dstbis = (unsigned char *)dst;
	if (len && dst == src)
		return (dst);
	if (dst > src)
	{
		srcbis += len - 1;
		dstbis += len - 1;
		while (len--)
			*dstbis-- = *srcbis--;
	}
	else
	{
		while (len--)
			*dstbis++ = *srcbis++;
	}
	return (dst);
}
