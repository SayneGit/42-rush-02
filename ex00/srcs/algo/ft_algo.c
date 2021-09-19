/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 15:28:34 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/19 21:24:34 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

void	ft_num_as_letter(char **file_cont, char *num_str, int len, int i)
{
	if (num_str[i] != '0')
	{
		if (len == 9 || len == 6 || len == 3)
		{
			ft_find_digit(file_cont, num_str, i);
			ft_find_hundred(file_cont);
		}
		if (len == 8 || len == 5 || len == 2)
			ft_find_tens(file_cont, num_str, i);
		if ((len == 7 || len == 4 || len == 1) && num_str[i - 1] != '1')
			ft_find_digit(file_cont, num_str, i);
	}
}

void	ft_check(char **file_contents, char *number_string, int i, unsigned int loops)
{
	int	len;

	len = ft_strlen(number_string) - i;
	if (len > 9)
	{
		ft_find_digit(file_contents, number_string, i);
		ft_find_zeros(file_contents, 9);
	}
	else if (len > 6)
	{
		ft_num_as_letter(file_contents, number_string, len, i);
		if (loops == 0)
			ft_find_zeros(file_contents, 6);
	}
	else if (len > 3)
	{
		ft_num_as_letter(file_contents, number_string, len, i);
		if (loops == 0)
			ft_find_zeros(file_contents, 3);
	}
	else if (len > 0)
		ft_num_as_letter(file_contents, number_string, len, i);
}

void	ft_algo(char **file_contents, char *number_string)
{
	t_count count;
	int	i;
	int	len;

	count.count = 0;
	i = -1;
	len = ft_strlen(number_string);
	while (number_string[++i])
	{
		ft_check(file_contents, number_string, i, count.count);
		count.count += 1;
		if (count.count == 1 && len > 9)
			count.count = 0;
		if (len == 6 || len == 3)
			count.count = 0;
		len--;
	}
}
