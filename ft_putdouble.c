/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 18:55:27 by opichou           #+#    #+#             */
/*   Updated: 2016/04/04 21:13:17 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <float.h>

void				ft_putdouble(long double num, char c, size_t p)
{
	if (num != num)
		ft_putstr("NaN");
	else if (num > 1)
	{
		ft_putnbr((long long int)num);
		ft_putchar(c);
		ft_putdouble(num - (long long int)num, c, p);
	}
	else if (num < 1 && num != 0 && p > 0)
	{
		ft_putchar((int)(num * 10) + '0');
		ft_putdouble(num * 10 - ((long double)((long long int)(num * 10))), c, p - 1);
	}
}
