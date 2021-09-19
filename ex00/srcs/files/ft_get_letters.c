/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_letters.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 08:19:22 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/19 08:30:09 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

char	*ft_get_letters(char *str, int index)
{
	int		j;
	char	*out;

	j = 0;
	out = malloc(sizeof(char) * ft_strlen(str));
	if (!out)
		return (NULL);
	while (str[index] != '\n')
	{
		out[j] = str[index];
		j++;
		index++;
	}
	out[j] = '\0';
	return (out);
}
