/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 04:25:28 by opichou           #+#    #+#             */
/*   Updated: 2016/04/03 23:38:05 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libftprintf.h"

static char			*ft_itoa_helper(int n, int size, char *dst)
{
	if (n < 0)
	{
		dst[0] = '-';
		return (ft_itoa_helper(-n, size, dst));
	}
	if (n >= 10 && size >= 0)
	{
		dst[size] = (n % 10) + '0';
		return (ft_itoa_helper(n / 10, size - 1, dst));
	}
	dst[size] = n + '0';
	return (dst);
}

char				*ft_itoa(int n)
{
	char	*dst;
	int		size;

	if (n <= -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	size = ft_numlen(n);
	if ((dst = ft_strnew(size)) == NULL)
		return (NULL);
	return (ft_itoa_helper(n, size - 1, dst));
}
