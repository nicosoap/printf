/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 21:29:26 by opichou           #+#    #+#             */
/*   Updated: 2016/06/10 23:37:11 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			ft_get_format(char *format)
{
	while (!(ft_test_format(format)) && *format != '%' && format)
		format++;
	if (ft_test_format(format))
		return(*format);
	else
		return (0);
}
	
