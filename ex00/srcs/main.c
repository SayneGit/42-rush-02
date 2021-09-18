/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:44:36 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/18 17:34:49 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	unsigned int	result;
	char			*max;

	max = "4294967295";
	(void) argc;
	(void) argv;
	if (!(argc == 1))
	{
		if (argc == 2)
		{
			if (argv[1] == max)
			{
				ft_putstr(ARGS_ERROR);
				return (0);
			}
			else
			{
				result = ft_parse(argv[1]);
				if (!ft_check_parsing_error(result))
					ft_putstr(ARGS_ERROR);
				else
					printf("%u\n", result);
			}
		}
		if (argc == 3)
		{
			if (argv[2] == max)
			{
				ft_putstr(ARGS_ERROR);
				return (0);
			}
			else
			{
				result = ft_parse(argv[2]);
				if (!ft_check_parsing_error(result))
					ft_putstr(ARGS_ERROR);
				else
					printf("%u\n", result);
			}
		}
		/* char	*file_contents;

		if (argc == 2)
		{
			file_contents = ft_read_file(argv[1], O_RDONLY);
			ft_putstr(file_contents);
			free(file_contents);
		}*/
	}
	else
		printf(ARGS_ERROR);
}
