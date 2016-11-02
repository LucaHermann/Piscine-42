/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 22:25:14 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/23 01:54:12 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_separator(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\0')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int words;
	int i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_separator(str[i + 1]) == 1 && ft_separator(str[i]) == 0)
			words++;
		i++;
	}
	return (words);
}

void	ft_write_words(char *words, char *str)
{
	int i;

	i = 0;
	while (ft_separator(str[i]) == 0)
	{
		words[i] = str[i];
		i++;
	}
	words[i] = '\0';
}

void	ft_write_tab(char **tab, char *str)
{
	int i;
	int k;
	int word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (ft_separator(str[i]) == 0)
		{
			k = 0;
			while (ft_separator(str[i + k]) == 0)
				k++;
			tab[word] = (char*)malloc(sizeof(char) * (k + 1));
			ft_write_words(tab[word], (str + i));
			word++;
			i = i + k;
		}
		else
			i++;
	}
	tab[word] = (char*)malloc(sizeof(char) * 1);
	tab[word] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char			**tab;
	int				count;

	count = ft_count_words(str);
	tab = (char**)malloc(sizeof(char*) * (count + 1));
	ft_write_tab(tab, str);
	return (tab);
}
