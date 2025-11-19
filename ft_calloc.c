/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 21:56:11 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/19 22:19:03 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	char	*ret;
	char	*empty;

	if (nmemb == 0 || size == 0)
	{
		empty = malloc(1);
		empty[0] = '\0';
		return (empty);
	}
	if ((nmemb * size) > 2147483647)
		return (NULL);
	ret = malloc(nmemb * size);
	while (i <  size)
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}
