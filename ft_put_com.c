/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_com.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/28 15:23:30 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:28:06 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void      ft_put_com(char *str, char *val) {
    ft_putstr("   * ");
    ft_putstr(str);
    ft_putstr(" : ");
    ft_putstr(val);
    ft_putendl(".");
}
