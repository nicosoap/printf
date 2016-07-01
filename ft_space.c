/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 15:13:22 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 18:27:20 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_space(int size)
{
	ft_put_com("entering ft_space with size", ft_itoa(size));

	char		*str;

	if (size > 0)
	{
		str = ft_strnew(size);
		while (size--)
			str[size] = ' ';
		return(str);
	}
	else
	{
		return (ft_strdup(""));
	}
}
