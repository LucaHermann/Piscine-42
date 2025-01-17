/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 21:00:19 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/10 21:07:51 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int a;

	a = 0;
	i = 0;
	while (a < nb)
	{
		i++;
		a = i * i;
	}
	if (a != nb)
		return (0);
	else
		return (i);
}
