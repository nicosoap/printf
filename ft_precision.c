/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 14:15:49 by opichou           #+#    #+#             */
/*   Updated: 2016/06/08 14:32:07 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_precision(char *format, va_list ap)
{
	size_t		i;

	i = 0;
	if (*format != '.')
		return (ft_length(format, ap));
	else if (*format == '*')
		ft_putnbr(va_arg(ap, int));
	else
		i = ft_atoi(format++);
	ft_putnbr(i);
	return (ft_itoa(i));
}
