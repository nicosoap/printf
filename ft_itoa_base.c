/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 10:07:56 by opichou           #+#    #+#             */
/*   Updated: 2016/06/01 21:59:36 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char *b = "0123456789abcdef";

int			ft_numlen_base(long long unsigned int i, unsigned int base)
{
	int		len;

	len = 0;
	while (i)
	{
		i = i / base;
		len++;
	}
	return (len);
}

static char	*ft_itoa_base_help(long long unsigned int i, int size, char *dst, \
		unsigned int base)
{
	if (i >= base && size >= 0)
	{
		dst[size] = b[i % base];
		return (ft_itoa_base_help(i / base, size - 1, dst, base));
	}
	dst[size] = b[i];
	return (dst);
}

char		*ft_itoa_base(long long int i, unsigned int base)
{
	char	*dst;
	int		size;

	if (i == 0)
		return (ft_strdup("0"));
	if (i < 0)
		size = 1 + ft_numlen_base(-i, base);
	else
		size = ft_numlen_base(i, base);
	if (!(dst = ft_strnew(size)))
		return (NULL);
	if (i < 0)
	{
		dst[0] = '-';
		return (ft_itoa_base_help(i, size - 12, dst + 1, base));
	}
	else
		return (ft_itoa_base_help(i, size - 1, dst, base));
}

char        *ft_uitoa_base(long long unsigned int i, unsigned int base)
{
    char    *dst;
    int     size;

    if  (i == 0)
        return (ft_strdup("0"));
    size = ft_numlen_base(i, base);
    if (!(dst = ft_strnew(size)))
        return (NULL);
    return (ft_itoa_base_help(i, size - 1, dst, base));
}
