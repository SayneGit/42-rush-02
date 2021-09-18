/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:05:58 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/18 11:53:58 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "parsed.h"

int	ft_parse(char *str)
{
	t_parsed		number;
	int				i;
	int				first_parse;
	unsigned int	output;

	first_parse = ft_atoi(str);
	if (first_parse < 0)
	{
		ft_putstr("Error");
		return (0);
	}
	output = first_parse;
	number.parsed = output;
	return (output);
}
