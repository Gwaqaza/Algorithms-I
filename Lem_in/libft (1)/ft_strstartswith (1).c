/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartswith.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmahele <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 15:41:10 by pmahele           #+#    #+#             */
/*   Updated: 2017/09/16 15:41:12 by pmahele          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strstartswith(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s2[++i])
		if (s1[i] != s2[i])
			return (0);
	return (1);
}