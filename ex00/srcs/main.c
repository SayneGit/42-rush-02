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

/*int	main(int argc, char *argv)
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
					ft_putstr(result);
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
					ft_putstr(result);
			}
		}
		 char	*file_contents;

		if (argc == 2)
		{
			file_contents = ft_read_file(argv[1], O_RDONLY);
			ft_putstr(file_contents);
			free(file_contents);
		}
	}
	else
		printf(ARGS_ERROR);
}*/

int main(int argc, char **argv)
{
	char **dest;
  	int i;
  	i = 0;
	char *file_contents;

	file_contents = ft_read_file(argv[1], O_RDONLY);

  	if (argc == 2)
  	{
  		dest = ft_split(file_contents, "\n :");
  		while (dest[i])
  		{
  			printf("%s\n", dest[i]);
  			i++;
  		};
 	}
	free(file_contents);
	return 0;
}
