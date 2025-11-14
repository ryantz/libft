/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:30:54 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/14 22:34:55 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h> // remove
# include <ctype.h> // remove

size_t	ft_strlen(const char *s);
int	ft_strcmp(char *s1, char *s2);

int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c);

int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
