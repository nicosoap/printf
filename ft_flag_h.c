/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_h.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 15:09:39 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 16:25:03 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char				*ft_flag_h(char *format, char *buf)
{
	ft_put_com("entering ft_flag_h with buf =", buf);

	if (ft_get_format(format) == 'o' || ft_get_format(format) == 'O')
		buf = ft_concat(ft_strdup("0"), buf);
	else if (ft_get_format(format) == 'x')
		buf = ft_concat(ft_strdup("0x"), buf);
	else if (ft_get_format(format) == 'X')
		buf = ft_concat(ft_strdup("0X"), buf);
	return (buf);
}
