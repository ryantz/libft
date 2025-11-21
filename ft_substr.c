/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:04:46 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/21 15:36:19 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p_substr;
	size_t	i;

	p_substr = malloc(sizeof(char) * len + 1);
	i = 0;
	while (i < len)
	{
		p_substr[i] = s[start];
		i++;
		start++;
	}
	return (p_substr);
}

//int	main(void)
//{
//	char	*sub;
//	char const *s = "hello there stranger";
//	unsigned int start = 6;
//	size_t len = 12;
//	sub = ft_substr(s, start, len);
//	printf("%s\n", sub);
//	free(sub);
//	return (0);
//}
