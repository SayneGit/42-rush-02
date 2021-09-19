/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:44:36 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/19 16:05:29 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"
#include <stdio.h>

void	ft_check_args(int argc, char **argv, int i)
{
	int			result;

	ft_parse(argv[i]);
	result = ft_parse(argv[i]);
	if (!ft_check_parsing_error(result))
		ft_putstr(ARGS_ERROR);
}

void	ft_args(int argc, char **argv, int y)
{
	t_parsed	parsed;
	char		**dest;
	char		*file_contents;
	char		*number_string;
	int			i;

	i = 0;
	ft_check_args(argc, argv, y);
	number_string = ft_int_to_string(parsed.parsed);
	dest = ft_split(file_contents, "\n :");
	while (dest[i])
	{
		printf("%s\n", dest[i]);
		i++;
	}
	free(file_contents);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_args(argc, argv, 2);
	else if (argc == 3)
		ft_args(argc, argv, 3);
	else
		ft_putstr(ARGS_ERROR);
	return (0);
}

/* ft_algo(dest, number_string) */
