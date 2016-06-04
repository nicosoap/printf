/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/05 11:41:00 by opichou           #+#    #+#             */
/*   Updated: 2016/04/05 13:15:09 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_putnbr_hex(unsigned int n)
{
	char	*base;
	
	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putnbr_hex(n / 16);
		ft_putnbr_hex(n % 16);
	}
	else
		ft_putchar(base[n]);
}

void		ft_putnbr_hexmaj(unsigned int n)
{
	char	*base;
	
	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_putnbr_hexmaj(n / 16);
		ft_putnbr_hexmaj(n % 16);
	}
	else
		ft_putchar(base[n]);
}
