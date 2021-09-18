/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:28:37 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/18 14:09:01 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../includes/ft_utils.h"

typedef struct s_parsed	t_parsed;

char	*ft_int_to_string(t_parsed number)
{
	int		i;
	char	*number_string;

	i = 0;
	number_string = malloc(sizeof(char) * (10 + 1));
	if (!number_string)
		return (NULL);
	while (number.parsed >= 10)
	{
		number_string[i] = (number.parsed % 10) + '0';
		number.parsed = number.parsed / 10;
		i++;
	}
	number_string[i] = (number.parsed % 10) + '0';
	ft_rev_int_tab(number_string, i + 1);
	return (number_string);
}
