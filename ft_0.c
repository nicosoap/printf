/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_0.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 12:19:23 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 18:26:50 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_0(int size)
{
	char		*str;

	ft_put_com("entering ft_0 with size", ft_itoa(size));
	if (size > 0)
	{
		str = ft_strnew(size);
		while (size--)
			str[size] = '0';
		return(str);
	}
	else
	{
		return (ft_strdup(""));
	}
}
