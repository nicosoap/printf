/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ret_short.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 11:31:23 by opichou           #+#    #+#             */
/*   Updated: 2016/06/08 13:20:03 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_ret_short_i(va_list ap)
{
	return (ft_itoa_base(ft_cast_short(va_arg(ap, int)), 10));
}

char			*ft_ret_unsigned_short_i(va_list ap)
{
	return (ft_uitoa_base(ft_cast_ushort(va_arg(ap, int)), 10));
}

char			*ft_ret_short_octal(va_list ap)
{
	return (ft_itoa_base(ft_cast_short(va_arg(ap, int)), 8));
}

char			*ft_ret_unsigned_short_hex(va_list ap)
{
	return (ft_itoa_base(ft_cast_ushort(va_arg(ap, int)), 16));
}

char			*ft_ret_unsigned_short_hex_cap(va_list ap)
{
	return (ft_uitoa_base(ft_cast_ushort(va_arg(ap, int)), 16));
}
