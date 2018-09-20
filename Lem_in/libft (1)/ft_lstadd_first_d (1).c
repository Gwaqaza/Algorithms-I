/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_first_d.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:54:26 by pmahele           #+#    #+#             */
/*   Updated: 2017/11/26 16:35:01 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_first_d(t_list **alst, void *content, size_t size)
{
	t_list		*new_link;

	new_link = (t_list*)malloc(sizeof(t_list));
	if (new_link)
	{
		new_link->content = content;
		new_link->content_size = size;
		new_link->next = NULL;
		if (*alst)
			new_link->next = *alst;
		*alst = new_link;
	}
}
