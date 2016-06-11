/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 19:29:58 by opichou           #+#    #+#             */
/*   Updated: 2016/06/11 15:16:53 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** width defines minimum length (width - strlen = space needing to be filled.
** Depending on flags, it can be filled right or left, with spaces or 0.
*/

int				ft_width(char *format, va_list ap)
{
	while (!(ft_isdigit(*format)) && *format != '.' && 
			!(ft_test_format(format)) && *format != '*')
		format++;
	if (*format == '.' || ft_test_format(format))
		return (-1);
	else if (*format == '*')
		return (va_arg(ap, int));
	else
		return (ft_atoi(format));
}
