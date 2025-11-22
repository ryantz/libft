/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:59:53 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/22 23:00:53 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim_front(char const *s, char c)
{
	int	offset;
	
	offset = 0;
	if (s[0] != c)
		return (0);
	while (s[offset])
	{
		if (s[offset] != c)
			break;
		offset++;
	}
	return (offset);
}

static int	ft_inner_malloc_size(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	s += ft_trim_front(s, c);
	count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] == c)
		count--;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**outer;
	int		num_elements;
	int		start;
	int		end;
	int		i;
	
	num_elements = ft_inner_malloc_size(s, c);
	outer = malloc(sizeof(char *) * (num_elements + 1));
	if (!outer)
		return (NULL);
	s += ft_trim_front(s, c);
	start = 0;
	end = 0;
	i = 0;
	while (s[end])
	{
		if (s[end] != c)
			end++;
		outer[i] = malloc(sizeof(char) * (end - start + 2));
	}
	return (outer);
}

int	main(void)
{
	//char	**arr;
	char const *s = ",,,,,,hello,,,,there,,you,,are,,,fool,,,,,,,";
	char c = ',';
	printf("%d\n", ft_inner_malloc_size(s, c));
	return (0);
}
