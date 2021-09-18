/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ebauche.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgarcia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:44:47 by rgarcia           #+#    #+#             */
/*   Updated: 2021/09/18 19:38:53 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_utils.h"
/*#include "numbers.dict"*/
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strcopy_to_newline_from_index(char *str, int index)
{
	int		j;
	char	*out;

	j = 0;
	out = malloc(sizeof(char) * ft_strlen(str));
	if (!out)
		return (NULL);
	while(str[index] != '\n')
	{
		out[j] = str[index];
		j++;
		index++;
	}
	out[j] = '\0';
	return (out);
}

char	*ft_search_letters(char *split_result, char *to_find)
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
		while (str[i])
		{
			j = 0;
			while ((str[i + j] == to_find[j]) && to_find[j] && str[i + j])
				j++;
			if (j == tofind_len)
				return (ft_strcopy_to_newline_from_index(split_result, i));
			i++;
		}
		return (0);
	}
	return (str);
}

/*void	ft_find_digit(char *number_string, int index)
{
	char	*str;

	str[0] = number_string[index];
	str[1] = ':';
	ft_search_letters(number_string[i]);
}

void	ebauche(char *file_contents, char *number_string)
{
	//Apres avoir cree file contents et fait appel a int to string
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(number_string);
	while (number_string[i])
	{
		if (len > 9)
		{
			ft_find_digit(number_string[i]);
			ft_find_zeros(9 - i);
		}
		else if (len > 6)
		{
			if (len == 9)
			{
				ft_find_digit(number_string[i]);
				ft_hundreds(number_string[i]);
			}
			if (len == 8)
				ft_tens(number_string[i]);
			if (len == 7)
				ft_find_digit(number_string[i]);
		}
		else if (len > 3)
			if (len == 6)
			{
				ft_find_digit(number_string[i]);
				ft_hundreds(number_string[i]);
			}
			if (len == 5)
				ft_tens(number_string[i]);
			if (len == 4)
				ft_find_digit(number_string[i]);
		else if (len > 0)
			if (len == 3)
			{
				ft_find_digit(number_string[i]);
				ft_hundreds(number_string[i]);
			}
			if (len == 2)
				ft_tens(number_string[i]);
			if (len == 1)
				ft_find_digit(number_string[i]);
		len--;
		i++;
	}
}*/

int	main(int argc, char **argv)
{
	/*char	*file_contents;
	char	**split_result;
	ft_open_file(argv[1], O_RDONLY);
	file_contents = ft_read_file(argv[1], O_RDONLY);

	split_result = ft_split(file_contents, " ");
	printf("%s", split_result[0]);
	free(file_contents);
	free(split_result);*/

	(void)argc;
	(void)argv;
	char	*str = "0:zero\n";
	char	*tofind;
	int	i = 2;
	printf("%s", ft_strcopy_to_newline_from_index(str, i));
	printf("%s", ft_search_letters(str,
}
