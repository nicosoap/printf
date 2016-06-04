/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/13 18:51:26 by opichou           #+#    #+#             */
/*   Updated: 2016/04/14 19:30:00 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst && new)
	{
		while ((*alst)->next)
		*alst = (*alst)->next;
		(*alst)->next = (new);
	}
}
