/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 14:00:38 by opichou           #+#    #+#             */
/*   Updated: 2015/12/30 20:27:43 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		j;
	int		i;
	char	*bptr;
	char	*lptr;

	i = 0;
	bptr = (char *)big;
	lptr = (char *)little;
	if (*lptr == '\0')
		return (bptr);
	while (*bptr != '\0' && i < (int)len)
	{
		if (*bptr == *lptr)
		{
			j = 0;
			while (i + j < (int)len && bptr[j] == lptr[j] \
					&& bptr[j] != '\0' && lptr[j] != '\0')
				j++;
			if (lptr[j] == '\0')
				return (bptr);
		}
		bptr++;
		i++;
	}
	return (NULL);
}
