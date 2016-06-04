/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/02 20:01:17 by opichou           #+#    #+#             */
/*   Updated: 2016/06/04 05:15:52 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_printf(const char * restrict format, ...)
{
	va_list		ap;
	char		**ptr;
	char		*tmp;
	char		*ret;

	if (!(ret = ft_strdup("")))
			return (-1);
	ptr = malloc(sizeof(void *));
	tmp = ft_strdup(format);
	*ptr = tmp;
	va_start(ap, format);
	while(**ptr)
	{
		if (**ptr != '%')
		{
			ret = ft_concat(ret, ft_strndup(*ptr, ft_strxlen(*ptr, '%')));
			*ptr = ft_strchr(*ptr, '%');
		}
		else
			ret = ft_concat(ret, ft_spec(++(*ptr), ap));
	}
	va_end(ap);
	ft_putstr(ret);
	free(ptr);
	return (ft_strlen(ret));
}
