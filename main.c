/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 22:50:47 by opichou           #+#    #+#             */
/*   Updated: 2016/06/08 14:20:17 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libftprintf.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int					main(void)
{
	char			*lost;
//	long double		dble;
	unsigned int	u_int;
	int				*lame;
	int				i;

	i = 4;
	lost = "petit chien";
//	dble = 1.7564432;
	u_int = 165;
	if ((lame = malloc(3 * sizeof(int) + 1)))
	{
		while (--i >= 0)
			lame[i] = u_int;
		lame[3] = '\0';
	}
//	ft_printf("%s", "le petit chat");
//	ft_putchar('\n');
//	ft_printf("%d", 1234567890);
//	ft_putchar('\n');
//	ft_printf("%c %x %X", 'a', u_int, u_int);
//	ft_putchar('\n');
//	ft_printf("%p", lost);
	ft_putendl(ft_usitoa_base((unsigned short)999931, 10));

	setlocale(LC_ALL, "en_US.UTF-8");

	ft_printf("lol %.10c", 'a');
//	printf("printf hd %hd hD %hD hi %hi ho %ho hO %hO hu %hu hU %hU hx %hx hX %hX pct %% %c", (short)9999910, (short)9999910, (short)9999910, (unsigned short)9999910, (unsigned short)9999910, (unsigned short)9999910, (unsigned short)9999910, (unsigned short)9999910, (unsigned short)9999910, '\n');
//	ft_printf("ft_printf hd %hd hD %hD hi %hi ho %ho hO %hO hu %hu hU %hU hx %hx hX %hX pct %% %c", (short)9999910, (short)9999910, (short)9999910, (unsigned short)9999910, (unsigned short)9999910, (unsigned short)9999910, (unsigned short)9999910, (unsigned short)9999910, (unsigned short)9999910, '\n');
	printf("test");
	ft_printf("ft_test");
	ft_putchar('\n');
}
