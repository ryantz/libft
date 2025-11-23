/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */ /*                                                    +:+ +:+         +:+     */
/*   By: ryatan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:59:53 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/23 16:40:20 by ryatan           ###   ########.fr       */
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

	i = 0;
	while (i < ft_inner_malloc_size(s, c))
	{
		free(outer[i]);
		i++;
	}
	free(outer);
}


char	**ft_split(char const *s, char c)
{
	char	**outer;
	int		start;
	int		end;
	int		i;
	int		j;

	outer = malloc(sizeof(char *) * (ft_inner_malloc_size(s, c) + 1));
	if (!outer)
		return (NULL);
	s += ft_trim_front(s, c);
	start = 0;
	end = 0;
	i = 0;
	while (s[end] && i < ft_inner_malloc_size(s, c))
	{
		while (s[end] != c)
			end++;
		outer[i] = malloc(sizeof(char) * (end - start + 1));
		if (!outer[i])
			return (ft_free_all(outer, s, c), NULL);
		j = 0;
		while (start < end)
			outer[i][j++] = s[start++];
		outer[i++][j] = '\0';
		while (s[end] == c)
			end++;
		start = end;
	}
	outer[i] = NULL;
	return (outer);
}

//int	main(void)
//{
//	char	**arr;
//	char const *s = ",,,,,,hello,,,,there,,you,,are,,a,fool,,,,,,,";
//	char c = ',';
//	//printf("%d\n", ft_inner_malloc_size(s, c));
//	arr = ft_split(s, c);
//	int	i = 0;
//	while (i < ft_inner_malloc_size(s, c) + 1)
//	{
//		printf("%s\n", arr[i]);
//		i++;
//	}
//	ft_free_all(arr, s, c);
//	return (0);
//}
