/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <opichou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 15:11:28 by opichou           #+#    #+#             */
/*   Updated: 2016/07/01 17:26:29 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libftprintf.h"

void		ft_putchar_fd(char c, int fd)
{
	ft_put_com("entering ft_putchar_fd", "");
	write(fd, &c, 1);
}
