/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 20:16:22 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/19 21:33:13 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dst[i] = src[i];
		i++;
	}
	return (ft_strlen(src) - 1);
}

//int	main(void)
//{
//	char	str1[12] = "hello there";
//	char	str2[12];
//
//	//printf("%zu\n", strlen(str1));
//	printf("%zu\n", ft_strlcpy(str2, str1, 0));
//	//strlcpy(str2, str1, 0);
//	//ft_strlcpy(str2, str1, 10);
//	//printf("%s\n", str2);
//	return (0);
//}
