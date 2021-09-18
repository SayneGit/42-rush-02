/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_char_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:23:13 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/18 15:40:11 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_char_tab(char *tab, int size)
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
