/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 17:22:57 by opichou           #+#    #+#             */
/*   Updated: 2016/06/28 18:13:16 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_test_flags(char *f)
{
	if (*f == '#' || *f == '0' || *f == '-' || *f == '+' || *f == ' ')
		return (1);
	else
		return (0);
}

char			ft_get_flag(char *format)
{
	while (!(ft_test_flags(format)) && *format != '%' && format)
		format++;
	if (ft_test_flags(format))
		return(*format);
	else
		return (0);
}
