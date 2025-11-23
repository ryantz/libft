/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:07:44 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/23 23:56:30 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim_front(char const *s, char c)
{
	int	offset;

	offset = 0;
	while (s[offset])
	{
		if (s[offset] != c)
			break ;
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

static void	ft_free_all(char **outer, char const *s, char c)
{
	int	i;

	i = ft_inner_malloc_size(s, c);
	while (i--)
		free(outer[i]);
	free(outer);
}

static char	*ft_malloc_inner(char const *s, int start, int end)
{
	char	*split;
	int		i;

	split = malloc(sizeof(char) * (end - start + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (start < end)
		split[i++] = s[start++];
	split[i] = '\0';
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**outer;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = 0;
	i = 0;
	s += ft_trim_front(s, c);
	outer = malloc(sizeof(char *) * (ft_inner_malloc_size(s, c) + 1));
	if (!outer)
		return (NULL);
	while (i < ft_inner_malloc_size(s, c))
	{
		while (s[end] && s[end] != c)
			end++;
		outer[i] = ft_malloc_inner(s, start, end);
		if (!outer[i])
			return (ft_free_all(outer, s, c), NULL);
		while (s[end] && s[end] == c)
			end++;
		start = end;
		i++;
	}
	return (outer[i] = NULL, outer);
}

//int	main(void)
//{
//	char	**arr;
//	char const *s = ",ok,,,,,,hello,,,,there,,you,,are,,a,fool,,,,,,,";
//	char c = ',';
//	arr = ft_split(s, c);
//	int	i = 0;
//	while (i < ft_inner_malloc_size(s, c))
//	{
//		printf("%s\n", arr[i]);
//		i++;
//	}
//	ft_free_all(arr, s, c);
//	return (0);
//}
