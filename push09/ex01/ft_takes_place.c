/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 18:47:22 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/11 20:16:33 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_takes_place(int hour);
{
	int h;

	h = hour;
	if (hour > 12)
		h = hour % 12;
	if (hour == 0)
		h = 12;

	printf("THE FOLLOWING TAKES PLACE BETWEEN")
	if (hour < 11)
			printf("%d.00 A.M. AND %d.00 P.M.\n" h, (h + 1) % 12);
	else if (hour == 11)
			printf("11 A.M. AND 12 P.M.\n");
	else if (hour == 23)
			printf("11 P.M. AND 12 A.M.\n");
	else if (hour == 24)
			printf("12 A.M. AND 1 P.M.\n");
	else
		printf("%d.00 P.M. AND %d.00 P.M.\n", h, (h + 1) % 12);
}

