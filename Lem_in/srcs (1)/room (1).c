/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   room.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:43:40 by pmahele           #+#    #+#             */
/*   Updated: 2018/05/26 16:44:37 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lemin.h"

void	ft_swap(t_room **rooms, int *i, int *flag)
{
	t_room	*temp;

	temp = rooms[*i];
	rooms[*i] = rooms[*i + 1];
	rooms[*i + 1] = temp;
	*flag = 1;
	(*i)--;
}

void	sort_rooms(t_room **rooms)
{
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (flag)
	{
		flag = 0;
		while (rooms[i])
		{
			if (rooms[i + 1])
				if (rooms[i]->cost < rooms[i + 1]->cost)
					ft_swap(rooms, &i, &flag);
			i++;
		}
		i = 0;
	}
}

int		room_count(char **map)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (map[i])
	{
		if (get_type(map[i]) == ROOM)
			count++;
		i++;
	}
	return (count);
}

int		index_of_room(t_room **rooms, char *name)
{
	int i;

	i = 0;
	if (rooms)
	{
		while (rooms[i])
		{
			if (ft_strcmp(rooms[i]->name, name) == 0)
				return (i);
			i++;
		}
	}
	return (-1);
}

t_room	*create_room(char *line)
{
	t_room	*room;
	char	**values;

	if (!(room = (t_room*)malloc(sizeof(t_room))))
		return (NULL);
	if (!(values = ft_split(line)))
		return (NULL);
	if (values[0] && values[1] && values[2])
	{
		room->name = ft_strdup(values[0]);
		room->ants = NULL;
		room->cost = -1;
		room->links = NULL;
		room->options_from = 0;
		room->options_to = 0;
	}
	ft_free2dsafe((void***)&values);
	return (room);
}
