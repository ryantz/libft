/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 23:18:45 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/18 20:07:48 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*dp_haystack;
	const char	*dp_needle;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0')
	{
		dp_haystack = haystack;
		dp_needle = needle;
		while ((*dp_haystack != '\0') && (*dp_needle != '\0')
			&& (*dp_haystack == *dp_needle))
		{
			dp_haystack++;
			dp_needle++;
		}
		if (*dp_needle == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

//int	main(void)
//{
//	const char *haystack = "hello heon there";
//	const char *needle = "zz";
//	//printf("%s\n", strstr(haystack, needle));
//	printf("%s\n", ft_strstr(haystack, needle));
//	return(0);
//}
