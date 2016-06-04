/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 13:48:39 by opichou           #+#    #+#             */
/*   Updated: 2015/12/29 21:05:15 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strstr(const char *big, const char *little)
{
	int		j;
	char	*bptr;
	char	*lptr;

	bptr = (char *)big;
	lptr = (char *)little;
	if (*lptr == '\0')
		return (bptr);
	while (*bptr != '\0')
	{
		if (*bptr == *lptr)
		{
			j = 0;
			while (bptr[j] == lptr[j] && bptr[j] != '\0' && lptr[j] != '\0')
				j++;
			if (lptr[j] == '\0')
				return (bptr);
		}
		bptr++;
	}
	return (NULL);
}
