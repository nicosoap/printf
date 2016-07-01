/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision_i.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 11:57:53 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:19:11 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_precision_i(char *format, va_list ap, int i)
{
	char 		*buf;
	int			j;

	ft_put_com("entering ft_precision_i", "");
	buf = ft_length(format, ap);
	j = i - ft_strlen(buf);
	if (j >= 0)
		return (buf);
	else
		return (ft_concat(ft_0((unsigned int)j), buf));

}
