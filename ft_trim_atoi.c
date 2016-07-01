/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 16:28:44 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 16:54:53 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int				ft_trim_atoi(char *str)
{
	while (!(ft_isdigit(*str)) && !(ft_test_format(str)))
		str++;
	if (ft_test_format(str))
		return (0);
	else
		return(ft_atoi(str));
}
