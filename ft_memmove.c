/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 11:24:02 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/15 19:10:43 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*casted_dest;
	char		*return_dest;
	const char	*casted_src;
	size_t		i;

	casted_dest = (char *) dest;
	casted_src = (const char *) src;
	return_dest = casted_dest;
	i = 0;
	while (i < n)
	{
		*casted_dest = *casted_src;
		i++;
		casted_dest++;
		casted_src++;
	}
	return (return_dest);
}

/*
int	main(void)
{
	//char	str1[11] = "hello there";
	//char	str2[10] = "hello";
	char	str3[11] = "hello there";

	//memmove(str1, str1 + 2, 3);
	//printf("memove: %s\n", str1);
	
	ft_memmove(str3 + 1, str3, 0);
	printf("ft_memove: %s\n", str3);
}
*/
