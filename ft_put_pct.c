/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 17:29:27 by opichou           #+#    #+#             */
/*   Updated: 2016/06/08 05:39:40 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*ft_ret_pct(va_list ap)
{
	(void)ap;
	return (ft_strdup("%"));
}

char		*ft_ret_null(va_list ap)
{
	(void)ap;
	return (NULL);
}
