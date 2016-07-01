/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 23:12:30 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 12:18:30 by opichou          ###   ########.fr       */
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
