/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_to_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:28:37 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/19 09:43:30 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../includes/ft_utils.h"

typedef struct s_parsed	t_parsed;

char	*ft_int_to_string(unsigned int number)
{
	int		i;
	char	*number_string;

	i = 0;
	number_string = malloc(sizeof(char) * (10 + 1));
	if (!number_string)
		return (NULL);
	while (number >= 10)
	{
		number_string[i] = (number % 10) + '0';
		number = number / 10;
		i++;
	}
	number_string[i] = (number % 10) + '0';
	ft_rev_char_tab(number_string, i + 1);
	return (number_string);
}
