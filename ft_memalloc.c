/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 22:27:04 by opichou           #+#    #+#             */
/*   Updated: 2015/12/29 17:18:14 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(size);
	if (ptr != NULL)
	{
		while (i < (int)size)
		{
			ptr[i] = '\0';
			i++;
		}
	}
	return (ptr);
}
