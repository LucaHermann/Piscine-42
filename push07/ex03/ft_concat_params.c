/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhermann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 19:59:29 by lhermann          #+#    #+#             */
/*   Updated: 2016/08/22 13:41:15 by lhermann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*norme(char **argv, char *params)
{
	int e;
	int i;
	int j;

	e = 0;
	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			params[e] = argv[i][j];
			e++;
			j++;
		}
		if (argv[i + 1])
			params[e] = '\n';
		i++;
		e++;
		j = 0;
	}
	params[e - 1] = '\0';
	return (params);
}

int		length(int argc, char **argv)
{
	int i;
	int j;
	int length;

	i = 1;
	j = 0;
	length = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			length++;
			j++;
		}
		j = 0;
		i++;
	}
	return (length);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*params;

	params = (char*)malloc(sizeof(char) * ((length(argc, argv) + argc - 1)));
	if (params == NULL)
		return (0);
	return (norme(argv, params));
}
