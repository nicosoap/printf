/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 21:27:10 by opichou           #+#    #+#             */
/*   Updated: 2016/04/03 23:38:44 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libftprintf.h"

void			ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list		*current;

	if (alst)
	{
		current = *alst;
		while (current)
		{
			if (del)
				(*del)(current->content, current->content_size);
			free(current);
			current = current->next;
		}
	}
	*alst = 0;
}
