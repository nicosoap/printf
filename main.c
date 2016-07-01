/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 22:50:47 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 18:35:32 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libftprintf.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int					main(void)
{
	char *str;

	ft_put_com("entering main", "");
	str = "le petit chat";
//	ft_put_com("return from ft_printf","");
	ft_printf("%#-12.8o\n%12.8d\n", 123456789, 123456789);
//	ft_put_com("return from printf","");
	printf("%#-12.8o\n%12.8d\n", 123456789, 123456789);
}
