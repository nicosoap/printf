/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longintlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/04 18:25:33 by opichou           #+#    #+#             */
/*   Updated: 2016/04/04 18:35:14 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t				ft_longintlen(long long int num)
{
	if (num < 0)
		return (1 + ft_longintlen(-num));
	else if (num < 10)
		return (1);
	else
		return (1 + ft_longintlen(num / 10));
}
