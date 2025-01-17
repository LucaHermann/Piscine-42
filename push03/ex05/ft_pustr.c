/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 00:37:04 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/09 14:20:01 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != "\0")
	{
		ft_putchar(str[a]);
		a++;
	}
	return (a);
}
