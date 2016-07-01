/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/12 10:07:56 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 18:50:55 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static char *b = "0123456789abcdef";

int			ft_numlen_base(long long unsigned int i, unsigned int base)
{
	ft_put_com("entering ft_numlen_base with int", ft_itoa(i));
	int		len;

	len = 0;
	while (i)
	{
		i = i / base;
		len++;
	}
	ft_put_com("exiting ft_numlen_base with return value", ft_itoa(len));
	return (len);
}

static char	*ft_itoa_base_help(long long unsigned int i, int size, char *dst, \
		unsigned int base)
{
	ft_put_com("entering ft_itoa_base_help with int", ft_itoa(i));
	if (i >= base && size >= 0)
	{
		dst[size] = b[i % base];
		ft_put_com("exiting ft_itoa_base_help with return value", ft_itoa_base_help(i / base, size - 1, dst, base));
		return (ft_itoa_base_help(i / base, size - 1, dst, base));
	}
	dst[size] = b[i];
	ft_put_com("exiting ft_itoa_base_help with return value", dst);
	return (dst);
}

char		*ft_itoa_base(long long int i, unsigned int base)
{
	ft_put_com("entering ft_itoa_base with int", ft_itoa(i));
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
		ft_put_com("exiting ft_itoa_base with return value", ft_itoa_base_help(i, size - 12, dst + 1, base));
		return (ft_itoa_base_help(i, size - 12, dst + 1, base));
	}
	else
	{
		ft_put_com("exiting ft_itoa_base with return value", ft_itoa_base_help(i, size - 1, dst, base));
		return (ft_itoa_base_help(i, size - 1, dst, base));
	}
}

char        *ft_uitoa_base(long long unsigned int i, unsigned int base)
{
	ft_put_com("entering ft_uitoa_base with unsigned int", ft_itoa(i));
    char    *dst;
    int     size;

    if  (i == 0)
        return (ft_strdup("0"));
    size = ft_numlen_base(i, base);
    if (!(dst = ft_strnew(size)))
        return (NULL);
	ft_put_com("exiting ft_uitoa_base with return value", (ft_itoa_base_help(i, size - 1, dst, base)));
    return (ft_itoa_base_help(i, size - 1, dst, base));
}
