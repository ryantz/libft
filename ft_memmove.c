/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 11:24:02 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/16 12:43:07 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp_arr;
	char		*c_dest;
	const char	*c_src;
	size_t		i;

	c_dest = (char *)dest;
	c_src = (const char *)src;
	temp_arr = malloc(sizeof(char) * n);
	i = 0;
	while (i < n)
	{
		temp_arr[i++] = *c_src++;
	}
	i = 0;
	while (i < n)
	{
		*c_dest++ = temp_arr[i++];
	}
	free(temp_arr);
	return (dest);
}

//int	main(void)
//{
//	char	str1[11] = "hello there";
//
//	ft_memmove(str1, str1 + 1, 5);
//	printf(" %s\n", str1);
//}
