/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 23:12:30 by opichou           #+#    #+#             */
/*   Updated: 2015/12/30 20:27:00 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libftprintf.h"

char		*ft_strnew(size_t size)
{
	char		*ptr;
	size_t		i;

	i = 0;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (ptr)
	{
		while (i <= size)
		{
			ptr[i] = '\0';
			i++;
		}
		return (ptr);
	}
	return (NULL);
}
