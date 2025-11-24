/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:29:35 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/24 16:29:36 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	del(void *content)
//{
//	if (content)
//		free(content);
//}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

//int	main(void)
//{
//	t_list	*lst;
//	t_list	*another;
//	t_list	*first;
//	t_list	*last;
//	//t_list	*test;
//
//	lst = ft_lstnew("stranger");
//	another = ft_lstnew("there");
//	first = ft_lstnew("hello");
//	last = ft_lstnew("!!!");
//
//	ft_lstadd_front(&lst, another);
//	ft_lstadd_front(&lst, first);
//	printf("list size:%d\n", ft_lstsize(lst));
//	ft_lstadd_back(&lst, last);
//	ft_lstdelone(lst, del);
//
//	printf("list size:%d\n", ft_lstsize(lst));
//	
//	while (lst != NULL)
//	{
//		printf("%s->", (char *)lst->content);
//		lst = lst->next;
//	}
//	return (0);
//}
