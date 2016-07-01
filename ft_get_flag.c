/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 17:22:57 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:44:34 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_test_flags(char *f)
{
	ft_put_com("entering ft_test_flags", "");
	if (*f == '#' || *f == '0' || *f == '-' || *f == '+' || *f == ' ')
		return (1);
	else
		return (0);
}

char			ft_get_flag(char *format)
{
	ft_put_com("entering ft_get_flag", "");
	while (!(ft_test_flags(format)) && *format != '%' && format)
		format++;
	if (ft_test_flags(format))
		return(*format);
	else
		return (0);
}

int				is_flag(char *f, char c)
{
	ft_put_com("entering is_flag", "");
	while (!(ft_test_format(f)) && *f != '.')
	{
		if ( *f == c)
			return (1);
		else if (ft_isdigit(*f) && *f != '0')
			return (0);
		else
			f++;
	}
	return (0);
}
