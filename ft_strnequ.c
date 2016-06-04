/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 01:23:12 by opichou           #+#    #+#             */
/*   Updated: 2015/12/31 20:30:42 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*tmp_s1;
	char	*tmp_s2;

	if (!s1 || !s2)
		return (0);
	tmp_s1 = (char *)s1;
	tmp_s2 = (char *)s2;
	while (*tmp_s1 != '\0' && *tmp_s2 != '\0' && n--)
	{
		if (*tmp_s1 != *tmp_s2)
			return (0);
		++tmp_s1;
		++tmp_s2;
	}
	return (1);
}
