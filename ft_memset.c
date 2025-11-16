/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:49:59 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/16 14:12:44 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*c_s;
	size_t	i;

	c_s = (char *)s;
	i = 0;
	while (i++ < n)
	{
		*c_s++ = c;
	}
	return (s);
}

//int	main(void)
//{
//	char	str[100] = "hello there";
//	ft_memset(str + 5, '.', 10);
//	printf("%s\n", str);
//	return (0);
//}
