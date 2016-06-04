/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 03:06:35 by opichou           #+#    #+#             */
/*   Updated: 2016/01/02 13:03:21 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libftprintf.h"

static	int			ft_wrdcnt(char const *s, char c)
{
	unsigned int		wrd;
	size_t				i;

	i = 0;
	wrd = 0;
	while (s && s[i])
	{
		while ((char)s[i] == c)
			i++;
		if (s[i] && (char)s[i] != c)
			wrd++;
		while (s[i] && (char)s[i] != c)
			i++;
	}
	return (wrd);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	i;
	char	*t;
	char	**dst;

	i = 0;
	dst = (char**)malloc((ft_wrdcnt(s, c) + 1) * sizeof(char*));
	if (dst)
	{
		t = (char *)s;
		while (t && *t)
		{
			while (*t == c)
				t++;
			if (*t && *t != c)
			{
				dst[i] = ft_strndup(t, ft_strxlen(t, c));
				i++;
			}
			while (*t && *t != c)
				t++;
		}
		dst[i] = 0;
	}
	return (dst);
}
