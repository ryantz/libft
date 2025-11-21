/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:58:34 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/21 20:17:48 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_len_of_int(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		in_len;
	int		i;
	char	*stringify;
	char	rem;

	in_len = ft_count_len_of_int(n);
	stringify = malloc(sizeof(char) * in_len + 1);
	if (!stringify)
		return (NULL);
	i = in_len - 1;
	while (n != 0)
	{
		rem = (n % 10) + '0';
		stringify[i] = rem;
		n /= 10;
		i--;
	}
	stringify[in_len] = '\0';
	return (stringify);
}

//int	main(void)
//{
//	int	n = 1001123;
//	char	*string;
//	string = ft_itoa(n);
//	printf("%s\n", string);
//	free(string);
//	return (0);
//}
