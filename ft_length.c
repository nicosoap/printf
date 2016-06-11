/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 07:34:18 by opichou           #+#    #+#             */
/*   Updated: 2016/06/11 15:15:07 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** length flags hh h l ll j z
*/

char			*ft_length(char *format, va_list ap)
{
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
