/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_digit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 10:55:16 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/19 10:58:23 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

void	ft_find_digit(char **file, char *number_string, int index)
{
	char	str[2];

	str[0] = number_string[index];
	str[1] = '\0';
	ft_putstr(ft_search_letters(file, str));
}
