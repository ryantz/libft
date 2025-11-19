/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 19:32:25 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/19 19:36:46 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

//int	main(void)
//{
//	const char *s = "hello there";
//	int c = '\0';
//	printf("strrchr: %s\n", strrchr(s, c));
//	printf("ft_strrchr: %s\n", ft_strrchr(s, c));
//	return (0);
//}
