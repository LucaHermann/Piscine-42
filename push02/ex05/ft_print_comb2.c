/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 23:43:24 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/09 04:01:23 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (4)
	{
		if (a < b)
		{
			ft_putnbr(a, b);
			if (a == 98 && b == 99)
				break ;
			ft_putchar(',');
			ft_putchar(' ');
		}
		b++;
		if (b > 99)
		{
			b = 0;
			a++;
		}
	}
}
