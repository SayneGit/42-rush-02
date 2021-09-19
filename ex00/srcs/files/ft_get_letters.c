/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_letters.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 08:19:22 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/19 17:27:02 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

char	*ft_get_letters(char *file_line)
{
	int		i;
	char	*out;

	i = 0;
	out = malloc(sizeof(char) * (ft_strlen(file_line) + 1));
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
