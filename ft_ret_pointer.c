/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ret_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 18:26:40 by opichou           #+#    #+#             */
/*   Updated: 2016/06/08 03:39:47 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_ret_pointer(va_list ap)
{
	return (ft_concat(ft_strdup("0x"), ft_ret_unsigned_long_hex(ap)));
}
