/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ebauche.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:44:47 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/18 18:30:33 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_utils.h"
#include "numbers.dict"
#include <stdio.h>

void	ft_find_digit(char *number_string, int index)
{
	char	*str;

	str[0] = number_string[index];
	str[1] = ':';
	ft_strstr(number_string[i]);
}

void	ebauche(char *file_contents, char *number_string)
{
	//Apres avoir cree file contents et fait appel a int to string
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(number_string);
	while (number_string[i])
	{
		if (len > 9)
		{
			ft_find_digit(number_string[i]);
			ft_find_zeros(9 - i);
		}
		else if (len > 6)
		{
			if (len == 9)
			{
				ft_find_digit(number_string[i]);
				ft_hundreds(number_string[i]);
			}
			if (len == 8)
				ft_tens(number_string[i]);
			if (len == 7)
				ft_find_digit(number_string[i]);
		}
		else if (len > 3)
			if (len == 6)
			{
				ft_find_digit(number_string[i]);
				ft_hundreds(number_string[i]);
			}
			if (len == 5)
				ft_tens(number_string[i]);
			if (len == 4)
				ft_find_digit(number_string[i]);
		else if (len > 0)
			if (len == 3)
			{
				ft_find_digit(number_string[i]);
				ft_hundreds(number_string[i]);
			}
			if (len == 2)
				ft_tens(number_string[i]);
			if (len == 1)
				ft_find_digit(number_string[i]);
		len--;
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*file_contents;
	char	**split_result;
	ft_open_file(argv[1], O_RDONLY);
	file_contents = ft_read_file(argv[1], O_RDONLY);

	split_result = ft_split(file_contents, " ");
	printf("%s", split_result[0]);
	free(file_contents);
	free(split_result);
}
