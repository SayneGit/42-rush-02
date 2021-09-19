/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_letters.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 08:31:43 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/19 08:32:32 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

char	*ft_search_letters(char *file, char *to_find)
{
	int		i;
	int		j;
	int		tofind_len;

	tofind_len = 0;
	while (to_find[tofind_len])
		tofind_len++;
	i = 0;
	if (to_find[i])
	{
		while (file[i])
		{
			j = 0;
			while ((file[i + j] == to_find[j]) && to_find[j] && file[i + j])
				j++;
			if (j == tofind_len)
				return (ft_get_letters(file, i + j));
			i++;
		}
		return (0);
	}
	return (0);
}
