/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 20:01:17 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:13:42 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_sprintf(const char *restrict format, ...)
{
	va_list		ap;
	char		*ret;

	if (!(ret = ft_strdup("")))
		return (NULL);
	va_start(ap, format);
	while (format && *format)
	{
		if (*format != '%')
		{
			ret = ft_concat(ret, ft_strndup(format, ft_strxlen(format, '%')));
			format = ft_strchr(format, '%');
		}
		else
		{
			ret = ft_concat(ret, ft_flags((char *)++format, ap));
			while (!ft_test_format((char *)format))
				format++;
			format++;
		}
	}
	va_end(ap);
	return (ret);
}
int				ft_printf(const char *restrict format, ...)
{
	va_list		ap;
	char		*ret;

	if (!(ret = ft_strdup("")))
		return (-1);
	va_start(ap, format);
	ft_put_com("entering ft_printf", "");
	while (format && *format)
	{
		if (*format != '%')
		{
			ret = ft_concat(ret, ft_strndup(format, ft_strxlen(format, '%')));
			format = ft_strchr(format, '%');
		}
		else
		{
			ret = ft_concat(ret, ft_flags((char *)++format, ap));
			while (!ft_test_format((char *)format))
				format++;
			format++;
		}
	}
	va_end(ap);
	ft_putstr(ret);
	return (ft_return_free(&ret));
}
