/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:21:29 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/19 21:28:22 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

int	ft_len_file(int file)
{
	char	*file_contents;
	int		return_value;
	int		lenght;

	file_contents = malloc(4096);
	if (!file_contents)
		return (0);
	return_value = read(file, file_contents, 4096);
	lenght = return_value;
	while (return_value > 0)
	{
		return_value = read(file, file_contents, 4096);
		lenght += return_value;
	}
	free(file_contents);
	close(file);
	return (lenght);
}

int	ft_open_file(char *file_name, int flag)
{
	int	file;

	file = open(file_name, flag);
	if (file == -1)
	{
		ft_putstr(DICT_ERROR);
		return (file);
	}
	return (file);
}

char	*ft_read_file(char *file_name, int flag)
{
	char	*file_contents;
	// int		return_value;
	int		file;
	int		file_lenght;

	file = ft_open_file(file_name, flag);
	file_lenght = ft_len_file(file);
	close(file);
	file = ft_open_file(file_name, flag);
	file_contents = malloc(sizeof(char) * (file_lenght + 1));
	if (!file_contents)
		return (NULL);
	// return_value = read(file, file_contents, file_lenght);
	file_contents[file_lenght] = 0;
	close(file);
	return (file_contents);
}
