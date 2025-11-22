/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 11:24:02 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/22 11:06:14 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		temp_arr[1024];
	unsigned char		*c_dest;
	const unsigned char	*c_src;
	size_t		i;

	c_dest = (unsigned char *)dest;
	c_src = (const unsigned char *)src;
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
	return (dest);
}

//int	main(void)
//{
//	unsigned char	str1[11] = "unsigned char there";
//
//	ft_memmove(str1, str1 + 1, 5);
//	printf(" %s\n", str1);
//}
