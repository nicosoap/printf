/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 13:29:10 by opichou           #+#    #+#             */
/*   Updated: 2016/04/13 14:47:59 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void			ft_putwchar(wchar_t wc)
{
	if ((unsigned int)wc <= 127)
		ft_putchar((unsigned int)wc);
	else if ((unsigned int)wc <= 2047)
	{
		ft_putchar(192 | (((unsigned int)wc >> 6) & 63));
		ft_putchar(49280 | ((unsigned int)wc & 63));
	}
	else if ((unsigned int)wc <= 65535)
	{
		ft_putchar(224 | ((unsigned int)wc >> 12));
		ft_putchar(128 | (((unsigned int)wc >> 6) & 63));
		ft_putchar(128 | ((unsigned int)wc & 63));
	}
	else
	{
		ft_putchar(248 | (((unsigned int)wc >> 18) & 63));
		ft_putchar(128 | (((unsigned int)wc >> 12) & 63));
		ft_putchar(128 | (((unsigned int)wc >> 6) & 63));
		ft_putchar(128 | ((unsigned int)wc & 63));
	}
}
