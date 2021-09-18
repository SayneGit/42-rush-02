/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:42:25 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/18 14:31:05 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		ft_parse(char *str);
int		ft_check_parsing_error(int i);

char	*ft_int_to_string(t_parsed number);
char	*ft_rev_int_tab(char *tab, int i);
char	**ft_split(char *str, char *charset);

typedef struct s_parsed
{
	int	parsed;
}				t_parsed;

# define ARGS_ERROR		"Error\n"
# define DICT_ERROR		"Dict Error\n"

#endif
