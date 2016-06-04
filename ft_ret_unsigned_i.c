/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ret_unsigned_i.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 21:39:22 by opichou           #+#    #+#             */
/*   Updated: 2016/06/04 00:16:28 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_ret_unsigned_i(va_list ap)
{
	return (ft_strdup(ft_uitoa_base(va_arg(ap, unsigned int), 10)));
}

char			*ft_ret_unsigned_long_i(va_list ap)
{
	return (ft_strdup(ft_uitoa_base(va_arg(ap, unsigned long int), 10)));
}

char			*ft_ret_unsigned_long_long_i(va_list ap)
{
	return (ft_strdup(ft_uitoa_base(va_arg(ap, unsigned long long int), 10)));
}
