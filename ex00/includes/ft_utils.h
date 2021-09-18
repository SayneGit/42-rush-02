/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:42:25 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/18 14:35:08 by bsouleau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_parsed
{
	int	parsed;
}				t_parsed;

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_parse(char *str);
int		ft_check_parsing_error(int i);
int		ft_open_file(char *file_name, int flag);

char	*ft_int_to_string(t_parsed number);
char	*ft_rev_char_tab(char *tab, int i);
char	**ft_split(char *str, char *charset);
char	*ft_strcpy(char *dest, char *src);
char	*ft_read_file(char *file_name, int flag);

# define ARGS_ERROR		"Error\n"
# define DICT_ERROR		"Dict Error\n"

#endif
