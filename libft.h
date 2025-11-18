/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:30:54 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/18 20:14:46 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <bsd/string.h>
# include <stdio.h> // remove

void	ft_bzero(void *s, size_t n);

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);

void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);

size_t	ft_strlen(const char *s);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strstr(const char *haystack, const char *needle);


int		ft_tolower(int c);
int		ft_toupper(int c);

int		ft_atoi(const char *nptr);

#endif
