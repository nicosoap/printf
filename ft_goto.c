/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_goto.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/01 13:57:49 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:18:26 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char			*ft_goto(char c, char *str)
{
	char		*tmp;

	ft_put_com("entering ft_goto", "");
	tmp = str;
	while (*tmp != c  && !(ft_test_format(tmp)))
		tmp++;
	if (*tmp == c)
		return (tmp);
	else
		return (str);
}
