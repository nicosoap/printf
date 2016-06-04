/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 15:57:49 by opichou           #+#    #+#             */
/*   Updated: 2016/06/04 05:25:32 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*(*ft_put[177])(va_list ap);

void	hlp_spec(void)
{
	int		i;

	i = 177;
	while (i-- >= 0)
		ft_put[i] = ft_ret_null;
	ft_put[(int)('s')] = ft_ret_str;
	ft_put[(int)('S')] = ft_ret_str_long;
	ft_put[(int)('p')] = ft_ret_pointer;
	ft_put[(int)('d')] = ft_ret_i;
	ft_put[(int)('D')] = ft_ret_long_i;
	ft_put[(int)('i')] = ft_ret_i;
	ft_put[(int)('o')] = ft_ret_octal;
	ft_put[(int)('O')] = ft_ret_long_octal;
	ft_put[(int)('u')] = ft_ret_unsigned_i;
	ft_put[(int)('U')] = ft_ret_unsigned_long_i;
	ft_put[(int)('x')] = ft_ret_unsigned_hex;
	ft_put[(int)('X')] = ft_ret_unsigned_hex_cap;
	ft_put[(int)('c')] = ft_ret_char;
	ft_put[(int)('C')] = ft_ret_wchar;
	ft_put[(int)('%')] = ft_ret_pct;
}

char		*ft_spec(char **format, va_list ap)
{
	char	*ret;
	char	*ptr;

	hlp_spec();
	ptr = *format;
	ret = ft_put[(int)*ptr](ap);
	return (ret);
}
