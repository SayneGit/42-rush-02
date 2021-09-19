/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:57:07 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/19 17:13:02 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

long int	ft_parse(char *str)
{
	long int		first_parse;

	first_parse = ft_atoi(str);
	if (!(first_parse == -1))
	{
		return (first_parse);
	}
	return (-1);
}
