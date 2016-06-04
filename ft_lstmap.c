/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/30 21:43:55 by opichou           #+#    #+#             */
/*   Updated: 2015/12/30 22:14:52 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*tmp;
	t_list		*tmp2;

	if (lst && *f)
	{
		tmp = (*f)(lst);
		tmp2 = ft_lstnew(tmp->content, tmp->content_size);
		if (tmp2 && lst->next)
			tmp2->next = ft_lstmap(lst->next, f);
		return (tmp2);
	}
	return (0);
}
