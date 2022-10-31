/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:12:49 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/31 13:57:51 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// void	ft_(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list	*head;
// 	t_list	*tmp;

// 	head=ft_lstnew(ft_strdup("hellow"));
// 	for(int i=0; i<6; i++)
// 		ft_lstadd_back(&head, ft_lstnew(ft_itoa(100+i)));
// 	ft_lstclear(&head, ft_);
// 	tmp = head;
// 	while (tmp)
// 	{
// 		printf("%s\n", tmp->content);
// 		tmp = tmp->next;
// 	}
// }