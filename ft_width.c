/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 19:29:58 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:52:35 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** width defines minimum length (width - strlen = space needing to be filled.
** Depending on flags, it can be filled right or left, with spaces or 0.
*/

int				ft_width(char *format, va_list ap)
{
	int			i;
		ft_put_com("entering ft_width", format);
	i = ft_trim_atoi(format);
	while (ft_test_flags(format) && *format != '.')
		format++;
	if (*format == '*')
	{
		i = (va_arg(ap, int));
		ft_put_com("found width wilcard value",ft_itoa(i));
	}
	else
	{
		ft_put_com("found width written value",ft_itoa(i));
	}
	return (i);
}
