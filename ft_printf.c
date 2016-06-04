/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 20:01:17 by opichou           #+#    #+#             */
/*   Updated: 2016/06/04 08:31:12 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*(*ft_put[177])(va_list ap);

int				ft_test_format(const char * restrict f)
{
	if (*f == 's' || *f == 'S' || *f == 'p' || *f == 'd' || *f == 'D' || *f == 'i' || *f == 'o' || *f == 'O' || *f == 'u' || *f == 'U' || *f == 'x' || *f == 'X' || *f == 'c' || *f == 'C' || *f == '%')
		return (1);
	else
		return (0);
}

int				ft_printf(const char * restrict format, ...)
{
	va_list		ap;
	char		*ret;

	if (!(ret = ft_strdup("")))
			return (-1);
	va_start(ap, format);
	while(format && *format)
	{
		if (*format != '%')
		{
			ret = ft_concat(ret, ft_strndup(format, ft_strxlen(format, '%')));
			format = ft_strchr(format, '%');
		}
		else
		{
			ret = ft_concat(ret, ft_spec((char *)++format, ap));
			while (!ft_test_format(format))
				format++;
			format++;
		}
	}
	va_end(ap);
	ft_putstr(ret);
	return (ft_strlen(ret));
}
