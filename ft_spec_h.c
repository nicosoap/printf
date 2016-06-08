/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_h.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 08:42:28 by opichou           #+#    #+#             */
/*   Updated: 2016/06/08 11:45:45 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	hlp_spec_h(void)
{
	int		i;

	i = 177;
	while (i-- >= 0)
		ft_put[i] = ft_ret_null;
	ft_put[(int)('d')] = ft_ret_short_i;
	ft_put[(int)('D')] = ft_ret_i;
	ft_put[(int)('i')] = ft_ret_short_i;
	ft_put[(int)('o')] = ft_ret_short_octal;
	ft_put[(int)('O')] = ft_ret_octal;
	ft_put[(int)('u')] = ft_ret_unsigned_short_i;
	ft_put[(int)('U')] = ft_ret_unsigned_i;
	ft_put[(int)('x')] = ft_ret_unsigned_short_hex;
	ft_put[(int)('X')] = ft_ret_unsigned_short_hex_cap;
	ft_put[(int)('%')] = ft_ret_pct;
}

char		*ft_spec_h(char *format, va_list ap)
{
	char	*ret;

	hlp_spec_h();
	ret = ft_put[(int)*format](ap);
	return (ret);
}
