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

void	ft_check_args(char **argv, int i)
{
	int			result;

	ft_parse(argv[i]);
	result = ft_parse(argv[i]);
	if (!ft_check_parsing_error(result))
		ft_putstr(ARGS_ERROR);
}

char	**ft_args(char **argv, int y)
{
	t_parsed	parsed;
	char		**dest;
	char		*file_contents;
	char		*number_string;
	int			i;

	i = 0;
	ft_check_args(argv, y);
	number_string = ft_int_to_string(parsed.parsed);
	file_contents = ft_read_file("numbers.dict", O_RDONLY);
	dest = ft_split(file_contents, "\n :");
	free(file_contents);
	return (dest);
}

int	main(int argc, char **argv)
{
	t_parsed	parsed;

	if (argc == 2)
	{
		ft_algo(ft_args(argv, 1), ft_int_to_string(parsed.parsed));
	}
	else if (argc == 3)
	{
		ft_algo(ft_args(argv, 2), ft_int_to_string(parsed.parsed));
	}
	else
		ft_putstr(ARGS_ERROR);
	return (0);
}
