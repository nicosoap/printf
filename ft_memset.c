/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:53:20 by opichou           #+#    #+#             */
/*   Updated: 2015/12/29 15:44:28 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memset(void *b, int c, size_t len)
{
	int		i;
	int		ilen;

	i = 0;
	ilen = len;
	while (i < ilen)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}
