/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:44:36 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/19 11:44:08 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"
#include <stdio.h>

void	ft_check_args(int argc, char *argv[])
{
	int			result;

	if (argc == 2)
	{
		ft_parse(argv[2]);
		result = ft_parse(argv[2]);
		if (!ft_check_parsing_error(result))
			ft_putstr(ARGS_ERROR);
	}
}

int	main(int argc, char **argv)
{
	t_parsed	parsed;
	char		**dest;
	char		*file_contents;
	char		*number_string;
	int			i;

	i = 0;
	file_contents = ft_read_file(argv[1], O_RDONLY);
	if (argc == 2)
	{
		ft_check_args(argc, argv);
		number_string = ft_int_to_string(parsed.parsed);
		dest = ft_split(file_contents, "\n :");
		while (dest[i])
		{
			printf("%s\n", dest[i]);
			i++;
		}	
	}
	free(file_contents);
	return (0);
}

/* ft_algo(dest, number_string) */
