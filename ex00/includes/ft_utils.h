/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouleau <bsouleau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:42:25 by pcadiet           #+#    #+#             */
/*   Updated: 2021/09/19 16:03:53 by rgarcia          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_parsed
{
	unsigned int	parsed;
}				t_parsed;

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_find_digit(char **file_contents, char *number_string, int index);
void		ft_find_hundred(char **file_contents);
void		ft_find_zeros(char **file_contents, int nbrzero);
void		ft_find_tens(char **file_contents, char *number_string, int index);
void		ft_num_as_letter(char **file_cont, char *num_str, int len, int i);
void		ft_algo(char **file_contents, char *number_string);

long int	ft_atoi(char *str);
long int	ft_parse(char *str);
long int	ft_check_parsing_error(int i);

int			ft_open_file(char *file_name, int flag);
int			ft_strcmp(char *s1, char *s2);
int			ft_strlen(char *str);

char		*ft_get_letters(char *file_line);
char		*ft_search_letters(char **file, char *to_find);
char		*ft_rev_char_tab(char *tab, int size);
char		*ft_int_to_string(unsigned int number);
char		*ft_strcpy(char *dest, char *src);
char		*ft_read_file(char *file_name, int flag);
char		**ft_split(char *str, char *charset);

# define ARGS_ERROR		"Error\n"
# define DICT_ERROR		"Dict Error\n"
# define MAX_UI			"4294967295"

#endif
