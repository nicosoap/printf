/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/11 15:01:36 by opichou           #+#    #+#             */
/*   Updated: 2016/06/29 17:43:42 by opichou          ###   ########.fr       */
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

	f = ft_get_flag(format);
	if (f == '#')
		return (ft_flag_h(format, ap));
	else if (f == '0')
		return (ft_flag_0(format, ap));
	else if (f == '-')
		return (ft_flag_minus(format, ap));
	else if (f == '+')
		return (ft_flag_plus(format, ap));
	else if (f == ' ')
		return (ft_flag_plus(format, ap));
	else
		return (ft_precision(format, ap));
}
