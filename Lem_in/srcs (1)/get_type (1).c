/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_type.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 15:47:40 by pmahele           #+#    #+#             */
/*   Updated: 2018/05/26 16:45:01 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lemin.h"

int		ft_return(int code, char ***values)
{
	ft_free2dsafe((void***)values);
	return (code);
}

int		get_type(char *line)
{
	int		i;
	int		j;
	char	**values;

	i = 0;
	j = 0;
	if (!(values = ft_split(line)))
		return (-1);
	if (values[0][0] == '#')
		return (ft_return(COMMENT, &values));
	else if (ft_2dcount(values) == 1 && ft_isalldigit(values[0]))
		return (ft_return(ANTCOUNT, &values));
	else if (ft_2dcount(values) == 1)
	{
		while (values[i][j] != '-')
			j++;
		if (values[i][j] == '-')
			return (ft_return(LINK, &values));
	}
	else if (ft_2dcount(values) == 3)
	{
		if (ft_isalldigit(values[1]) && ft_isalldigit(values[2]))
			return (ft_return(ROOM, &values));
	}
	return (ft_return(INVALID, &values));
}
