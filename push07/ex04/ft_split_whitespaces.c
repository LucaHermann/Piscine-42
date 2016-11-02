/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 12:17:50 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/23 01:55:25 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int			calc_words_nb(char *str)
{
	int		word;
	int		i;

	i = 0;
	word = 0;
	while (str[i] <= 32)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] <= 32)
		{
			word++;
			while (str[i] <= 32)
				i++;
		}
		else
			i++;
	}
	printf("%d\n", word);
	return (word);
}

void		ft_split_whitespaces(char *str)
{
	int		i;
	int		nb_words;
	int		tab[10];
	char	**string;
	char	*temp;

	i = 0;
	nb_words = calc_words_nb(str);
	string = (char**)malloc(sizeof(*string) * (nb_words + 1));
	while (i < nb_words)
	{
		string[i] = (char*)malloc(sizeof(*temp) * (tab[i] + 1));
		i++;
	}
}

int		main(void)
{
	ft_split_whitespaces("coucou papa comment ca va bien a la maison");
	return (0);
}
