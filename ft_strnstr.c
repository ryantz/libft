/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 19:38:01 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/19 21:35:22 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	const char	*dp_big;
	const char	*dp_little;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && *big != '\0')
	{
		dp_big = big;
		dp_little = little;
		while ((*dp_big != '\0') && (*dp_little != '\0')
			&& (*dp_big == *dp_little))
		{
			printf("inz\n");
			dp_big++;
			dp_little++;
		}
		if (*dp_little == '\0')
			return ((char *)(dp_big - ft_strlen(little) + 1));
		big++;
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	const char *big = "hello there human";
//	const char *small = "the";
//	printf("%s\n", strnstr(big, small, 9));
//	printf("%s\n", ft_strnstr(big, small, 9));
//	return (0);
//}
