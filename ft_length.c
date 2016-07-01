/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 07:34:18 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:44:24 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** length flags hh h l ll j z
*/

char			*ft_length(char *format, va_list ap)
{
	ft_put_com("entering ft_length", "");
	while (ft_isdigit(*format) || ft_test_flags(format) || *format == '*')
		format++;
	if (*format == 'h')
	{
		if (*(format+1) == 'h')
			return (ft_spec_hh((format + 2), ap));
		else
			return (ft_spec_h(++format, ap));
	}
	else if (*format == 'l')
	{
		if (*(format + 1) == 'l')
			return (ft_spec_ll((format + 2), ap));
		else
			return (ft_spec_l(++format, ap));
	}
	else if (*format == 'j')
		return (ft_spec_j(++format, ap));
	else if (*format == 'z')
		return (ft_spec_z(++format, ap));
	else
		return (ft_spec(format, ap));
}
