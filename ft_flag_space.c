/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 18:30:10 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:15:34 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char				*ft_flag_space(char *format, char *buf)
{
	ft_put_com("entering ft_flag_space with buf", buf);
	if (ft_atoi(buf) > 0 && is_flag(format, ' '))
		return (ft_concat(ft_strdup(" "), buf));
	else
		return (buf);
}
