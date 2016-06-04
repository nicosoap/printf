/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 22:50:47 by opichou           #+#    #+#             */
/*   Updated: 2016/06/04 08:33:26 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libftprintf.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int					main(void)
{
//	char			*lost;
//	long double		dble;
//	unsigned int	u_int;

//	lost = "petit chien";
//	dble = 1.7564432;
//	u_int = 165;
//	ft_printf("%s", "le petit chat");
//	ft_putchar('\n');
//	ft_printf("%d", 1234567890);
//	ft_putchar('\n');
//	ft_printf("%c %x %X", 'a', u_int, u_int);
//	ft_putchar('\n');
//	ft_printf("%p", lost);
	setlocale(LC_ALL, "en_US.UTF-8");
	printf("mais %c/n",'L');
	ft_printf("mais %ci %s%c", 'G', "le petit chat", '\n');
	ft_putchar('\n');
}
