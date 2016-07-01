/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 22:43:29 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:25:34 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char        *ft_concat(char *s1, char *s2)
{
    char *dst;

		ft_put_com("entering ft_concat with s1", s1);
	dst = ft_strjoin(s1, s2);
	free(s1);
	free(s2);
    return (dst);
}
