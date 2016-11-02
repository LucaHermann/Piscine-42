/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 18:01:08 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/21 20:02:33 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (max < min)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (max > min)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
