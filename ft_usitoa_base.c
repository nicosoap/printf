/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usitoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 11:52:18 by opichou           #+#    #+#             */
/*   Updated: 2016/06/08 13:43:26 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char *b = "0123456789abcdef";

int			ft_shortlen_base(short int i, unsigned int base)
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

static char	*ft_usitoa_base_help(unsigned short int i, int size, char *dst, \
		unsigned int base)
{
	if (i >= base && size >= 0)
	{
		dst[size] = b[i % base];
		return (ft_usitoa_base_help(i / base, size - 1, dst, base));
	}
	dst[size] = b[i];
	return (dst);
}

char		*ft_sitoa_base(short int i, unsigned int base)
{
	char	*dst;
	int		size;

	if (i == 0)
		return (ft_strdup("0"));
	if (i < 0)
		size = 1 + ft_shortlen_base(-i, base);
	else
		size = ft_shortlen_base(i, base);
	if (!(dst = ft_strnew(size)))
		return (NULL);
	if (i < 0)
	{
		dst[0] = '-';
		return (ft_usitoa_base_help(i, size - 1, dst + 1, base));
	}
	else
		return (ft_usitoa_base_help(i, size - 1, dst, base));
}

char        *ft_usitoa_base(unsigned short int i, unsigned int base)
{
    char    *dst;
    int     size;

    if  (i == 0)
        return (ft_strdup("0"));
    size = ft_shortlen_base(i, base);
    if (!(dst = ft_strnew(size)))
        return (NULL);
    return (ft_usitoa_base_help(i, size - 1, dst, base));
}
