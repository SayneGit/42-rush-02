/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ebauche.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:10:17 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/18 13:12:33 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "includes/ft_utils.h"
#include "includes/parsed.h"

typedef struct s_parsed t_parsed;

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_rev_int_tab(char *tab, int size)
{
	int		i;
	char	buffer;

	i = 0;
	buffer = 0;
	while (i < (size / 2))
	{
		buffer = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = buffer;
		i++;
	}
}

char	*ft_int_to_string(unsigned int parsed)
{
	t_parsed number;
	int				i;
	unsigned int	div;
	char			*number_string;

	(void) number;
	i = 0;
	number_string = malloc(sizeof(char) * (10 + 1));
	while (parsed >= 10)
	{
		number_string[i] =  (parsed % 10) + '0';
		parsed = parsed / 10;
		i++;
	}
	number_string[i] = (parsed % 10) + '0';
	ft_rev_int_tab(number_string, i + 1);
	return (number_string);
}

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	printf("%s", ft_int_to_string(123));
}
