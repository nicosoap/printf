/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:59:38 by opichou           #+#    #+#             */
/*   Updated: 2016/01/06 22:58:37 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *tmp_s;

	tmp_s = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n--)
	{
		if (*tmp_s == (unsigned char)c)
			return (tmp_s);
		++tmp_s;
	}
	return (NULL);
}
