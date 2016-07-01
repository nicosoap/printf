/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 21:29:26 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:17:55 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_test_format(char *f)
{
	ft_put_com("entering ft_test_format", "");
	if (*f == 's' || *f == 'S' || *f == 'p' || *f == 'd' || *f == 'D' \
			|| *f == 'i' || *f == 'o' || *f == 'O' || *f == 'u' || *f == 'U' \
			|| *f == 'x' || *f == 'X' || *f == 'c' || *f == 'C' || *f == '%')
		return (1);
	else
		return (0);
}

char			f_gf(char *format)
{
	ft_put_com("entering f_gf", "");
	return (ft_get_format(format));
}

char			ft_get_format(char *format)
{
	ft_put_com("entering ft_get_format", "");
	while (!(ft_test_format(format)) && *format != '%' && format)
		format++;
	if (ft_test_format(format))
		return(*format);
	else
		return (0);
}
