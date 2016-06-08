/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ret_long_hex_oct.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 08:10:29 by opichou           #+#    #+#             */
/*   Updated: 2016/06/08 08:20:07 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_ret_long_long_octal(va_list ap)
{
	return (ft_itoa_base(va_arg(ap, unsigned long int), 8));
}

char			*ft_ret_unsigned_hex_long_cap(va_list ap)
{
	return (ft_capitalize(ft_ret_unsigned_long_hex(ap)));
}

char			*ft_ret_unsigned_long_long_hex(va_list ap)
{
	return (ft_uitoa_base(va_arg(ap, unsigned long long int), 16));
}

char			*ft_ret_unsigned_hex_long_long_cap(va_list ap)
{
	return (ft_capitalize(ft_ret_unsigned_long_long_hex(ap)));
}
