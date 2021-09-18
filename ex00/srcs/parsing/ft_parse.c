/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:05:58 by bsouleau          #+#    #+#             */
/*   Updated: 2021/09/18 12:55:40 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/parsed.h"
#include "../../includes/ft_utils.h"

int	ft_parse(char *str)
{
	t_parsed		number;
	int				i;
	int				first_parse;
	unsigned int	output;

	first_parse = ft_atoi(str);
	output = first_parse;
	number.parsed = output;
	return (output);
}
