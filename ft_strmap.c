/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 00:53:33 by opichou           #+#    #+#             */
/*   Updated: 2015/12/30 20:25:40 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libftprintf.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*ptr;
	int		len;

	i = 0;
	if (!s || !*f)
		return (NULL);
	len = ft_strlen(s);
	ptr = (char *)malloc(len * sizeof(char) + 1);
	if (ptr != NULL && s && *f)
	{
		while (s[i] != '\0')
		{
			ptr[i] = f(s[i]);
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
