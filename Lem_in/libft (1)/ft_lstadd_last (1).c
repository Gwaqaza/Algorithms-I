/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:54:42 by pmahele           #+#    #+#             */
/*   Updated: 2017/11/26 15:56:24 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_last(t_list **alst, t_list *link)
{
	t_list	*current;

	current = *alst;
	if (*alst)
	{
		while (current->next)
			current = current->next;
		current->next = link;
	}
	else
		*alst = link;
}
