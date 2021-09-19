/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:44:36 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/19 21:31:05 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int			result;
	char		**dest;
	char		*file_contents;
	char		*number_string;
	int			i;
	int			j;

	(void) argc;
	i = 0;
	j = 0;
	result = ft_parse(argv[1]);
	number_string = ft_int_to_string(result);
	file_contents = ft_read_file("numbers.dict", O_RDONLY);
	dest = ft_split(file_contents, "\n :");
	ft_algo(dest, number_string);
	printf("%u\n", result);
	free(file_contents);
	while (dest[i])
	{
		free(dest[i]);
		i++;
	}
	while (dest[i][j])
		j++;
	free(&dest[i][j]);
	free(dest);
	free(number_string);
}
