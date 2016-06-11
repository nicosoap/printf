/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/11 15:01:36 by opichou           #+#    #+#             */
/*   Updated: 2016/06/11 23:30:48 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
** flags : # 0 - + " "
** - : alignement gauche
** + : ajoute un signe + si le nombre retourné est positif
** " " (espace) : ajoute un espace (au lieu du +) pour les nombres positifs
** 0 : le charactère de complétion gauche des nombres est 0
** # : pour g et G : les zeros de queue sont maintenus
**     pour f, F, e, E, g, G le point décimal est obligatoire
**     pour o, x, X : '0', '0x', '0X' respectivement, prefixe le nombre non nul
*/

char				*ft_flags(char *format, va_list ap)
{
	char			f;
	int				i;
	char			*buf;

	while (ft_test_flags(format))
	{
		f = ft_get_flag(format);
		if (f == '#')
		{
			if (ft_get_format(format) == 'o' || ft_get_format(format)== 'O')
				buf = ft_concat(ft_strdup("0"), ft_precision(format, ap));
			else if (ft_get_format(format) == 'x')
				buf = ft_concat(ft_strdup("0x"), ft_precision(format, ap));
			else if (ft_get_format(format) == 'X')
				buf = ft_concat(ft_strdup("0X"), ft_precision(format, ap));
			else
				buf = ft_concat(ft_space(ft_width(format, ap), ft_precision(format, ap)));
		}
		else if (f == '0')
			if (ft_is_num_format(ft_get_format(format)))
				

