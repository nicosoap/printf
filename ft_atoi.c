/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 09:47:56 by opichou           #+#    #+#             */
/*   Updated: 2016/04/03 23:36:55 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_atoi(const char *str)
{
	int i;
	int rslt;
	int n;

	i = 0;
	rslt = 0;
	n = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\f'\
			|| str[i] == '\r' || str[i] == '\n' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		n = -n;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		rslt = (str[i] - '0') + (rslt * 10);
		i++;
	}
	return (rslt * n);
}
