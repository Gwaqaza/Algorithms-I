/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 17:20:58 by pmahele           #+#    #+#             */
/*   Updated: 2017/06/12 17:43:04 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*k_track;
	t_list		*tracked;

	if (!alst || !*alst)
		return ;
	tracked = *alst;
	while (tracked)
	{
		k_track = tracked->next;
		ft_lstdelone(&tracked, del);
		tracked = k_track;
	}
	*alst = NULL;
}
