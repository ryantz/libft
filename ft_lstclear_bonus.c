/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryatan <ryatan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 14:38:31 by ryatan            #+#    #+#             */
/*   Updated: 2025/11/23 15:02:08 by ryatan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	while (lst != NULL)
	{
		del((*lst)->content);
		lst = lst->next;
	}
	free(lst);
}
