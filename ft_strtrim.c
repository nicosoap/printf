/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 02:16:24 by opichou           #+#    #+#             */
/*   Updated: 2015/12/30 20:30:01 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libftprintf.h"

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*dst;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s) - 1;
	while ((s[len] == ' ' || s[len] == '\n' || s[len] == '\t') && len >= 0)
		len--;
	if (len > 0)
	{
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
	}
	dst = (char *)malloc((len - i) * sizeof(char) + 2);
	if (!dst)
		return (NULL);
	while (j + i <= len)
	{
		dst[j] = s[i + j];
		j++;
	}
	dst[j] = '\0';
	return (dst);
}
