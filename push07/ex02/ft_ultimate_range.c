/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 19:35:37 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/21 19:54:08 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	if (max < min)
		return (0);
	i = 0;
	tab = (int *)malloc(sizeof(int) * (max - min));
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
