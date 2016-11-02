/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/09 21:41:35 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/18 20:52:17 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(const char *str)
{
	int		res;
	int		n;

	n = 1;
	res = 0;
	while ((*str == ' ' || *str == '\t' || *str == '\n' || *str == 'v' ||
			*str == 'r' || *str == 'f'))
		str++;
	if (*str == '-')
	{
		n = -n;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res * n);
}
