/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ret_hex_oct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 22:18:52 by opichou           #+#    #+#             */
/*   Updated: 2016/06/04 00:20:52 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_ret_octal(va_list ap)
{
	return (ft_itoa_base(va_arg(ap, unsigned int), 8));
}

char			*ft_ret_long_octal(va_list ap)
{
	return (ft_itoa_base(va_arg(ap, unsigned long int), 8));
}

char			*ft_ret_unsigned_hex(va_list ap)
{
	return (ft_uitoa_base(va_arg(ap, unsigned long long int), 16));
}

char			*ft_ret_unsigned_hex_cap(va_list ap)
{
	return (ft_capitalize(ft_ret_unsigned_hex(ap)));
}
