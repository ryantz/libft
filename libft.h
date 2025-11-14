/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:30:54 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/14 21:22:30 by ryatan           ###   ########.fr       */
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
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_strcmp(char *s1, char *s2);

#endif
