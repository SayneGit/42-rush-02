/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 10:55:16 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/19 12:03:37 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

void	ft_find_zero(char **file_contents, int nbrzero)
{
	char	str[11];
	int		i;

	i = 1;
	str[0] = '1';
	while (i < nbrzero)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	ft_putstr(ft_search_letters(file_contents, str));
}

void	ft_find_digit(char **file_contents, char *number_string, int index)
{
	char	str[2];

	str[0] = number_string[index];
	str[1] = '\0';
	ft_putstr(ft_search_letters(file_contents, str));
}

void	ft_find_hundred(char **file_contents)
{
	char	str[4];

	str[0] = '1';
	str[1] = '0';
	str[2] = '0';
	str[3] = '\0';
	ft_putstr(ft_search_letters(file_contents, str));
}

void	ft_find_tens(char **file_contents, char *number_string, int index)
{
	char	str[3];

	str[0] = number_string[index];
	if (number_string[index] == '1')
	{
		str[1] = number_string[index + 1];
	}
	str[1] = '0';
	str[2] = '\0';
	ft_putstr(ft_search_letters(file_contents, str));
}
