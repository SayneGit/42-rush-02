/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:45:44 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/18 17:28:15 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"
#include <stdio.h>

long int	ft_atoi(char *str)
{
	int			i;
	int			signe;
	long int	result;

	i = 0;
	signe = 1;
	result = 0;
	while ((str[i] == ' ') || ((str[i] >= 9 && str[i] <= 13)))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while ((str[i] >= 48 && str[i] <= 57) && str[i])
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if (signe == -1)
	{
		return (-1);
	}
	return (result * signe);
}
