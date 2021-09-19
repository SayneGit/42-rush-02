/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_files.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 14:21:29 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/18 15:36:50 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_utils.h"

int	ft_len_file(int file)
{
	char	*file_contents;
	int		return_value;
	int		lenght;

	lenght = 0;
	file_contents = malloc(4096);
	if (!file_contents)
		return (0);
	return_value = read(file, file_contents, 4096);
	while (return_value > 0)
	{
		lenght += ft_strlen(file_contents);
		return_value = read(file, file_contents, 4096);
	}
	free(file_contents);
	close(file);
	return (lenght + 1);
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
	int		return_value;
	char	*buffer;
	int		file;

	file = ft_open_file(file_name, flag);
	file_contents = malloc(sizeof(char) * ft_len_file(file));
	if (!file_contents)
		return (NULL);
	buffer = malloc(4096);
	if (!buffer)
		return (NULL);
	return_value = read(file, buffer, 4096);
	ft_strcpy(file_contents, buffer);
	free(buffer);
	close(file);
	return (file_contents);
}
