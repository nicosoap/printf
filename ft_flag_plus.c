/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 18:30:16 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 16:44:48 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char				*ft_flag_plus(char *format, char *buf)
{
	ft_put_com("entering ft_flag_plus with buf =", buf);

	if (f_gf(format) == 's' || f_gf(format) == 'S' || f_gf(format) == 'c' \
	|| f_gf(format) == 'C' || f_gf(format) == 'p')
		return (buf);
	if (ft_atoi(buf) > 0)
		return (ft_concat(ft_strdup("+"), buf));
	else
		return (buf);
}
