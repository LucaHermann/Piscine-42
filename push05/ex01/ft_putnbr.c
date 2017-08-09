/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 03:50:40 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/20 17:34:55 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_intmin(void)
{
	ft_putchar("-2147483648");
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_intmin();
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else
		{
			ft_putchar(n + 48);
		}
	}
}
