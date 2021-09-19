/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_letters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 08:31:43 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/19 11:05:04 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

char	*ft_search_letters(char **file, char *to_find)
{
	int		i;
	int		len;
	int		tofind_len;

	i = 0;
	len = 0;
	tofind_len = 0;
	while (to_find[tofind_len])
		tofind_len++;
	while (file[len])
		len++;
	if (to_find[i])
	{
		while (i < len - 1)
		{
			if (ft_strcmp(file[i], to_find) == 0)
				return (ft_get_letters(file[i + 1]));
			i++;
		}
		return (0);
	}
	return (0);
}
