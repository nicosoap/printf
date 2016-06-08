/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ret_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 23:35:17 by opichou           #+#    #+#             */
/*   Updated: 2016/06/08 02:51:09 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_ret_str(va_list ap)
{
	return (ft_strdup(va_arg(ap, char *)));
}

char		*ft_ret_str_long(va_list ap)
{
	size_t	i;
	wchar_t	*tmp;
	char	*ret;

	i = 0;
	ret = ft_strdup("");
	tmp = va_arg(ap, wchar_t *);
	while (tmp[i])
	{
		ret = ft_concat(ret, ft_ret_wchar2(tmp[i]));
		i++;
	}
	return (ret);
}
