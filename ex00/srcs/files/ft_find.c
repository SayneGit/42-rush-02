/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 10:55:16 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/19 17:28:18 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

void	ft_find_zeros(char **file_contents, int nbrzero)
{
	char	str[11];
	int		i;
	char	*letters;

	i = 1;
	str[0] = '1';
	letters = ft_search_letters(file_contents, str);
	while (i <= nbrzero)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	if (letters != 0)
	{
		ft_putstr(letters);
		ft_putchar(' ');
		free(letters);
	}
	else
	{
		free(letters);
		ft_putstr(DICT_ERROR);
	}
}

void	ft_find_digit(char **file_contents, char *number_string, int index)
{
	char	str[2];
	char	*letters;

	str[0] = number_string[index];
	str[1] = '\0';
	letters = ft_search_letters(file_contents, str);
	if (letters != 0)
	{
		ft_putstr(letters);
		ft_putchar(' ');
		free(letters);
	}
	else
	{
		free(letters);
		ft_putstr(DICT_ERROR);
	}
}

void	ft_find_hundred(char **file_contents)
{
	char	str[4];
	char	*letters;

	str[0] = '1';
	str[1] = '0';
	str[2] = '0';
	str[3] = '\0';
	letters = ft_search_letters(file_contents, str);
	if (letters != 0)
	{
		ft_putstr(letters);
		ft_putchar(' ');
		free(letters);
	}
	else
	{
		free(letters);
		ft_putstr(DICT_ERROR);
	}
}

void	ft_find_tens(char **file_contents, char *number_string, int index)
{
	char	str[3];
	char	*letters;

	str[0] = number_string[index];
	if (number_string[index] == '1')
	{
		str[1] = number_string[index + 1];
	}
	str[1] = '0';
	str[2] = '\0';
	letters = ft_search_letters(file_contents, str);
	if (letters != 0)
	{
		ft_putstr(letters);
		ft_putchar(' ');
		free(letters);
	}
	else
	{
		free(letters);
		ft_putstr(DICT_ERROR);
	}
}
