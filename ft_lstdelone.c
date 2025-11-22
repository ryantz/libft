/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 16:22:51 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/22 21:02:39 by ryatan           ###   ########.fr       */
/* ************************************************************************** */

#include "libft.h"

/*
 * lst: The node to free.
del: The address of the function used to delete
the content.

 * Takes a node as parameter and frees its content
using the function ’del’. Free the node itself but
does NOT free the next node
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
}

int	main(void)
{
	t_list	*lst;
	t_list	*another;
	t_list	*first;
	t_list	*last;
	//t_list	*test;

	lst = ft_lstnew("stranger");
	another = ft_lstnew("there");
	first = ft_lstnew("hello");
	last = ft_lstnew("!!!");

	ft_lstadd_front(&lst, another);
	ft_lstadd_front(&lst, first);
	printf("list size:%d\n", ft_lstsize(lst));
	ft_lstadd_back(&lst, last);

	printf("list size:%d\n", ft_lstsize(lst));
	
	while (lst != NULL)
	{
		printf("%s->", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}
