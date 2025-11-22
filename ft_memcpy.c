/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:48:49 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/22 20:42:56 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*c_dest;
	const unsigned char	*c_src;
	size_t		i;

	c_dest = (unsigned char *)dest;
	c_src = (unsigned const char *)src;
	i = 0;
	if ((c_dest < c_src + n) && (c_src < c_dest + n))
	{
		printf("OVERLAP\n");
		return (ft_memmove(dest, src, n));
	}
	while (i < n)
	{
		*c_dest++ = *c_src++;
		i++;
	}
	return (dest);
}

//int main(void) 
//{
//    char buf[50] = "ABCDEFGHIJKL";
//
//    ft_memcpy(buf, buf+3, 3);
//
//    printf("Result: %s\n", buf);
//    return 0;
//}
