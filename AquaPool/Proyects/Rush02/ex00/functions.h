/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apavel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:39:00 by apavel            #+#    #+#             */
/*   Updated: 2019/12/01 20:09:16 by apavel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

int		get_dictionary_size(void);
char	*get_data_from_file(void);
char	*trim_spaces(char *from, char *to);
int		validate_input(char *str);
int		validate_dictionary(char *str);
void	search(char *str, char *input);
void	print_number(char *str);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s3, unsigned int n);
char	*ft_strstr(char *str, char *to_find);

#endif
