/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelemin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:11:32 by pmahele           #+#    #+#             */
/*   Updated: 2018/05/26 14:46:44 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lemin.h"

void		ft_free2dsafee(void ***arr)
{
	int		i;
	void	**array;

	i = 0;
	array = *arr;
	if (array)
	{
		while (array[i])
		{
			free(array[i]);
			array[i] = NULL;
			i++;
		}
		free(*arr);
		*arr = NULL;
	}
}

void		ft_freerooms(t_room **rooms)
{
	int i;

	i = 0;
	while (rooms[i])
	{
		free(rooms[i]->name);
		free(rooms[i]->links);
		free(rooms[i]->ants);
		rooms[i]->name = NULL;
		rooms[i]->links = NULL;
		rooms[i]->ants = NULL;
		free(rooms[i]);
		rooms[i] = NULL;
		i++;
	}
	free(rooms);
	rooms = NULL;
}

void		ft_freeants(t_ant ***all_ants)
{
	ft_free2dsafee((void***)all_ants);
	*all_ants = NULL;
}
