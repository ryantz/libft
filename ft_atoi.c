/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 22:36:15 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/09 23:06:52 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO: ignore space, take into account neg, pos, /t/a/b...
int	ft_ten_power(int val, int times)
{
	int	i;

	i = 0;
	while (i < times)
	{
		val *= 10;
		i++;
	}
	return (val);
}

int	ft_atoi(const char *nptr)
{
	long unsigned int	len;
	int	res;
	int	times;

	res = 0;
	times = 0;
	len = ft_strlen(nptr);
	while (len > 0)
	{
		res += ft_ten_power((nptr[len - 1] - '0'), times);
		times++;
		len--;
	}
	return (res);
}

#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	const char *nptr = "1234";
	printf("%d\n", atoi(nptr));
	printf("%d\n", ft_atoi(nptr));
}
