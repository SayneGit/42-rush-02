/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_letters.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 08:19:22 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/19 10:33:34 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

char	*ft_get_letters(char *file_line)
{
	int		i;
	char	*out;

	i = 0;
	out = malloc(sizeof(char) * ft_strlen(file_line));
	if (!out)
		return (NULL);
	while (file_line[i])
	{
		out[i] = file_line[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
