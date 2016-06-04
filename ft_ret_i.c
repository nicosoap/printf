/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ret_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 21:25:09 by opichou           #+#    #+#             */
/*   Updated: 2016/06/04 00:22:52 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_ret_i(va_list ap)
{
	return (ft_itoa_base(va_arg(ap, int), 10));
}

char			*ft_ret_long_i(va_list ap)
{
	return (ft_itoa_base(va_arg(ap, long int), 10));
}

char			*ft_ret_long_long_i(va_list ap)
{
	return (ft_itoa_base(va_arg(ap, long long int), 10));
}
