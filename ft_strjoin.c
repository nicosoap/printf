/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 02:48:16 by opichou           #+#    #+#             */
/*   Updated: 2016/06/03 19:50:55 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libftprintf.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	j = 0;
	if ((dst = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1)) != NULL)
	{
		while (s1 && s1[i] != '\0')
		{
			dst[i] = s1[i];
			i++;
		}
		while (s2 && s2[j] != '\0')
		{
			dst[i + j] = s2[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (dst);
}
