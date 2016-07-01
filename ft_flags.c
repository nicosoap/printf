/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/11 15:01:36 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:35:35 by opichou          ###   ########.fr       */
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

char				*ft_flags(char *f, va_list ap)
{
	char			*buf;

	ft_put_com("entering ft_flags", "");
	buf = ft_precision(ft_goto('.', f), ap);
	if (is_flag(f, '#'))
	{
		ft_put_com("switch to flag", "#");
		buf = (ft_flag_h(f, buf));
	}
	if (is_flag(f, '+'))
	{
		ft_put_com("switch to flag", "+");
		buf = (ft_flag_plus(f, buf));
	}
	else if (is_flag(f, ' '))
	{
		ft_put_com("switch to flag", "space");
		buf =  (ft_flag_space(f, buf));
	}
	if (is_flag(f, '-'))
	{
		ft_put_com("switch to flag", "-");
		if (is_flag(f, '0'))
		{
			ft_put_com("switch to flag", "0");
			return (ft_concat(buf, ft_0(ft_width(f, ap) - ft_strlen(buf))));
		}
		else
		{
			ft_put_com("switch to flag", "none");
			return (ft_concat(buf, ft_space(ft_width(f, ap) - ft_strlen(buf))));
		}
	}
	else
	{
		ft_put_com("switch to flag", "none");
		if (is_flag(f, '0'))
		{
			ft_put_com("switch to flag", "0");
			return (ft_concat(ft_0(ft_width(f, ap) - ft_strlen(buf)), buf));
		}
		else
		{
			ft_put_com("switch to flag", "none");
			return (ft_concat(ft_space(ft_width(f, ap) - ft_strlen(buf)), buf));
		}
	}
}
