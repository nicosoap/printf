/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/03 22:50:47 by opichou           #+#    #+#             */
/*   Updated: 2016/06/29 15:19:55 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libftprintf.h"
#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int					main(void)
{
	char *str;

	str = "le petit chat";
	printf("%.500s %+.12d", str, 198652302);
}
