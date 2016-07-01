/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_l.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 07:46:39 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:22:31 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	hlp_spec_l(void)
{
	int		i;

		ft_put_com("entering hlp_spec_l", "");
	i = 177;
	while (i-- >= 0)
		ft_put[i] = ft_ret_null;
	ft_put[(int)('s')] = ft_ret_str_long;
	ft_put[(int)('S')] = ft_ret_str_long;
	ft_put[(int)('p')] = ft_ret_pointer;
	ft_put[(int)('d')] = ft_ret_i;
	ft_put[(int)('D')] = ft_ret_long_i;
	ft_put[(int)('i')] = ft_ret_i;
	ft_put[(int)('o')] = ft_ret_long_octal;
	ft_put[(int)('O')] = ft_ret_long_long_octal;
	ft_put[(int)('u')] = ft_ret_unsigned_long_i;
	ft_put[(int)('U')] = ft_ret_unsigned_long_long_i;
	ft_put[(int)('x')] = ft_ret_unsigned_long_hex;
	ft_put[(int)('X')] = ft_ret_unsigned_hex_long_cap;
	ft_put[(int)('c')] = ft_ret_char;
	ft_put[(int)('C')] = ft_ret_wchar;
	ft_put[(int)('%')] = ft_ret_pct;
}

char		*ft_spec_l(char *format, va_list ap)
{
	char	*ret;

		ft_put_com("entering ft_spec_l", "");
	hlp_spec_l();
	ret = ft_put[(int)*format](ap);
	return (ret);
}
