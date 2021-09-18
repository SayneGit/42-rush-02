/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:44:36 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/18 14:27:53 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	result;

	(void) argc;
	(void) argv;
	result = ft_parse("-123456");
	if (!ft_check_parsing_error(result))
		ft_putstr(ARGS_ERROR);
	else
		printf("%d\n", result);
}
