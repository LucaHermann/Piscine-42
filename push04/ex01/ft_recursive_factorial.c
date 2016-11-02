/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 20:28:05 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/10 20:33:24 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nc)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
