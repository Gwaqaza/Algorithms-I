/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:53:03 by pmahele           #+#    #+#             */
/*   Updated: 2017/11/26 15:53:05 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_free(t_list **list)
{
	t_list	*next;
	t_list	*current;

	current = *list;
	while (current)
	{
		next = current->next;
		free(current->content);
		current->content = NULL;
		free(current);
		current = next;
	}
	current = NULL;
}
