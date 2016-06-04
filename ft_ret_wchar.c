/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ret_wchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 18:30:24 by opichou           #+#    #+#             */
/*   Updated: 2016/06/04 02:49:12 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_ret_wchar_hlp2(unsigned int wc, char *ret)
{
	ret[0] = ((wc >>18) & 63);
	ret[1] = ((wc >> 12) & 63);
	ret[2] = ((wc >> 6) & 63);
	ret[3] = (wc & 63);
	return (ret);
}

char		*ft_ret_wchar_hlp(unsigned int wc)
{
	char *ret;

	ft_putstr("value of wc -> ");
	ft_putnbr(wc);
	ft_putchar('\n');
	ft_putchar(wc);
	if (!(ret = ft_strnew(4)))
		return (NULL);
	if (wc <= 127)
	{
		ret[0] = wc;
		ft_putchar(wc);
		ft_putendl("<- wc returned");
	}
	else if (wc <= 2047)
	{
		ret[0] = (192 | ((wc >> 6) & 63));
		ret[1] = (49280 | (wc & 63));
	}
	else if (wc <= 65535)
	{
		ret[0] = (224 | (wc >> 12));
		ret[1] = (128 | ((wc >>6) & 63));
		ret[2] = (128 | (wc & 63));
	}
	else
		return (ft_ret_wchar_hlp2(wc, ret));
	ft_putendl((char *)ret);
	return ((char *)ret);
}
char		*ft_ret_wchar(va_list ap)
{
	return (ft_ret_wchar_hlp(va_arg(ap, unsigned int)));
}

char		*ft_ret_wchar2(wchar_t c)
{
	return (ft_ret_wchar_hlp((unsigned int)c));
	}

char		*ft_ret_char(va_list ap)
{
	char	c;
	char	*ptr;

	if ((ptr = ft_strnew(1)) != NULL)
	{
		c = va_arg(ap, int);
		*ptr = c;
	}
	return (ptr);
}
