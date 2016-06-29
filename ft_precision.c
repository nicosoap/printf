/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 18:44:51 by opichou           #+#    #+#             */
/*   Updated: 2016/06/29 17:44:49 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

// precision is .* or .num defines maximum length for string
// or maximum precision for float

char			*ft_precision(char *format, va_list ap)
{
	int			i;

	ft_put_com("entre ft_precision avec format", ft_get_format(format));

	if (*format != '.')
		return (ft_spec(format, ap));
	else if (*(++format) == '*')
		i = va_arg(ap, int);
	else
		i = ft_atoi(format);
	while (ft_isdigit(*format) || *format == '*')
		format++;
	if (ft_get_format(format) == 's' || ft_get_format(format) == 'S')
		return (ft_strndup(ft_length(format, ap), i));
	else if (ft_get_format(format) == 'f' || ft_get_format(format) == 'F' \
			|| ft_get_format(format) == 'g' || ft_get_format(format) == 'G'\
			|| ft_get_format(format) == 'e' || ft_get_format(format) == 'E')
		return (ft_length(format, ap));
	else
		return(ft_length(format, ap));
}
