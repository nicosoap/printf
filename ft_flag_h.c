/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_h.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 15:09:39 by opichou           #+#    #+#             */
/*   Updated: 2016/06/28 15:09:42 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char				*ft_flag_h(char *format, va_list ap)
{
	char			*buf;

	if (ft_get_format(format) == 'o' || ft_get_format(format)== 'O')
		buf = ft_concat(ft_strdup("0"), ft_precision(++format, ap));
	else if (ft_get_format(format) == 'x')
		buf = ft_concat(ft_strdup("0x"), ft_precision(++format, ap));
	else if (ft_get_format(format) == 'X')
		buf = ft_concat(ft_strdup("0X"), ft_precision(++format, ap));
	else
		buf = ft_concat(ft_space(ft_width(format, ap), ft_precision(++format, ap)));
	return (buf);
}
