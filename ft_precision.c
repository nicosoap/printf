/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 18:44:51 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:29:00 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** precision is .* or .num defines maximum length for string
** or maximum precision for float
*/

char			*ft_precision(char *format, va_list ap)
{
	int			i;

	ft_put_com("entering ft_precision", "");

	if (*format != '.')
		return (ft_length(format, ap));
	else if (*(++format) == '*')
		i = va_arg(ap, int);
	else
		i = ft_trim_atoi(format);
	while (ft_isdigit(*format) || *format == '*' || *format == '.')
		format++;
	if (f_gf(format) == 's' || f_gf(format) == 'S')
		return (ft_strndup(ft_length(format, ap), i));
	else if (f_gf(format) == 'f' || f_gf(format) == 'F' || f_gf(format) == 'g' \
	|| f_gf(format) == 'G' || f_gf(format) == 'e' || f_gf(format) == 'E')
		return (ft_length(format, ap));
	else if (f_gf(format) == 'i' || f_gf(format) == 'd' || f_gf(format) == 'D' \
	|| f_gf(format) == 'I')
		return(ft_precision_i(format, ap, i));
	else
		return(ft_length(format, ap));
}
