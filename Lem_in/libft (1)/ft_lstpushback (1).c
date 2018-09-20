/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 11:40:47 by pmahele           #+#    #+#             */
/*   Updated: 2017/09/16 16:12:32 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushback(t_list **blst, void const *content,
		size_t content_size)
{
	t_list	*list;

	list = *blst;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = ft_lstnew(content, content_size);
	}
	else
		*blst = ft_lstnew(content, content_size);
}
