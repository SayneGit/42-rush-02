/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:28:34 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/19 16:04:51 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

void	ft_num_as_letter(char **file_cont, char *num_str, int len, int i)
{
	if (len == 9 || len == 6 || len == 3)
	{
		ft_find_digit(file_cont, num_str, i);
		ft_hundred(file_cont);
	}
	if (len == 8 || len == 5 || len == 2)
		ft_tens(file_cont, num_str, i);
	if (len == 7 || len == 4 || len == 1)
		ft_find_digit(file_cont, num_str, i);
}

void	ft_algo(char **file_contents, char *number_string)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(number_string);
	while (number_string[i])
	{
		if (len > 9)
		{
			ft_find_digit(file_contents, number_string, index);
			ft_find_zeros(file_contents, 9);
		}
		else if (len > 6)
		{
			ft_num_as_letter(file_contents, number_string, len, i);
			ft_find_zeros(file_contents, 6);
		}
		else if (len > 3)
		{
			ft_num_as_letter(file_contents, number_string, len, i);
			ft_find_zeros(file_contents, 3);
		}
		else if (len > 0)
			ft_num_as_letter(file_contents, number_string, len, i);
		len--;
		i++;
	}
}
