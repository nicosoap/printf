/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstforceadd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opichou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/02 12:23:42 by opichou           #+#    #+#             */
/*   Updated: 2016/01/02 12:54:22 by opichou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "string.h"

t_list		*ft_lstforceadd(t_list **alst, t_list *new)
{
	t_list	*ptr;

	ptr = *alst;
	if (alst && new)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
		return (*alst);
	}
	else if (!alst && new)
		return (new);
	return (NULL);
}
